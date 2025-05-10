#pragma once
#include <string>

class BaseString {
protected:
    std::string text;

public:
    BaseString();                          // Без параметра
    BaseString(const std::string& str);    // З параметром

    int getLength();
    std::string getText();
};
