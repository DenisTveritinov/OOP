#pragma once
#include <cmath>
#include <stdexcept>
#include <iostream>

class Solve {
private:
	double a, b, c;

public:
	Solve(double a, double b, double c);

	double calculateLog(double value);

	double calculate();
};

