#include <iostream>
#include "MyString.h"

int main() {
    std::string input;

    std::cout << "Введіть рядок: ";
    std::getline(std::cin, input);

    MyString s(input);

    std::cout << "Рядок: " << s.getText() << std::endl;
    std::cout << "Довжина: " << s.getLength() << std::endl;
    std::cout << "Сортований за спаданням: " << s.sortDescending() << std::endl;

    return 0;
}
