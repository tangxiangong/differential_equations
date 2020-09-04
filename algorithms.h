#pragma once
#include <iostream>
using namespace std;

/*! һ�׳�΢�ַ��̳�ֵ����
*  \f[ \frac{dy}{dx}=f(x,y), \forall x\in [a,b], \f]
*  \f[ y(a)=y_a \f]
*/
// Euler method
double* euler(double, double, double, double (*f)(double, double), double);
