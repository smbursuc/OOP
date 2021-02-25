#pragma once
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int gradeMathematics;
    int gradeEnglish;
    int gradeHistory;
public:
    void setStudentName(string name);
    void setGradeMathematics(int x);          
    void setGradeEnglish(int x);      
    void setGradeHistory(int x);
    string getStudentName();
    int getGradeMathematics();
    int getGradeEnglish();
    int getGradeHistory();
    float gradeAverage();       
};