#include "MyString.h"
#include <algorithm>

MyString::MyString() : BaseString() {}

MyString::MyString(const std::string& str) : BaseString(str) {}

std::string MyString::sortDescending() {
    std::string sorted = text;
    std::sort(sorted.begin(), sorted.end(), std::greater<char>());
    return sorted;
}
