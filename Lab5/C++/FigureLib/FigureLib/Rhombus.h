#pragma once
#include "Figures.h"

class Rhombus : public Figures {
private:
	int xA, xB, xC, xD;
	int yA, yB, yC, yD;

public:
	Rhombus(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

	float calcDiagDistanse(int X1, int Y1, int X2, int Y2);

	float CalcArea() override;

	float CalcPerimeter() override;
};
