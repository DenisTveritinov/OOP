#pragma once
#include <vector>
#include <iostream>
#include "MyString.h"
class TextContainer {
private:
	std::vector<MyString> data;

public:
	void addLine(MyString& line);

	void deleteLine(size_t index);

	void clearText();

	size_t totalChars();

	int findLine(std::string lineToFind);

	void replaceCharacter(char newCh, char oldCh);
};