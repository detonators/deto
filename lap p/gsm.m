% GSM Uplink Configuration
cfggsmul = gsmUplinkConfig;
wfInfo_uplink = gsmInfo(cfggsmul);
Rs_uplink = wfInfo_uplink.SampleRate;
waveform_uplink = gsmFrame(cfggsmul);

% Plot GSM Uplink Waveform - Amplitude and Phase
t_uplink = (0:length(waveform_uplink)-1)/Rs_uplink*1e3;
figure;
subplot(2,1,1);
plot(t_uplink, abs(waveform_uplink));
grid on;
axis([0 5 0 1.2]);
title('GSM Uplink Waveform - Amplitude');
xlabel('Time (ms)');
ylabel('Amplitude');
subplot(2,1,2);
plot(t_uplink, unwrap(angle(waveform_uplink)));
grid on;
title('GSM Uplink Waveform - Phase');
xlabel('Time (ms)');
ylabel('Phase (rad)');

% GSM Downlink Configuration
cfggsmdl = gsmDownlinkConfig;
wfInfo_downlink = gsmInfo(cfggsmdl);
Rs_downlink = wfInfo_downlink.SampleRate;
waveform_downlink = gsmFrame(cfggsmdl);

% Plot GSM Downlink Waveform - Amplitude and Phase
t_downlink = (0:length(waveform_downlink)-1)/Rs_downlink*1e3;
figure;
subplot(2,1,1);
plot(t_downlink, abs(waveform_downlink));
grid on;
axis([0 5 0 1.2]);
title('GSM Downlink Waveform - Amplitude');
xlabel('Time (ms)');
ylabel('Amplitude');
subplot(2,1,2);
plot(t_downlink, unwrap(angle(waveform_downlink)));
grid on;
title('GSM Downlink Waveform - Phase');
xlabel('Time (ms)');
ylabel('Phase (rad)');

% Simulate Transmission and Reception with AWGN
SNR_dB = 20; % Adjust SNR as needed
received_waveform_uplink = awgn(waveform_uplink, SNR_dB, 'measured');
received_waveform_downlink = awgn(waveform_downlink, SNR_dB, 'measured');

% Compare received and original waveforms
figure;
subplot(2,1,1);
plot(t_uplink, abs(received_waveform_uplink), 'r');
hold on;
plot(t_uplink, abs(waveform_uplink), 'b--');
grid on;
title('Comparison of Uplink Original and Received Waveforms - Amplitude');
xlabel('Time (ms)');
ylabel('Amplitude');
legend('Received', 'Original');

subplot(2,1,2);
plot(t_downlink, abs(received_waveform_downlink), 'r');
hold on;
plot(t_downlink, abs(waveform_downlink), 'b--');
grid on;
title('Comparison of Downlink Original and Received Waveforms - Amplitude');
xlabel('Time (ms)');
ylabel('Amplitude');
legend('Received', 'Original');
