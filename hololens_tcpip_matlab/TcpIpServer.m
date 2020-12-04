clc
clear all
tcpipServer = tcpip('10.0.7.83',9000,'NetworkRole','Server');
data = membrane(1);
fopen(tcpipServer);

while(1)

rawData = fread(tcpipServer,4,'char');
for i=1:4 
    rawwData(i)= char(rawData(i));
end
    rawwData
end

fclose(tcpipServer);