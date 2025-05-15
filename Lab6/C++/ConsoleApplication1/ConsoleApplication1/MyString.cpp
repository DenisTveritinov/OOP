#include <string>
#include "MyString.h"

MyString::MyString(std::string& text) {
	this->text = text;
}

void MyString::replaceChar(char oldChar, char newChar) {
	for (char& ch : text) {

		if (ch == oldChar) {

			ch = newChar;
		}
	}
}

std::string MyString::get() {
	return text;
}

size_t MyString::length() {
	return text.length();
}