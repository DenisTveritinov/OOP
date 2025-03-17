#include <D:/OOP/Lab2/C++/StaticLib1/StaticLib1/Str.h>
#include <iostream>

int main() {
	Strin str1;

	str1.fillStr("Hello");
	std::cout << "String 1: " << str1.getStr() << std::endl;

	Strin str2 = str1;
	std::cout << "String 2: " << str2.getStr() << std::endl;

	Strin str3 = std::move(str1);
	std::cout << "String 3: " << str3.getStr() << std::endl;
	
	if (str1.getStr() == NULL)
		std::cout << "String 1 is null" << std::endl;
	else
		std::cout << "Func isn`t working(" << std::endl;


	
}