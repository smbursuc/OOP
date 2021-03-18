#include <iostream>
#include "Number.h"


using namespace std;

int main()
{
	Number a("44", 10);
	Number b("62", 10);
	Number c("66", 10);
	(a + b).Print();
	(a - b).Print();
	b = c;
	b.Print();
	if (a <= b)
		cout << "yes" <<endl;
	Number d("282", 10);
	d.SwitchBase(16);
	d.Print();
	d.SwitchBase(10);
	d.Print();


}