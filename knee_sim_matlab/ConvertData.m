function [femurpos,femurquat,tibiapos,tibiaquat] = ConvertData(rawData,precision)
%RAWDATA is converted from a sequence of bytes to two vectors and two quaternions.
%
%The input RAWDATA is a sequence of bytes. First the sequence has to be split 
%into parts of equal length. The length of each sub-sequence is fixed and defined 
%by the variable PRECISION. Each byte of the sub-sequence is converted into 
%a character and stored as a string. Finally, the string is converted to a double 
%value and used for the assembly of the adequate position vector or rotation quaternion

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
    
    femurpos = [str2double(femurposx),str2double(femurposy),str2double(femurposz)];
    femurquat = [str2double(femurquatw),str2double(femurquata),str2double(femurquatb),str2double(femurquatc)];
    tibiapos = [str2double(tibiaposx),str2double(tibiaposy),str2double(tibiaposz)];
    tibiaquat = [str2double(tibiaquatw),str2double(tibiaquata),str2double(tibiaquatb),str2double(tibiaquatc)];
end