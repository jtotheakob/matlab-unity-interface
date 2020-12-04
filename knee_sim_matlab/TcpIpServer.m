clc
clear all

%% Set-up Server 

tcpipServer = tcpip('127.0.0.1',55000,'NetworkRole','Server');
data = membrane(1);
fprintf('Server Set-up');
fopen(tcpipServer);
k = 1;
j = 100;
precision = 6;


%% Start Server Loop

while(1)  
    %% recieve position data and write to dataarray
    flushinput(tcpipServer);
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
    
    dataarray(k, 1) = str2double(femurposx);
    dataarray(k, 2) = str2double(femurposy);
    dataarray(k, 3) = str2double(femurposz);
    dataarray(k, 4) = str2double(femurquatw);
    dataarray(k, 5) = str2double(femurquata);
    dataarray(k, 6) = str2double(femurquatb);
    dataarray(k, 7) = str2double(femurquatc);
    dataarray(k, 8) = str2double(tibiaposx);
    dataarray(k, 9) = str2double(tibiaposy);
    dataarray(k, 10) = str2double(tibiaposz);
    dataarray(k, 11) = str2double(tibiaquatw);
    dataarray(k, 12) = str2double(tibiaquata);
    dataarray(k, 13) = str2double(tibiaquatb);
    dataarray(k, 14) = str2double(tibiaquatc);
    
    femurpos = [dataarray(k, 1), dataarray(k, 2), dataarray(k, 3)];
    femurquat = [dataarray(k, 4), dataarray(k, 5), dataarray(k, 6), dataarray(k, 7)];
    tibiapos = [dataarray(k, 8), dataarray(k, 9), dataarray(k, 10)];
    tibiaquat = [dataarray(k, 11), dataarray(k, 12), dataarray(k, 13), dataarray(k, 14)];

    
    %% calculate knee-position values and give data to simulation
    initpos = [0, -0.02, 0.44];
    %initpos = initpos + [
    initrot = [180, 0, 90];
    [femurpos, femurrot] = posecalc(initpos, femurpos, initrot, femurquat);

    simOut = sim('kneesim');
    
    [lclforce, mclforce] = forcecalc(simOut.lcldefl(1), simOut.mcldefl(1));
   

    %% send results pack to unity
    dataoutput(k, 1) = lclforce;
    dataoutput(k, 2) = mclforce;
    fwrite(tcpipServer,num2str(lclforce));
    fwrite(tcpipServer,num2str(mclforce));
    k = k+1; %rises each iteration of the loop    

end

fclose(tcpipServer);



