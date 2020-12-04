function [femurpos,femurrot] = posecalc(initpos, femurpos, initrot, femurquat)
%% add distance

%femurpos(1) = initpos(1)+femurpos(3)*-1;
%femurpos(2) = initpos(2)+femurpos(2)*-1;
%femurpos(3) = initpos(3)+femurpos(1)*-1;

femurpos = initpos;


%% add rotation
femurangles = rad2deg(rotm2eul(quat2rotm(femurquat)));
flex = femurangles(1);
introt = femurangles(2);
varval = femurangles(3);
flex = flex-initrot(1);
varval = varval-initrot(3);
femurrot = roty(-90)*rotz(-90)*rotz(flex)*rotx(introt)*roty(-varval);

%Varus/Valgus Rotation - x-axis
%Internal/External Rotation - y-axis
%Flexion/Extension - z-axis
end
