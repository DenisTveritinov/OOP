#include "pch.h"
#include "Str.h"
#include <iostream>
#include <cstring>

Strin::Strin() {
	arr = new char[1];
	arr[0] = 0;
}

Strin::Strin(const Strin& other) {
	size_t len = strlen(other.arr) + 1;
	arr = new char[len];
	strcpy_s(arr, len, other.arr);
}

Strin::Strin(Strin&& other) : arr(other.arr) {
	other.arr = nullptr;
}


Strin::~Strin() {
	delete[] arr;
}

int Strin::length(const char* cArr) {
	int i = 0;
	char temp = '0';
	while (temp != '\0') {
		temp = cArr[i];
		i++;
	}
	return i - 1;
}

void Strin::fillStr(const char* fArr) {
	delete[] arr;
	size_t len = length(fArr);
	arr = new char[len + 1];
	strcpy_s(arr, len + 1, fArr);
}


char* Strin::getStr() {
	return arr;
}

int Strin::countStr() {
	int i = length(arr);
	return i;
}

void Strin::pushStr() {
	int len = length(arr);
	char lastCh = arr[len - 1];

	for (int i = len - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = lastCh;
}
