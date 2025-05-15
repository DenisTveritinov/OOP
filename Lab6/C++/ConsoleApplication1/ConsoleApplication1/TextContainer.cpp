#include <vector>
#include "TextContainer.h"
#include "MyString.h"

void TextContainer::addLine(MyString& line) {
	data.push_back(line);
}

void TextContainer::deleteLine(size_t index) {
	data.erase(data.begin() + index);
}

void TextContainer::clearText() {
	data.clear();
}

size_t TextContainer::totalChars() {
	size_t total = 0;

	for (auto& line : data) {
		total += line.length();
	}

	return total;
}

int TextContainer::findLine(std::string lineToFind) {
	int index = 0;

	for (auto& line : data) {
		if (line.get() == lineToFind) {
			break;
		}
		index++;
	}

	return index;
}

void TextContainer::replaceCharacter(char newCh, char oldCh) {
	for (auto& line : data) {
		line.replaceChar(newCh, oldCh);
	}
}