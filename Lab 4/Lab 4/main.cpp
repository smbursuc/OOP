#include <iostream>
#include "Sort.h";
using namespace std;

int main()
{
	Sort test1 = Sort(5,1,99);
	test1.InsertSort();
	test1.Print();

	int v1[] = { 2,7,4 };
	Sort test2 = Sort(v1, 3);
	test2.quickSort();
	test2.Print();

	Sort test3 = Sort("5,4,2,3,5,8,76");
	test3.BubbleSort();
	test3.Print();

	Sort test4 = Sort(10, 2, 3, 4, 2, 3, 6, 9, 1, 3, 4);
	cout<<test4.GetElementsCount()<<endl;
	cout<<test4.GetElementFromIndex(5)<<endl;
	test4.Print();

	Sort test5 = Sort(4, 4, 3, 2, 1);
	test5.quickSort();
	Sort test6 = Sort(6, 3, 566, 0, 3, 2, 18);
	test6.quickSort();
	test5.Print();
	test6.Print();

	test5.Merge(test6);
	test5.Print();
	

	//Sort test5(90);
	//test5.GetElementsCount();




}