% Setting up LTE Test Model
config = lteTestModel('1.1', '5MHz');  % Test Model 1.1, 5MHz bandwidth
config.TotSubframes = 100;             % Generate 100 subframes
[waveform, tmgrid, config] = lteTestModelTool(config);

% Plotting Time Domain Signal
figure;
subplot(2, 1, 1);
plot(0:1/config.SamplingRate:(length(waveform)-1)/config.SamplingRate, real(waveform));
title('Time Domain Signal (Real Part)');
xlabel('Time (s)');
ylabel('Amplitude');
grid on;

subplot(2, 1, 2);
plot(0:1/config.SamplingRate:(length(waveform)-1)/config.SamplingRate, imag(waveform));
title('Time Domain Signal (Imaginary Part)');
xlabel('Time (s)');
ylabel('Amplitude');
grid on;

% Calculating Spectral Content
spectrumPlotTx = spectrumAnalyzer;
spectrumPlotTx.SampleRate = config.SamplingRate;
spectrumPlotTx.SpectrumType = 'power-density';
spectrumPlotTx.SpectrumUnits =  'dBm';
spectrumPlotTx.RBWSource = 'Property';
spectrumPlotTx.RBW = 15e3;
spectrumPlotTx.FrequencySpan = 'span-and-center-frequency';
spectrumPlotTx.Span = 7.68e6;
spectrumPlotTx.CenterFrequency = 0;
spectrumPlotTx.Window = 'rectangular';
spectrumPlotTx.YLimits = [-100 -60];
spectrumPlotTx.YLabel = 'PSD';
spectrumPlotTx.Title = 'Test Model E-TM1.1, 5 MHz Signal Spectrum';
spectrumPlotTx.ShowLegend = false;
spectrumPlotTx(waveform);



% IQ Constellation Plot
figure;
scatter(real(waveform), imag(waveform));
title('IQ Constellation Plot');
xlabel('In-Phase');
ylabel('Quadrature');
grid on;

% ... (previous code)

% Introduce some noise to simulate potential faults
receivedSignal = waveform + 0.1 * randn(size(waveform));

% Plotting received signal
figure;
subplot(2, 1, 1);
plot(0:1/config.SamplingRate:(length(receivedSignal)-1)/config.SamplingRate, real(receivedSignal));
title('Received Signal (Real Part)');
xlabel('Time (s)');
ylabel('Amplitude');
grid on;

subplot(2, 1, 2);
plot(0:1/config.SamplingRate:(length(receivedSignal)-1)/config.SamplingRate, imag(receivedSignal));
title('Received Signal (Imaginary Part)');
xlabel('Time (s)');
ylabel('Amplitude');
grid on;

% Checking for errors in the received signal
errors = receivedSignal - waveform;

% Plotting error signal
figure;
plot(0:1/config.SamplingRate:(length(errors)-1)/config.SamplingRate, real(errors));
title('Error Signal (Real Part)');
xlabel('Time (s)');
ylabel('Error Amplitude');
grid on;

% Analyzing error statistics
meanError = mean(errors);
stdError = std(errors);
disp(['Mean of errors: ', num2str(meanError)]);
disp(['Standard deviation of errors: ', num2str(stdError)]);
