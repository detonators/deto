% Input parameters
EIRPu = input('Enter uplink EIRP:');
EIRPd = input('Enter downlink EIRP:');
GTRu = input('Enter uplink G/T:');
GTRd = input('Enter downlink G/T:');
FSLu = input('Enter uplink FSL:');
FSLd = input('Enter downlink FSL:');
RFLu = input('Enter uplink RFL:');
RFLd = input('Enter downlink RFL:');
AAu = input('Enter uplink AA:');
AAd = input('Enter downlink AA:');
AMLu = input('Enter uplink AML:');
AMLd = input('Enter downlink AML:');

% Calculate losses
Lossu = FSLu + RFLu + AAu + AMLu;
Lossd = FSLd + RFLd + AAd + AMLd;

% Calculate CNR components
CNRu = EIRPu + GTRu - Lossu + 228.6;
CNRd = EIRPd + GTRd - Lossd + 228.6;

% Combine CNR
CNR = 1 / (1/CNRu + 1/CNRd);

% Display CNR values
disp(sprintf('%s %.2f %s', 'Lossu:', Lossu, 'decilog'));
disp(sprintf('%s %.2f %s', 'Lossd:', Lossd, 'decilog'));
disp(sprintf('%s %.2f %s', 'Total CNR for uplink:', CNRu, 'decilog'));
disp(sprintf('%s %.2f %s', 'Total CNR for downlink:', CNRd, 'decilog'));
disp(sprintf('%s %.2f %s', 'Total CNR is:', CNR, 'decilog'));

% Plotting
figure;

barh([Lossu, Lossd, CNRu, CNRd, CNR]);
title('Uplink and Downlink Analysis');
xlabel('Values (decilog)');
yticks(1:5);
yticklabels({'Loss for Uplink', 'Loss for Downlink', 'Total CNR for Uplink', 'Total CNR for Downlink', 'Total CNR'});
grid on;

% Adjusting axis limits for better visualization
xlim([min([Lossu, Lossd, CNRu, CNRd, CNR])-1, max([Lossu, Lossd, CNRu, CNRd, CNR])+1]);

