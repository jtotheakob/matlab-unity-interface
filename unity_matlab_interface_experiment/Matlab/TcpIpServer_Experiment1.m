clear all
clc

%% Declaring of variables
%match precision with unity script "TcpIpClient.cs"
precision = 6;
k =1;

%% Setting up a local TCP/IP server

tcpServer = tcpip('127.0.0.1',55000,'NetworkRole','Server');
fopen(tcpServer);
fprintf('server set-up and connection successful');

%% Start Server Loop

while(1)  
    %% Receiving position data
    %flush input to delete data queue
    flushinput(tcpipServer);
    
    %read all 5 target values received from Unity    
    rawData = fread(tcpServer,5,'char');
    
    %convert all 5 received values to numbers
    target1 = str2double(char(rawData(1)));
    target2 = str2double(char(rawData(2)));
    %[...]
        

    target3 = str2double(char(rawData(3)));
    target4 = str2double(char(rawData(4)));
    target5 = str2double(char(rawData(5)));

    %% Experiment 1
    %result is send back to Unity
    result = (target1 - target2)*target3 + target4 - target5;
   
    %send results back to Unity
    fwrite(tcpServer,num2str(result));

end

fclose(tcpipServer);



