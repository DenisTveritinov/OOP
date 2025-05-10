#include "BaseString.h"

BaseString::BaseString() {
    text = "";
}

BaseString::BaseString(const std::string& str) {
    text = str;
}

int BaseString::getLength() {
    return text.length();
}

std::string BaseString::getText() {
    return text;
}
