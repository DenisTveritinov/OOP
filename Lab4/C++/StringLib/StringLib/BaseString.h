#pragma once
#include <string>

class BaseString {
protected:
    std::string text;

public:
    BaseString();                          // ��� ���������
    BaseString(const std::string& str);    // � ����������

    int getLength();
    std::string getText();
};
