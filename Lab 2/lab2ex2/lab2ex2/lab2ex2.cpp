#include <iostream>
#include "Student.h"
#include "Comparators.h"
using namespace std;
int first, second;
int main()
{
    Student Mihai, Ion;
    Mihai.setStudentName("Kebab Mihai-Constantin");
    Mihai.setGradeEnglish(8);
    Mihai.setGradeHistory(10);
    Mihai.setGradeMathematics(3);
    Ion.setStudentName("Margerita Ion-Marcelo");
    Ion.setGradeEnglish(6);
    Ion.setGradeHistory(8);
    Ion.setGradeMathematics(9);
    cout << "Showdown de note! Mihai vs Ion, start!"<<endl;
    cout << endl;
    cout << "Limba engleza: ";
    if (compareGradeEnglish(Mihai, Ion) == -1)
    {
        cout << Ion.getStudentName();
        first++;
    }
    else if (compareGradeEnglish(Mihai, Ion) == 1)
    {
        cout << Mihai.getStudentName();
        second++;
    }
    else cout << "Egalitate :O"<<endl;
    cout << endl;
    cout << "Istorie: ";
    if (compareGradeHistory(Mihai, Ion) == -1)
    {
        cout << Ion.getStudentName();
        first++;
    }
    else if (compareGradeHistory(Mihai, Ion) == 1)
    {
        cout << Mihai.getStudentName();
        second++;
    }
    else cout << "Egalitate :O";
    cout << endl;
    cout << "Matematica: ";
    if (compareGradeMathematics(Mihai, Ion) == -1)
    {
        cout << Ion.getStudentName();
        first++;
    }
    else if (compareGradeMathematics(Mihai, Ion) == 1)
    {
        cout << Mihai.getStudentName();
        second++;
    }
    else cout << "Egalitate :O";
    cout << endl;
    cout << "Nume: ";
    if (compareStudentName(Mihai, Ion) == -1)
    {
        cout << Ion.getStudentName();
        first++;
    }
    else if (compareStudentName(Mihai, Ion) == 1)
    {
        cout << Mihai.getStudentName();
        second++;
    }
    else cout << "Egalitate :O";
    cout << endl;
    cout << "Media notelor: ";
    if (compareGradeAverage(Mihai, Ion) == -1)
    {
        cout << Ion.getStudentName();
        first++;
    }
    else if (compareGradeAverage(Mihai, Ion) == 1)
    {
        cout << Mihai.getStudentName();
        second++;
    }
    else cout << "Egalitate :O";
    cout << endl;
    cout << endl;

    if (first > second)
        cout << "Felicitari Ion!";
    else if (first < second) cout << "Bravo Mihai!";
    else cout << "Wow, egal, incredibil";



}


