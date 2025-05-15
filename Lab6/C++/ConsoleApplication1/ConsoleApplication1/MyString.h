#pragma once
#include "lReplaceable.h"
#include <string>

class MyString : public lReplaceable{
protected:
	std::string text;
public:
	MyString(std::string& text);

	void replaceChar(char oldChar, char newChar) override;
	std::string get();
	size_t length();
};