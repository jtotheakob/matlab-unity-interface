function [femurtrans,femurrot] = posecalc(~, femurquat)
%% initialize variables and values
initpos = [0, -0.02, 0.425];
initrot = [180, 0, 90];

%% add rotation
femurangles = rad2deg(rotm2eul(quat2rotm(femurquat)));
%Flexion/Extension
flex = femurangles(1);
%Internal/External Rotation
introt = femurangles(2);
%Varus/Valgus Rotation
varval = femurangles(3);

%substract initial rotation from current rotation
flex = flex-initrot(1);
varval = varval-initrot(3);

%calculate rotation matrix
femurrot = roty(-90)*rotz(-90)*rotz(flex)*rotx(introt)*roty(-varval);

%% add distance
%calculate anterior-posterior and distal-proximal movement during flexion
if flex>-180 translate = 0; 
else translate = (360+flex)*0.011; 
end

%add translation movement to the translation matrix
femurtrans = initpos + [0, -0.01, 0.03]*translate;

end
