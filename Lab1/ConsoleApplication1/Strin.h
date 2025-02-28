#pragma once
#include <iostream>
#include <cstring>
class Strin
{
private:
	char* arr;

public:
	Strin();
	~Strin();

	void fillStr(const char* fArr);
	char* getStr();
	int countStr();
	void pushStr();
	int length(const char* cArr);
};

