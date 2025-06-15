#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <fstream>
#include<string>

using namespace std;


class Student
{
public:
    void addStudent(string filename, int *studentCount, int *inStateFees, int *outStateFees);
    void generateReport(const string filename, const int *studentCount, const int *inStateFees, const int *outStateFees);

};

#endif // STUDENT_H_INCLUDED
