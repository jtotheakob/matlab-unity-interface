clear all
clc

%% Declaring of variables
%match precision with unity script "TcpIpClient.cs"
precision = 6;
k =1;

%% Setting up a local TCP/IP server

tcpipServer = tcp('127.0.0.1',55000,'NetworkRole','Server');
fopen(tcpServer);
fprintf('server set-up and connection successful');

%% Start Server Loop

while(1)  
    %% Receiving position data
    %flush input to delete data queue
    flushinput(tcpipServer);
    
    %read all 6 coordinates received from Unity    
    rawData = fread(tcpServer,6,'char');
    
    %convert coordinates to two vectors
    [pos1, pos2] = ConvertData(rawData);

    %% Experiment 2
    %calculate distance vector
    distance = pos1 - pos2;
    
   
    %% Send results back to unity
    %send all three distance values to Unity
    fwrite(tcpServer,num2str(distance(1)));
    fwrite(tcpServer,num2str(distance(2)));
    fwrite(tcpServer,num2str(distance(3)));
    pause(0.01);

end

fclose(tcpipServer);



