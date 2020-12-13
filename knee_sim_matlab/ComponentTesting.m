%Component Tesing script for the CONVERT DATA function
%
%In this component testing szenario, the CONVERTDATA function is tested.
%First two edge case test vectors and quaternions each are declared.
%Subsequently, the individual components are converted first to strings and
%then two bytes. The array of bytes called DATA represents a data package
%that Matlab received from the client. In order to test the CONVERTDATA
%function, the data package is given as an input to the function and the
%results are compared with the initial declaration of the vectors and
%quaternions. If all of them are alike the test will return "Test succeded!".
clc
clear all
n = input('Enter a number: ');

%edge case definition
switch n
    case 1 %eigenvector and quaternion with 0 rotation
        quaternion1 = [1,0,0,0];
        vector1 = [1,0,0];
        quaternion2 = [1,0,0,0];
        vector2 = [1,0,0];
        precision = 1;
     case 2 %all values are 0
        quaternion1 = [0,0,0,0];
        vector1 = [0,0,0];
        quaternion2 = [0,0,0,0];
        vector2 = [0,0,0];
        precision = 1;
    case 3 %random values
        quaternion1 = [0.0011,0.0012,0.0013,0.0014];
        vector1 = [0.0021,0.0022,0.0023];
        quaternion2 = [0.0031,0.0032,0.0033,0.0034];
        vector2 = [0.0042,0.0042,0.0043];
        precision = 6;
end
        
%convert edge case data to data package that is received from client
data(1:precision) = unicode2native(num2str(vector1(1)));
data(precision+1:precision*2) = unicode2native(num2str(vector1(2)));
data(precision*2+1:precision*3) = unicode2native(num2str(vector1(3)));
data(precision*3+1:precision*4) = unicode2native(num2str(quaternion1(1)));
data(precision*4+1:precision*5) = unicode2native(num2str(quaternion1(2)));
data(precision*5+1:precision*6) = unicode2native(num2str(quaternion1(3)));
data(precision*6+1:precision*7) = unicode2native(num2str(quaternion1(4)));
data(precision*7+1:precision*8) = unicode2native(num2str(vector2(1)));
data(precision*8+1:precision*9) = unicode2native(num2str(vector2(2)));
data(precision*9+1:precision*10) = unicode2native(num2str(vector2(3)));
data(precision*10+1:precision*11) = unicode2native(num2str(quaternion2(1)));
data(precision*11+1:precision*12) = unicode2native(num2str(quaternion2(2)));
data(precision*12+1:precision*13) = unicode2native(num2str(quaternion2(3)));
data(precision*13+1:precision*14) = unicode2native(num2str(quaternion2(4)));

%return the results from the CONVERTDATA function
[testvector1, testquaternion1, testvector2, testquaternion2] = ConvertData(data,precision);

%test if the results match the initial data
if (isequal(testvector1,vector1) & isequal(testvector2,vector2) & isequal(testquaternion1,quaternion1) &  isequal(testquaternion2,quaternion2))
    fprintf("Test succeded!\n");
else
     fprintf("Test failed!\n");
end






