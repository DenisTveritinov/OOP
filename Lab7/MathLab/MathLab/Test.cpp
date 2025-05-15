#include "Solve.h"
#include <iostream>

int main() {
	Solve solve(2, 84, 5);

	std::cout << solve.calculate() << std::endl;
}