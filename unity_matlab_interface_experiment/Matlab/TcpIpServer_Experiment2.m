clear all
clc

%% Declaring of variables
%match precision with unity script "TcpIpClient.cs"
precision = 6;
k =1;

%% Setting up a local TCP/IP server

tcpipServer = tcpip('127.0.0.1',55000,'NetworkRole','Server');
fopen(tcpipServer);
fprintf('server set-up and connection successful');

%% Start Server Loop

while(1)  
    %% Receiving position data
    %flush input to delete data queue
    flushinput(tcpipServer);
    
    %read data from network stream    
    rawData = fread(tcpipServer,14*precision,'char');
    
    %convert received data to numbers
    [pos1, rot1, pos2, rot2] = ConvertData(rawData, precision);

    %% Experiment 2
    %the target distance vector is sent back to Unity
    targetdistance = pos1 - pos2;
    
   
    %% Send results back to unity
    fwrite(tcpipServer,num2str(round(targetdistance(1),2)));
    pause(0.01);
    fwrite(tcpipServer,num2str(round(targetdistance(2),2)));
    pause(0.01);
    fwrite(tcpipServer,num2str(round(targetdistance(3),2)));
    pause(0.01);

end

fclose(tcpipServer);



