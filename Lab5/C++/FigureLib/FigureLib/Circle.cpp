#define _USE_MATH_DEFINES
#include "Circle.h"
#include <cmath>

Circle::Circle(int radius) {
	this->radius = radius;
}

float Circle::CalcArea() {
	float area = M_PI * pow(radius, 2);
	return area;
}

float Circle::CalcPerimeter() {
	float perimeter = 2 * M_PI * radius;
	return perimeter;
}