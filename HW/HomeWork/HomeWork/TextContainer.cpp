#pragma once
#include <vector>
#include <string>
#include "TextContainer.h"

	TextContainer::TextContainer(const std::vector<std::string>& inputLines) {
		lines = inputLines;
	}

	int TextContainer::operator[](int index) {
		if (index >= 0 && index < lines.size()) {
			return lines[index].size();
		}
		else {
			return -1;
		}
	}

	int TextContainer::getNumber() {
		int count = 0;
		char vowels[5] = { 'a', 'i', 'o', 'e', 'u' };

		for (std::string& line : lines) {
			for (char ch : line) {
				for (int i = 0;i < 5;i++) {
					if (ch == vowels[i]) {
						count++;
					}
				}
			}
		}

		return count;
	}
