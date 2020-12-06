function [lclforce, mclforce] = ForceCalc(lcldefl, mcldefl)
%FORCECALC calculates the ligament forces LCLFORCE and MCLFORCE
%
%Two deflection values LCLDEFL and MCLDEFL are taken as an input. The
%deflection ranges between 0.04m to 0.09m. The output LCLFORCE and MCLFORCE is calculated
%by applying hooke's law with the spring constant of 1(N/m) and a deflection 
%change that is calculated relative to the medium value; i.e., 0.05m and 0.55m.

%spring constant
k = 1;

%calculate spring force
lclforce = (abs(lcldefl)-0.050)*k;
mclforce = (abs(mcldefl)-0.055)*k;

end
