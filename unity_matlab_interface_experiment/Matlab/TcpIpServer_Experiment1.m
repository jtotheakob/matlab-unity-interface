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
    rawData = fread(tcpipServer,5,'char');
    
    %convert received data to numbers
    target1 = str2double(char(rawData(1)));
    target2 = str2double(char(rawData(2)));
    target3 = str2double(char(rawData(3)));
    target4 = str2double(char(rawData(4)));
    target5 = str2double(char(rawData(5)));

    %% Experiment 1
    %the experimentresult is sent back to Unity
    experimentresult = (target1 - target2) + target3*target4 - target5;
   
    %% Send results back to unity
    fwrite(tcpipServer,num2str(experimentresult));

end

fclose(tcpipServer);



