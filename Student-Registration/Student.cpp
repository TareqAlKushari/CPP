#include <iostream>
#include <fstream>
#include<string>
#include "Student.h"

using namespace std;

/*
this function add student record to text file
Argument1: filename
Argument2: Pointer to studentCount
*/
void Student::addStudent(string filename, int *studentCount, int *inStateFees, int *outStateFees)
{
cout<<endl<<"Press any key to add Students details";
getchar();
ofstream file(filename.c_str(), ios::app);
char name[50];
cout<<endl<<"\n Enter Name of Student : ";
gets(name);

file<<endl<<name;

int state=-1;
cout<<endl<<"\n Press 1 for In-State or 2 for Out-Of-State : ";
cin>>state;

if(state==1)
file<<" | In-State";
else if(state==2)
file<<" | Out-Of-State";
else
file<<" | NA";

int tutionFees;
cout<<endl<<"Enter Tution Fees : ";
cin>>tutionFees;

char choice;
cout<<endl<<"Do you want to enroll for Health Plan ? y/n : ";
cin>>choice;

int healthPlan = 0;

if(choice=='Y' || choice=='y'){
char plan;
cout<<endl<<" # Select Optional Health Plan #";
cout<<endl<<"E -> $40";
cout<<endl<<"S -> $160";
cout<<endl<<"C -> $120";
cout<<endl<<"F -> $200";

cout<<endl<<"Select any alphabet ( E, S, C, F ) : ";
cin>>plan;

switch(plan){
case 'E':
case 'e': healthPlan = 40;   break;
case 'S':
case 's': healthPlan = 160; break;
case 'C':
case 'c': healthPlan =  120; break;
case 'F':
case 'f' : healthPlan =  200; break;
default: cout<<endl<<"Invalid Choice..";
}

if(healthPlan!=0)
file<<" | Health Plan : "<<plan;
else
file<<" | Health Plan : None"<<plan;

file<<" | "<<tutionFees;

if(state==1){
*inStateFees = *inStateFees + tutionFees + healthPlan;
}
else if(state==2){
*outStateFees = *outStateFees + tutionFees + healthPlan;
}

}
*studentCount = *studentCount + 1;
file.close();
}

/*
function generate the final report by adding total fees details
Argument1: filename
Argument2: Pointer to studnetCount
*/
void Student::generateReport(const string filename, const int *studentCount, const int *inStateFees, const int *outStateFees)
{
if(*studentCount==0){
cout<<endl<<"Error: There should be atleast one record to generate report.";
}
else{
ofstream file(filename.c_str(), ios::app);
file<<endl<<"Total Tuition Paid for all In-State Students : "<<*inStateFees;
file<<endl<<"Total Tuition Paid for all Out-of-State Students : "<<*outStateFees;
file.close();
cout<<endl<<"Success: "<<filename<<" generated ";
}

}
