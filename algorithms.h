#pragma once
#include <iostream>
using namespace std;

/*! 一阶常微分方程初值问题
*  \f[ \frac{dy}{dx}=f(x,y), \forall x\in [a,b], \f]
*  \f[ y(a)=y_a \f]
*/
// Euler method
double* euler(double, double, double, double (*f)(double, double), double);
