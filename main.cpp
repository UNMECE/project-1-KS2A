#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "capacitor.h"

int main() {

	Capacitor capm;

	// assigning values
	double dt = 1e-10;
	double final_time = 5e-6;
	int timestep_no = 50000;
	double R = 1000;
	double C = 100e-12;
	double I_0 = 1e-2;
	double V_0 = 10.0;
	double num_output = 200;

	// allocating memory for capacitor struct arrays
	capm.time = (double*)malloc(timestep_no * sizeof(double));
	capm.voltage = (double*)malloc(timestep_no * sizeof(double));
	capm.current = (double*)malloc(timestep_no * sizeof(double));

	capm.voltage[0] = 0.0;
	capm.current[0] = V_0 / R;

	// printing current and voltage for every 200 timestamps
	for (int i = 1; i < timestep_no; i++) {
		capm.time[i] = i * dt;
		// work out current at time t
		capm.current[i] = capm.current[i - 1] - (capm.current[i - 1] / (R * C)) * dt;
		// work out voltage at time t
		capm.voltage[i] = capm.voltage[i - 1] + capm.current[i - 1] * dt / C;

		if (i % 200 == 0) {
			printf("Time = %e\n", capm.time[i]);
			printf("Current = %e\n", capm.current[i]);
			printf("Voltage = %e\n", capm.voltage[i]);
			printf("\n");
		}
	}

	return 0;
}
