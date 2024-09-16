close all;

pt = input('Enter the input power in watts:');
pt = 10 * log10(pt);

gt = input('Enter the transmitting antenna gain in dB:');
Gt = 10 * log10(gt);

gs = input('Enter the receiving antenna gain in dB:');
GS = 10 * log10(gs);

EIRP = pt + gt;

d = input('Enter the distance in km:');
f = input('Enter the frequency in MHz:');
fsl = 32.4 + 20 * log10(d) + 20 * log10(f);

aa = input('Enter the atmospheric absorption in dB:');
rfl = input('Enter the receiver feeder loss in dB:');
aml = input('Enter the antenna misalignment loss in dB:');
pl = input('Enter the polarization loss in dB:');

losses = fsl + rfl + aa + aml + pl;
disp(sprintf('%s %.2f %s', 'Total loss =', losses, 'dB'));
disp(sprintf('%s %.2f %s', 'FSL =', fsl, 'dB'));

p = EIRP + GS - losses;
disp(sprintf('%s %.2f %s', 'Total received power =', p, 'dB'));

% Plotting
figure;

bar([EIRP, -fsl, GS, -losses]);
title('Link Budget Components');
xlabel('Components');
ylabel('Power (dB)');
legend('EIRP', 'Free Space Loss', 'Receiving Antenna Gain', 'Total Loss');

grid on;
