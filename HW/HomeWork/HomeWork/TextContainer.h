#pragma once
#include <vector>
#include <string>
class TextContainer {
private:
	std::vector<std::string> lines;

public:
	TextContainer(const std::vector<std::string>& inputLines);

	int operator[](int index);

	int getNumber();
};