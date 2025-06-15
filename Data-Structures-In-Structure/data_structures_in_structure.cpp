#include <iostream>
#include <string.h>

using namespace std;

struct student 
{
    int id;
    fullName name;
};

struct fullName
{
    string fName;
    string lName;
};

int main()
{
    student a;
    a.name.fName = "Tareq";
    a.name.lName = "Al-Kushari";

    cout << a->name << endl;
}