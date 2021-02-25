
#include <iostream>
#include "NumberList.h";

int main()
{
    NumberList nl;
    nl.Init();
    nl.Add(1);
    nl.Add(2);
    nl.Add(2);
    nl.Add(3);
    nl.Add(4);
    nl.Add(5);
    nl.Add(6);
    nl.Add(7);
    nl.Print();
    std::cout<<nl.Insert(2, 99)<<'\n';
    nl.Print();
    nl.removeNumber(2);
    nl.Print();
}

