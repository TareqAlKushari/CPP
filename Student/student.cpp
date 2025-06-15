#include <iostream>
#include <fstream>
#include "student.h"

using namespace std;

void student::getData()
{
    cout <<"\n Enter Roll No. ::";
    cin >> roll;
    cin.ignore();
    cout <<"\n Enter Name ::";
    cin.getline(name, 30);
    cout <<"present(y/n) :";
    cin.getline(att, 2);

}

void student :: displayData()
{
    cout<<"\n Roll No. :: " << roll << endl;
    cout<<"\n Name :: " << name << endl;
    cout<<"present  ." <<att<< endl;
}
