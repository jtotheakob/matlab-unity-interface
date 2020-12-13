function [femurtrans,femurrot] = PoseCalc(~, femurquat)
%PoseCalc takes FEMURPOS and FEMURQUAT as an input and returns a 
%translation vector FEMURTRANS and a rotation matrix FEMURROT
%
%First, the initial rotation of the knee joint INITROT is set to full 
%extension or 0° of flexion with 0° of varus/valgus rotation and also 0° 
%of internal/external rotation. The initial pose INITPOS is set to create
%a slight extension gap. Second, the quaternion FEMURQUAT is converted to
%a vector FEMURANGLES containing the euler angles, with the flexion/
%extension rotation stored in the x-coordinate, the internal/external 
%rotation in the y-coordinate and the varus/valgus rotation in the 
%z-coordinate. Subsequently, the initial rotation and the current 
%rotation are combined and the rotation matrix FEMURROT is calculated. 
%Finally, the anterior-posterior and the distal-proximal movement of the 
%femur during flexion is calculated and the translation vector FEMURTRANS
%created. 
%
%% Initialize variables and values
initpos = [0, -0.02, 0.425];
initrot = [180, 0, 90];

%% Add rotation
%convert quaternion to vector with euler angles
femurangles = rad2deg(rotm2eul(quat2rotm(femurquat)));

%substract initial rotation from current rotation
flex = femurangles(1)-initrot(1);
varval = femurangles(3)-initrot(3);

%calculate rotation matrix
femurrot = roty(-90)*rotz(-90)*rotz(flex)*rotx(femurangles(2))*roty(-varval);

%% Add distance
%calculate anterior-posterior and distal-proximal movement during flexion
if flex>-180 
    translate = 0; 
else
    translate = (360+flex)*0.011;
end

%add translation movement to the translation vector
femurtrans = initpos + [0, -0.01, 0.03]*translate;

end
