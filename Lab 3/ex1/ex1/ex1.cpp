#include <iostream>
#include "Math.h"
#include "Math.cpp"
using namespace std;
int main()
{
    cout << Add(2,7) << endl;
    cout << Add(2,7,9) << endl;
    cout << Add(2.45343,5.23212) << endl;
    cout << Add(2.45343,5.23212,6.2342342) << endl;
    cout << Mul(2, 4) << endl;
    cout << Mul(2, 4, 5) << endl;
    cout << Mul(8.232, 5.23) << endl;
    cout << Mul(2.23132, 7.232, 9.021) << endl;
    cout << Add(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
    cout << Add("roma", "nia");


}

