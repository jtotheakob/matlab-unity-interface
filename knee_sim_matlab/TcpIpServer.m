clear all
clc

%% Variable declaration
%rises each iteration of while loop to store data
k = 1;

%match precision with unity script "TcpIpClient.cs"
%defines the size of the values recieved over the network
precision = 6;

%% Set-up Server
%match ip-adress and port with unity script "TcpIpClient.cs"
%setting up a local server 
tcpipServer = tcpip('127.0.0.1',55000,'NetworkRole','Server');
data = membrane(1);
fprintf('Server Set-up');
fopen(tcpipServer);

%% Start Server Loop

while(1)  
    %% recieve position data and write to datainput
    %flush input to only recieve newest pose data from network
    flushinput(tcpipServer);
    
    %read data from network stream and store in datainput array
    rawData = fread(tcpipServer,precision*14,'char');
    for i=1:precision 
        femurposx(i)= char(rawData(i));
        femurposy(i+precision)= char(rawData(i+precision));
        femurposz(i+precision*2)= char(rawData(i+precision*2));
        femurquatw(i+precision*3)= char(rawData(i+precision*3));
        femurquata(i+precision*4)= char(rawData(i+precision*4));
        femurquatb(i+precision*5)= char(rawData(i+precision*5));
        femurquatc(i+precision*6)= char(rawData(i+precision*6));
        tibiaposx(i+precision*7)= char(rawData(i+precision*7));
        tibiaposy(i+precision*8)= char(rawData(i+precision*8));
        tibiaposz(i+precision*9)= char(rawData(i+precision*9));
        tibiaquatw(i+precision*10)= char(rawData(i+precision*10));
        tibiaquata(i+precision*11)= char(rawData(i+precision*11));
        tibiaquatb(i+precision*12)= char(rawData(i+precision*12));
        tibiaquatc(i+precision*13)= char(rawData(i+precision*13));
    end
    
    datainput(k, 1) = str2double(femurposx);
    datainput(k, 2) = str2double(femurposy);
    datainput(k, 3) = str2double(femurposz);
    datainput(k, 4) = str2double(femurquatw);
    datainput(k, 5) = str2double(femurquata);
    datainput(k, 6) = str2double(femurquatb);
    datainput(k, 7) = str2double(femurquatc);
    datainput(k, 8) = str2double(tibiaposx);
    datainput(k, 9) = str2double(tibiaposy);
    datainput(k, 10) = str2double(tibiaposz);
    datainput(k, 11) = str2double(tibiaquatw);
    datainput(k, 12) = str2double(tibiaquata);
    datainput(k, 13) = str2double(tibiaquatb);
    datainput(k, 14) = str2double(tibiaquatc);
    
    %create position and rotation matrizes and quaternions
    femurpos = [datainput(k, 1), datainput(k, 2), datainput(k, 3)];
    femurquat = [datainput(k, 4), datainput(k, 5), datainput(k, 6), datainput(k, 7)];
    tibiapos = [datainput(k, 8), datainput(k, 9), datainput(k, 10)];
    tibiaquat = [datainput(k, 11), datainput(k, 12), datainput(k, 13), datainput(k, 14)];

    %% calculation and simulation
    %call position calculation
    [femurtrans, femurrot] = posecalc(femurpos, femurquat);
    
    %call simulation
    simOut = sim('kneesim');
    dataoutput(k, 1) = simOut.lcldefl(1);
    dataoutput(k, 2) = simOut.mcldefl(1);
    
    %call force calculation and save results to dataoutput array
    [lclforce, mclforce] = forcecalc(dataoutput(k,1), dataoutput(k,2));
   
    %% send results pack to unity
    fwrite(tcpipServer,num2str(lclforce));
    fwrite(tcpipServer,num2str(mclforce));
    
    %increase k for next iteration
    k = k+1;   

end

fclose(tcpipServer);



