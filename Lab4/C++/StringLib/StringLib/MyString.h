#pragma once
#include "BaseString.h"
#include <string>

class MyString : public BaseString {
public:
    MyString();
    MyString(const std::string& str);

    std::string sortDescending();
};
