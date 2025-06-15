#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <fstream>

using namespace std;

//define a class to student data
class student
{
    int roll;
    char name[30],att[2];

public:
    student(){}
    void getData();//get student data from user
    void displayData();//display data

};

#endif // STUDENT_H_INCLUDED
