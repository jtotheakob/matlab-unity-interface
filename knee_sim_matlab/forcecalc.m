function [lclforce, mclforce] = forcecalc(lcldefl, mcldefl)
%spring stiffness of tendons
k = 1;

%deflection in the simulation ranges from 0.04 to 0.09
%medium value set to 0.05 (lcl) and 0.55 (mcl)
lclforce = (abs(lcldefl)-0.050)*k;
mclforce = (abs(mcldefl)-0.055)*k;

end
