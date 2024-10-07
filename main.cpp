#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "capacitor.h"

void voltage(double *time, double *voltage, double *current, double C) {



}

void current(double* time, double* voltage, double* current, double C) {



}

int main() {

	Capacitor capm;

	double dt = 1e-10;
	double final_time = 5e-6;
	int timestep_no = 50000;
	double R = 1000;
	double C = 100e-12;
	double I_0 = 1e-2;
	double V_0 = 10.0;
	double num_output = 200;

	double* time = (double*)malloc(sizeof(double));
	double* voltage = (double*)malloc(sizeof(double));
	double* current = (double*)malloc(sizeof(double));

	for (int i = 0; i < timestep_no; i++) {

	}

	return 0;
}
