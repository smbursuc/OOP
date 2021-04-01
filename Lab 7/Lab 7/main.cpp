#include "Vector.h"
#include <iostream>
#include <cstring>
using namespace std;


float operator"" _Kelvin(unsigned long long c) { return c + 273.15; }
float operator"" _Fahrenheit(unsigned long long c) { return (c * 1.8) + 32; }

template<typename T>
void printVector(Vector<T>& vector)
{
	for (int i = 0; i < vector.count(); i++)
		cout << vector.get(i) << " ";
	cout << endl;
}
int cmpSemn(int a, int b) { return a - b; }
int cmpEgal(int a, int b)
{
	if (a % 2 == b % 2)
		return 1;
	return 0;
}
template<typename T>
void vectorSwap(Vector<T>& v1, Vector<T>& v2)
{
	T* newVector1;
	newVector1 = new T[v2.count()];
	T* newVector2;
	newVector2 = new T[v1.count()];

	for (int i = 0; i < v2.count(); i++)
		newVector1[i] = v2.get(i);

	for (int i = 0; i < v1.count(); i++)
		newVector2[i] = v1.get(i);

	int olddimv1 = v1.count();
	int olddimv2 = v2.count();
	for (int i = 0; i <= olddimv2; i++)
	{
		if (i > v1.count())
			v1.push(newVector1[i-1]);
		else v1.set(newVector1[i], i);
	}
	v1.setCount(olddimv2);

	for (int i = 0; i <= olddimv1; i++)
	{
		if (i > v2.count())
			v2.push(newVector2[i-1]);
		else v2.set(newVector2[i], i);
	}
	v2.setCount(olddimv1);
}
int main()
{
	float a = 300_Kelvin;
	float b = 120_Fahrenheit;
	cout << a << " " << b<< endl;

	Vector<int> v;
	Vector<const char*> w;

	v.push(0);
	v.push(1);
	v.push(2);
	v.push(3);

	printVector<int>(v);

	cout << v.pop() << endl;
	cout << v.get(1) << endl;
	cout << v.count() << endl;
	v.insert(4, 1);
	printVector<int>(v);

	v.sort(NULL);
	printVector<int>(v);
	v.sort(cmpSemn);
	printVector<int>(v);

	cout << v.firstIndexOf(NULL, 2) << endl; //primul indice pt care vector[i]==3 (4 3 2 1 0, adica 2)
	cout << v.firstIndexOf(cmpEgal, 1) << endl; //primul indice pt care vector[i]%2==1%2 (4 3 2 1 0, adica 1)

	
	Vector<int> x,y;
	for (int i = 0; i < 10; i++)
	{
		x.push(i);
	}

	for (int i = 10; i < 30; i++)
	{
		y.push(i);
	}

	cout << "x = ";
	printVector<int>(x);
	cout << "y = ";
	printVector<int>(y);

	vectorSwap<int>(x, y);

	cout << "x = ";
	printVector<int>(x);
	cout << "y = ";
	printVector<int>(y);






}