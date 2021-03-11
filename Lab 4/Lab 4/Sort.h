#pragma once
#include <string>
using namespace std;
class Sort
{
private:
    int number=0;
    int numbers[100];
public:
    Sort();
    //Sort(int v[]);
    Sort(int number, int min, int max);
    Sort(int v[], int number);
    Sort(int number, ...);
    Sort(string numbere);
    void InsertSort();
    void quickSort();
    void BubbleSort();
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
    void Merge(Sort s);
    int* getVector();
};

