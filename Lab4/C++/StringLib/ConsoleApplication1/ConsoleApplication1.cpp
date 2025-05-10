#include <iostream>
#include "MyString.h"

int main() {
    std::string input;

    std::cout << "������ �����: ";
    std::getline(std::cin, input);

    MyString s(input);

    std::cout << "�����: " << s.getText() << std::endl;
    std::cout << "�������: " << s.getLength() << std::endl;
    std::cout << "���������� �� ���������: " << s.sortDescending() << std::endl;

    return 0;
}
