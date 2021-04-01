#pragma once
#include <algorithm>
template<typename T>
class Vector {
private:
	T* vector;
	int nr;
	int limit;
public:
	Vector();
	void push(const T& val);
	T get(int poz);
	T pop();
	void insert(const T& val,int index);
	int count();
	void sort(int (*compara) (T e1, T e2));
	int firstIndexOf(int (*egal) (T e1, T e2), const T& val);
	void setCount(int count);
	void set(int val, int i);
};

template<typename T>
Vector<T>::Vector()
{
	nr = 0;
	limit = 1;
	vector = new T[limit];
}

template<typename T>
void Vector<T>::push(const T& val)
{
	if (nr >= limit)
	{
		T* newVector;
		newVector = new T[limit * 2];
		for (int i = 0; i < nr; i++)
			newVector[i] = vector[i];
		delete[] vector;
		vector = newVector;
		limit = 2 * limit;
	}
	vector[nr] = val;
	nr++;
}

template<typename T>
T Vector<T>::pop()
{
	return vector[nr-1];
}

template<typename T>
void Vector<T>::set(int val, int i)
{
	vector[i]=val;
}


template<typename T>
T Vector<T>::get(int poz)
{
	return vector[poz];
}

template<typename T>
int Vector<T>::count()
{
	return nr;
}

template<typename T>
void Vector<T>::insert(const T& val,int index)
{
	for (int i = nr - 1; i >= index ; i--)
		vector[i + 1] = vector[i];
	vector[index] = val;
	nr++;
}

template<typename T>
void Vector<T>::sort(int (*compara) (T e1, T e2))
{
	for (int i = 0; i < nr - 1; i++)
		for (int j = i + 1; j < nr; j++)
			if (compara == nullptr)
			{
				if (vector[i] > vector[j])
					std::swap(vector[i], vector[j]);
			}
			else if (compara != nullptr && compara(vector[i], vector[j]))
			{
				std::swap(vector[i], vector[j]);
			}
	
}

template<typename T>
int Vector<T>::firstIndexOf(int (*egal) (T e1, T e2),const T& val)
{
	for(int i=0;i<nr;i++)
	{
		if (egal == nullptr)
		{
			if (vector[i] == val)
				return i;
		}
		else if (egal != nullptr && egal(vector[i], val))
			return i;
	}
}

template<typename T>
void Vector<T>::setCount(int count)
{
	nr = count;
}

