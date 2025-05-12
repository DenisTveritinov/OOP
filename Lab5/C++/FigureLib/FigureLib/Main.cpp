#include "Rhombus.h" 
#include "Circle.h"
#include <iostream>

int main() {
	Rhombus romb(5, 2, 124, 2, 12, 2, 0, 2);

	std::cout << "Romb area - " << romb.CalcArea() << std::endl;
	std::cout << "Romb perimeter - " << romb.CalcPerimeter() << std::endl;

	Circle circle(15);

	std::cout << "Circle area - " << circle.CalcArea() << std::endl;
	std::cout << "Circle perimeter - " << circle.CalcPerimeter() << std::endl;

	int a;
	std::cin >> a;
}