#pragma once
#include <cmath>
#include <stdexcept>
#include <iostream>
#include "Solve.h"


	Solve::Solve(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}

	double Solve::calculateLog(double value) {
		if (value <= 0) {
			throw std::invalid_argument("Invalid argument");
		}

		return log(value);
	}

	double Solve::calculate() {
		if (c == 0)
			throw std::runtime_error("C cannot be 0");

		double denominator = 41 - (b / c) + 1;

		if (denominator == 0)
			throw std::runtime_error("Denominator cannot be 0");



		double numerator = calculateLog(a * b + 2) * c;
		double result = numerator / denominator;

		return result;
	}

