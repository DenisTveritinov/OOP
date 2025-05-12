#pragma once
#include "Figures.h"

class Circle : public Figures {
private:
	float radius;

public:
	Circle(int radius);

	float CalcArea() override;

	float CalcPerimeter() override;

};