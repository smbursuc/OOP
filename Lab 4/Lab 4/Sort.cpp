#include "Sort.h"
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>
#include<stdarg.h>
using namespace std;



Sort::Sort(int number, int min, int max)
{
	this->number = number;
	for (int i = 0; i < number; i++)
	{
		int random = rand() % max + min;
		numbers[i] = random;
	}
}

Sort::Sort()
{
	
}

int Sort::GetElementsCount()
{
	return number;
}

Sort::Sort(int n_args, ...)
{
	va_list ap;
	va_start(ap, n_args);
	this->number = n_args;
	for (int i = 0; i < n_args; i++) {

		int a = va_arg(ap, int);
		numbers[i] = a;
	}
	va_end(ap);
}

void Sort::InsertSort() 
{
	int i, key, j;
	for (i = 1; i < number; i++)
	{
		key = numbers[i];
		j = i - 1;

		
		while (j >= 0 && numbers[j] > key)
		{
			numbers[j + 1] = numbers[j];
			j = j - 1;
		}
		numbers[j + 1] = key;
	}
}

int compare(const void* a, const void* b)
{
	const int* x = (int*)a;
	const int* y = (int*)b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}

void Sort::quickSort()
{
	qsort(numbers, number, sizeof(int), compare);
}

void Sort::BubbleSort()
{
	int i, j;
	for (i = 0; i < number - 1; i++)
		for (j = 0; j < number - i - 1; j++)
			if (numbers[j] > numbers[j + 1])
				swap(numbers[j], numbers[j + 1]);
}

Sort::Sort(string numere)
{
	string splitter = ",";
	int pos = 0;
	int i = 0;
	while ((pos = numere.find(splitter)) != string::npos) {
		string token = numere.substr(0, pos);
		stringstream streamer(token);
		int value = 0;
		streamer >> value;
		numbers[i++] = value;
		numere.erase(0, pos + splitter.length());
	}
	stringstream streamer(numere);
	int value = 0;
	streamer >> value;
	numbers[i++] = value;
	this->number = i;
}

int Sort::GetElementFromIndex(int index)
{
	return numbers[index];
}

Sort::Sort(int v[], int number)
{
	this->number = number;
	for (int i = 0; i < number; i++)
		numbers[i] = v[i];
}

void Sort::Print()
{
	for (int i = 0; i < number; i++)
		cout << numbers[i] << " ";
	cout << endl;
}
