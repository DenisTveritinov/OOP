#include "Rhombus.h"
#include <cmath>


Rhombus::Rhombus(int xA, int yA, int xB, int yB, int xC, int yC, int xD, int yD) : Figures() {
	this->xA = xA;
	this->xB = xB;
	this->xC = xC;
	this->xD = xD;
	this->yA = yA;
	this->yB = yB;
	this->yC = yC;
	this->yD = yD;
}

float Rhombus::calcDiagDistanse(int X1, int Y1, int X2, int Y2) {
	float d = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

	return d;
}

float Rhombus::CalcArea() {
	float diag1, diag2;
	float area;

	diag1 = calcDiagDistanse(xA, yA, xC, yC);
	diag2 = calcDiagDistanse(xB, yB, xD, yD);

	area = 0.5 * diag1 * diag2;

	return area;
}

float Rhombus::CalcPerimeter() {
	float sides[4];

	sides[0] = sqrt(pow(this->xB - this->xA, 2) + pow(this->yB - this->yA, 2)); // Сторона AB
	sides[1] = sqrt(pow(this->xC - this->xB, 2) + pow(this->yC - this->yB, 2)); // Сторона BC
	sides[2] = sqrt(pow(this->xD - this->xC, 2) + pow(this->yD - this->yC, 2)); // Сторона CD
	sides[3] = sqrt(pow(this->xA - this->xD, 2) + pow(this->yA - this->yD, 2)); // Сторона DA

	float perimeter = sides[0] + sides[1] + sides[2] + sides[3];

	return perimeter;
}
