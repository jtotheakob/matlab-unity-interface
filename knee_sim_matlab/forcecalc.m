function [lclforce, mclforce] = forcecalc(lcldefl, mcldefl)
%feather stiffness
k = 1;

lclforce = lcldefl*k;
mclforce = mcldefl*k;

end
