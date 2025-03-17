#pragma once

class Strin
{
private:
	char* arr;

public:
	Strin();
	Strin(const Strin& other);
	Strin(Strin&& other);
	~Strin();

	void fillStr(const char* fArr);
	char* getStr();
	int countStr();
	void pushStr();
	int length(const char* cArr);
};