#include "Student.h"
using namespace std;

void Student::setStudentName(string name)
{
	this->name = name;
}
void Student::setGradeMathematics(int x)
{
	gradeMathematics = x;
}

void Student::setGradeHistory(int x)
{
	gradeHistory = x;
}

void Student::setGradeEnglish(int x)
{
	gradeEnglish = x;
}

int Student::getGradeEnglish()
{
	return gradeEnglish;
}

int Student::getGradeMathematics()
{
	return gradeMathematics;
}

int Student::getGradeHistory()
{
	return gradeHistory;
}

string Student::getStudentName()
{
	return name;
}

float Student::gradeAverage()
{
	return (gradeMathematics + gradeHistory + gradeEnglish) / 3.0;
}



