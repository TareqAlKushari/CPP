//header files
#include <iostream>
#include <fstream>
#include<string>
#include "Student.h"

using namespace std;



//program runs from this function
int main(int argc, char** argv)
{

Student Std;
int choice = 0;
string fileName = "tuition_report.txt";
int studentCount =0;
int inStateFees = 0;
int outStateFees =0;

//empty file if it already exist
ofstream file(fileName.c_str(), ios::out);
file.close();

while(choice!=-1){
cout<<endl<<"## (College Student Tuition) ##"<<endl;
cout<<endl<<"1 Add Student Details";
cout<<endl<<"2 Generate Report";
cout<<endl<<"-1 Exit";
cout<<"\n\n Enter your choice : ";
cin>>choice;

switch(choice)
{
case 1:
    Std.addStudent(fileName, &studentCount, &inStateFees, &outStateFees);
	break;
case 2:
    Std.generateReport(fileName, &studentCount, &inStateFees, &outStateFees);
	break;
case -1:
    cout<<endl<<"thank you for useing softwer!!";
	break;
default:
    cout<<endl<<"Invalid Choice.."; getchar();

}

}

return 0;
}
