#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

Number::Number(const char* value, int base) // where base is between 2 and 16
{
	this->base = base;
	this->value = new char[strlen(value) + 1];
	strcpy(this->value, value);

}

Number Number::operator+(Number& number)
{
	Number num("0", 10);


	/*int newBase;
	if (this->base > number.base)
		newBase = this->base;
	else newBase = number.base;

	if (this->base != 10)
		SwitchBase(10);

	if (number.base != 10)
		SwitchBase(10);*/
	int value1 = getInt();
	int value2 = number.getInt();
	int sum = value1 + value2;
	string s = to_string(sum);
	strcpy(num.value, s.c_str());
	//num.SwitchBase(newBase);
	return num;
}

Number Number::operator-(Number& number)
{
	Number num("0", 10);

	int value1 = getInt();
	int value2 = number.getInt();
	int diff = value1 - value2;
	string s = to_string(diff);

	strcpy(num.value, s.c_str());
	num.base = 10;
	return num;
}

bool Number::operator>=(Number& number)
{
	if (getInt() >= number.getInt())
		return true;
	return false;
}

bool Number::operator<=(Number& number)
{
	if (getInt() <= number.getInt())
		return true;
	return false;
}

bool Number::operator==(Number& number)
{
	if (getInt() == number.getInt())
		return true;
	return false;
}

void Number::operator=(Number& number)
{
	int size = max(strlen(value), strlen(number.value));
	delete[] value;
	this->value = new char[size + 1];
	strcpy(value, number.value);
	this->base = number.base;
}



int Number::getInt()
{
	stringstream strValue(value);
	int intValue;
	strValue >> intValue;
	return intValue;
}


void Number::Print()
{
	cout << this->value <<endl;
}

char reVal(int num)
{
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + 'A');
}

void strev(char* str)
{
	int len = strlen(str);
	int i;
	for (i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

int val(char c)
{
	if (c >= '0' && c <= '9')
		return (int)c - '0';
	else
		return (int)c - 'A' + 10;
}

void Number::SwitchBase(int newBase)
{
	if (this->base == 10)
	{
		int inputNum = getInt();
		int index = 0;
		char res[100];
		while (inputNum > 0)
		{
			res[index++] = reVal(inputNum % newBase);
			inputNum /= newBase;
		}
		res[index] = '\0';

		// Reverse the result 
		strev(res);
		int size = max(strlen(value), strlen(res));
		delete[] value;
		this->value = new char[size + 1];
		strcpy(value, res);
		base = newBase;
	}
	else
	{
		int len = strlen(value);
		int power = 1;  
		int num = 0; 
		int i;
		for (i = len - 1; i >= 0; i--)
		{ 
			if (val(value[i]) >= base)
			{
				cout << "invalid number";
				return;
			}

			num += val(value[i]) * power;
			power = power * base;
		}

		this->base = 10;
		stringstream streamer;
		streamer << num;
		string s = streamer.str();
		strcpy(this->value,s.c_str());
	}
}

