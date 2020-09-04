#include "algorithms.h"
#include <iostream>
using namespace std;

double* euler(double a, double b, double y_a, double (*f)(double, double), double h)
{
	int64_t n = int((b - a) / h);
	
	double* x = new double[n + 1];
	for (int i = 0; i < n + 1; i++)
		x[i] = a + i * h;

	double* y = new double[n + 1];
	y[0] = y_a;
	for (int i = 1; i < n + 1; i++)
		y[i] = y[i - 1] + h*f(x[i - 1], y[i - 1]);

	delete[] x;
	x = nullptr;
	return y;
}