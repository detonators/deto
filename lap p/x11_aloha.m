% Throughput Curve Generate for Pure ALOHA and Slotted ALOHA
G = 0:0.25:5;
S_pure_aloha = G .* exp(-2 * G);
S_slotted_aloha = G .* exp(-G);

% Collision Probability and Efficiency calculations
Pc_pure_aloha = 1 - exp(-2 * G);
Pc_slotted_aloha = exp(-G);

Efficiency_pure_aloha = S_pure_aloha ./ (1 + 2 * S_pure_aloha);
Efficiency_slotted_aloha = S_slotted_aloha ./ (1 + S_slotted_aloha);

figure;

% Plot for Pure ALOHA
plot(G, S_pure_aloha, 'rd-', 'LineWidth', 1.5, 'DisplayName', 'Pure ALOHA (Throughput)');
hold on;
plot(G, Pc_pure_aloha, 'g--', 'LineWidth', 1.5, 'DisplayName', 'Pure ALOHA (Collision Probability)');
plot(G, Efficiency_pure_aloha, 'b.-', 'LineWidth', 1.5, 'DisplayName', 'Pure ALOHA (Efficiency)');

% Plot for Slotted ALOHA
plot(G, S_slotted_aloha, 'bd-', 'LineWidth', 1.5, 'DisplayName', 'Slotted ALOHA (Throughput)');
plot(G, Pc_slotted_aloha, 'c--', 'LineWidth', 1.5, 'DisplayName', 'Slotted ALOHA (Collision Probability)');
plot(G, Efficiency_slotted_aloha, 'm.-', 'LineWidth', 1.5, 'DisplayName', 'Slotted ALOHA (Efficiency)');

title('Pure ALOHA vs. Slotted ALOHA Metrics');
xlabel('Load Offered');
ylabel('Metric Value');
legend('Location', 'NorthEastOutside');
grid on;
