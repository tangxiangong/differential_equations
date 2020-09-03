#include <iostream>
#include "mkl.h"
using namespace std;

int main()
{
	int* p = (int*)mkl_malloc(sizeof(int), 64);
	*p = 3;
	cout << *p << endl;
	mkl_free(p);
}