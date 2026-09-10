#include <iostream>
#include "kasatkin.h"
#include <cmath>
const double PI = 3.14159265358979;

// Объем конуса с радиусом a и высотой b
double coneVolume(double a, double b) {
	return PI * (a * a) * (b / 3 );
}
// Образующей конуса с радиусом a и высотой b
double coneSlant(double a, double b) {
	return sqrt(a * a + b * b);
}
// Площадь боковой поверхности с радиусом a образующей b
double coneLateral(double a, double b) {
	return PI * a * b;
}