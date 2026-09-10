#include <iostream>
#include "makhalov.h"


double percentOf(double p, double x) {
	return	x * p / 100;
}

double whatPercent(double a, double b) {
	return	a / b * 100;
}

double	numberFromPercent(double a, double p) {
	return	a * 100 / p;
}
