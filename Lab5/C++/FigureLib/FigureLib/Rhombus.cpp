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

	sides[0] = calcDiagDistanse(this->xA, this->yA, this->xB, this->yB); // Сторона AB
	sides[1] = calcDiagDistanse(this->xB, this->yB, this->xC, this->yC); // Сторона BC
	sides[2] = calcDiagDistanse(this->xC, this->yC, this->xD, this->yD); // Сторона CD
	sides[3] = calcDiagDistanse(this->xD, this->yD, this->xA, this->yA); // Сторона DA


	float perimeter = sides[0] + sides[1] + sides[2] + sides[3];

	return perimeter;
}
