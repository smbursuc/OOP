#include "NumberList.h"
#include <iostream>
void NumberList::Init()
{
	count = 0;
	for (int i = 0; i < 10; i++)
		numbers[i] = 0;
}

bool NumberList::Add(int x)
{
	if (count >= 10)
		return false;
	numbers[count] = x;
	count++;
	return true;
}
void NumberList::Sort()
{
	for (int i = 0; i < count - 1; i++)
		for (int j = i; j < count; j++)
			if (numbers[i] > numbers[j])
			{
				int aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}

void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		std::cout << numbers[i] <<" ";
	std::cout << '\n';
}

bool NumberList::Insert(int pozitie, int x)
{
	pozitie--;
	if (count + 1 > 10)
		return false;
	for (int i = count-1; i >= pozitie; i--)
		numbers[i+1] = numbers[i];
	numbers[pozitie] = x;
	count++;
	return true;
}

void NumberList::removeNumber(int x)
{
	int deleted = 0,times=0;
	for (int i = 0; i < count; i++)
		if (numbers[i] == x)
			times++;
	for (int l = 0; l < times; l++)
	{
		for (int i = 0; i < count; i++)
			if (numbers[i] == x)
			{
				for (int j = i; j < count - 1; j++)
				{
					numbers[j] = numbers[j + 1];
				}
			}
		count--;
	}
}