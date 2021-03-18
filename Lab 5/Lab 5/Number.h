
#pragma once

using namespace std;

class Number
{
private: 
	char* value;
	int base;
public:
	int getInt();
	
	Number(const char* value, int base);
	//~Number();
	// add operators and copy/move constructor

	Number operator+(Number& number);
	Number operator-(Number& number);
	bool operator>=(Number& number);
	bool operator<=(Number& number);
	bool operator==(Number& number);
	void operator=(Number& number);


	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base
};

