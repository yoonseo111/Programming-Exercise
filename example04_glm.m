% Urban Lab - NERF empowered by imec, KU Leuven and VIB
% Mace Lab  - Max Planck institute of Neurobiology
% Authors:  G. MONTALDO, E. MACE
% Review & test: C.BRUNNER, M. GRILLET
% September 2020

%% Perform Generalized Linear Model (GLM) on dataset 
% loads the average scan of one session. This file is the result of the example 'example02_filter_average.m'
load('scanAverage.mat','scanfus'); 

% Create the GLM regressors
stim=zeros(70,1);
stim(35:45,:)=1;                         % activity is a square window
hrf = hemodynamicResponse(0.1,[2 16 0.5 1 20 0 16]); % hemodynamic response function (hrf) 
stim=filter(hrf,1,stim);                % filter the activity by the hrf
X=[stim, ones(70,1)];                   % model is the filter activity and a constant vector

[B,tscore]=mapGlm(X, scanfus);  % main function uses matlab glmfit

%% Data visualization of activity for the 20 planes (not registered)
%  activity in this case is B(:,:,:,1)./B(:,:,:,2); 
close all
figure(1);
for i=1:size(B,3)
    subplot(4,5,i); 
    imagesc(B(:,:,i,1)./B(:,:,i,2)); 
    TITLE = sprintf('Plane %d', i);
    title (TITLE);
    axis off;
    caxis([-0.4 0.4]);
end
colormap (jet);
suptitle('Activity maps with GLM ');


%% Data visualization of the 20 t-score planes (not registered)
figure(2);
for i=1:size(B,3)
    subplot(4,5,i); 
    imagesc(tscore(:,:,i,1)); 
    TITLE = sprintf('Plane %d', i);
    title (TITLE);
    axis off;
    caxis([-3 3]);
end
colormap (jet);
suptitle('t-score maps of the 1st regressor');


