#include <iostream>
#include <fstream>
#include <ctime>
#include "algorithms.h"
#include "test_func.hpp"
using namespace std;


int main()
{
	clock_t begin = clock();
	
	double* y;
	double h = 1e-6;
	int n = int((1.0 - 0.0) / h);
	
	y = euler(0.0, 1.0, 1.0, ff, h);
	
	clock_t end = clock();
	cout << (end - begin) << endl;
	
	double err;
	
	fstream out1;
	fstream out2;
	out1.open("error.dat", ios::out);
	out2.open("result.dat", ios::out);
	for (int i = 0; i < n + 1; i++)
	{
		err = real(i * h) - y[i];
		out1 << i * h << "\t";
		out2 << i * h << "\t";
		out2 << y[i] << endl;
		out1 << err << endl;
	}
	delete[] y;
	y = nullptr;
	out1.close();
	out2.close();
}