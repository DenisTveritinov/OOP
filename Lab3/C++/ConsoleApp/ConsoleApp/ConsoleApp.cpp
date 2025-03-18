#include <iostream>
#include "D:/OOP/Lab3/C++/StaticLib/StaticLib/Vec.h"

int main() {
	Vec Z1;
	std::cout << "Z1: r - " << Z1.getR() << " | angle - " << Z1.getAngle() << std::endl;

	Vec Z2(20, 40);
	std::cout << "Z2: r - " << Z2.getR() << " | angle - " << Z2.getAngle() << std::endl;

	Vec Z3(30, 300);
	std::cout << "Z3: r - " << Z3.getR() << " | angle - " << Z3.getAngle() << std::endl;

	std::cout << "===================================" << std::endl;

	Z3 = Z3 * 2;
	Z3.rotateAngle(90);
	std::cout << "Z3: r - " << Z3.getR() << "| angle - " << Z3.getAngle() << std::endl;

	
	Z1 = Z2 + Z3;
	std::cout << "Z1: r - " << Z1.getR() << " | angle - " << Z1.getAngle() << std::endl;


}