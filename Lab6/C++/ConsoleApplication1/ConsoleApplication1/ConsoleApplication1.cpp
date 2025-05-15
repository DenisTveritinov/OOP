#include <iostream>
#include "TextContainer.h"
#include "MyString.h"
#include <string>

int main() {
	TextContainer cont;
	std::string str = "lox0";
	MyString strr(str);
	cont.addLine(strr);
	std::cout << cont.totalChars() << std::endl;
}