% Simulated Geographical Position Plot
numSamples = 100;
latitude = linspace(37.7749, 37.7759, numSamples);
longitude = linspace(-122.4194, -122.4184, numSamples);

% Create figure for geographical position plot
figure;
plotHandle = plot(longitude(1), latitude(1), 'o-', 'LineWidth', 2);
title('Simulated Geographical Position');
xlabel('Longitude');
ylabel('Latitude');
grid on;

% Update geographical position in real-time
for i = 2:numSamples
    % Update plot
    set(plotHandle, 'XData', longitude(1:i), 'YData', latitude(1:i));
    title(['Simulated Geographical Position - Sample ' num2str(i)]);
    
    % Pause for a moment to visualize the changes
    pause(0.1);
end

% Simulate GPS Sensor in Simulink
fs = 1;
duration = 1000;
numSamples = duration * fs;

refLoc = [42.2825, -71.343, 53.0352];

truePosition = zeros(numSamples, 3);
trueVelocity = zeros(numSamples, 3);

gps = gpsSensor('SampleRate', fs, 'ReferenceLocation', refLoc);

position = gps(truePosition, trueVelocity);
t = (0:(numSamples-1)) / fs;

% Plot GPS Sensor Readings
figure;
subplot(3, 1, 1);
plot(t, position(:, 1), t, ones(numSamples, 1) * refLoc(1))
title('GPS Sensor Readings - Latitude')
ylabel('Latitude (degrees)')

subplot(3, 1, 2)
plot(t, position(:, 2), t, ones(numSamples, 1) * refLoc(2))
title('GPS Sensor Readings - Longitude')
ylabel('Longitude (degrees)')

subplot(3, 1, 3)
plot(t, position(:, 3), t, ones(numSamples, 1) * refLoc(3))
title('GPS Sensor Readings - Altitude')
ylabel('Altitude (m)')
xlabel('Time (s)')
