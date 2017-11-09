#include <iostream>
#include <math.h>
#include "zaokr.h"
using namespace std;
double Zaokr(double x, int q)
{
	double tmp = x * pow(10, q);

	if (tmp - floor(tmp) < 0.5)
		tmp = floor(tmp);
	else
		tmp = floor(x) + 1;

	return tmp / pow(10, q);
}