#include "student.h"

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getStudentNumer() const
{
    return studentNumer;
}

void Student::setStudentNumer(int newStudentNumer)
{
    studentNumer = newStudentNumer;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

Student::Student() {}
