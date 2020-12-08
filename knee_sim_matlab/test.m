%test
clc

%initpos = [0, -0.02, 0.41];
%initpos = [-0.019, -0.04, 0.425];
%initrot = [-0.38,-0.26,0.633,0.622];

pos0flex = [-0.00400000000000000,-0.0200000000000000,-0.0190000000000000];
pos90flex = [-0.0240000000000000,-0.164000000000000,0.0153000000000000];
quat0flex = [-0.0400000000000000,0.0382000000000000,0.744300000000000,0.665600000000000];
quat90flex = [0.573500000000000,0.447900000000000,-0.414000000000000,-0.547000000000000];

%[femurtrans, femurrot] = posecalc(pos0flex, quat0flex);
%[femurpos, a45orig] = posecalc(initpos, pos45flex,initrot, quat45flex);
%[femurpos, a90orig] = posecalc(initpos, pos90flex, initrot, quat90flex);
%simOut = sim('kneesim');

%a0recalc = rad2deg(rotm2eul(a0orig))
%a45recalc = rad2deg(rotm2eul(a45orig))
%a90recalc = rad2deg(rotm2eul(a90orig))
%a0original = rad2deg(rotm2eul(quat2rotm(quat0flex)))
%a45original = rad2deg(rotm2eul(quat2rotm(quat45flex)))
%a90original = rad2deg(rotm2eul(quat2rotm(quat90flex)))
initpos = [0, -0.025, 0.425];
initrot = [180, 0, 90];
femurangles = [220, 5, 93];
flex = femurangles(1)-initrot(1);
varval = femurangles(3)-initrot(3);
femurrot = roty(-90)*rotz(-90)*rotz(flex)*rotx(femurangles(2))*roty(-varval);
if flex>-180 
    translate = 0; 
else
    translate = (360+flex)*0.011;
end
femurtrans = initpos + [0, -0.01, 0.03]*translate;
sim('kneesim');
