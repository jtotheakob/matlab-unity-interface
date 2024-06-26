clear all
clc

%% Declaring of variables
%match precision with unity script "Client.cs"
%defines the length of the sub-sequences of the byte sequence received 
%over TCP
precision = 6;

%% Setting up a local TCP/IP server
%
%This script functions as a local TCP server. For that, the IP adress 
%and the port number have to be declared in a first step. The loopback IP
%address '127.0.0.1' and the port '55000' were chosen to allow for a 
%connection without any associated hardware. The values have to be 
%matched with the "Client.cs" script. Next, the networkstream is opened 
%in order to wait for a connection with a client. In case of a successful
%server set-up and connection, the user is informed via the console.

tcpServer = tcpip('127.0.0.1',55000,'NetworkRole','Server');
fopen(tcpServer);
fprintf('server set-up and connection successful');

%% Start Server Loop

while(1)  
%% Receiving position data
%
%First, the input stream is flushed in order to delete unread data 
%packages that queued up in the stream. Subsequently, the newest data
%package is read into the variable RAWDATA. The length of the input 
%sequence is defined by the PRECISION of each value multiplied by the
%total number of values that are demanded. In total this number is 14, 
%since there are three position values per target (i.e., x-, y- and 
%z-position) and four rotation values (quaterion). Finally, the vectors 
%and quaterions are reassembled with the CONVERTDATA function; i.e., 
%femur position vector (FEMURPOS), femur rotation quaternion (FEMURQUAT),
%tibia position vector (TIBIAPOSE) and tibia rotation quaternion
%(TIBIAQUAT).
%
    %flush input to delete data queue
    flushinput(tcpServer);
    
    %read data from network stream    
    rawData = fread(tcpServer,precision*14,'char');
    
    %convert received data to vectors and quaternions
    [femurpos,femurquat,tibiapos,tibiaquat] = ConvertData(rawData,precision);

%% Calculating pose, run simulation and calculate force
%
%Prior to calling the simulation, the pose of the femur in the simulation
%has to be calculated. The function POSECALC takes the femur position 
%vector and the femur rotation quaternion and returns a translation 
%vector and a rotation matrix that are accessed in the rigid transform 
%block ground-femur. The SimuLink model KNEESIM is called and the output 
%is stored to the workspace. The function FORCECALC takes the very output
%as an input to calculate the lateral and medial collateral ligament 
%force.
%
    %calculate the femur pose relative to the tibia
    [femurtrans,femurrot] = PoseCalc(femurpos,femurquat);
    
    %call the simulation
    simOut = sim('kneesim');
    
    %calculate ligament forces
    [lclforce,mclforce] = ForceCalc(simOut.lcldefl(1),simOut.mcldefl(1));
   
    %% Send results back to unity
    fwrite(tcpServer,num2str(lclforce));
    fwrite(tcpServer,num2str(mclforce));

end

fclose(tcpServer);



