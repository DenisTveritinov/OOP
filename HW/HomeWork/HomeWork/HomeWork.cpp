#include <iostream>
#include "TextContainer.h"
#include <string>

int main() {
	std::vector<std::string> str;
	str.push_back("hello world");
	str.push_back("hi guys");
	str.push_back("bibobu");

	TextContainer cont(str);

	std::cout << cont[0] << std::endl;
}