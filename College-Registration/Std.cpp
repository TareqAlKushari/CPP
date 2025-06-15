#include <iostream>
#include <fstream>
#include <cstring>
#include<stdio.h>
#include<stdlib.h>
#include "Std.h"

using namespace std;

char stdsRec[] = "stdtRecord.txt";
char modulesRecord[] = "modRecord.txt";
char tempFile[] = "tempFile.txt";



int Std::addStdRecord(char *stdsRec){
int StdNo;
char name[50];

ofstream out(stdsRec, ios_base::app);

cout<<"\nEnter Std No : ";
cin>>StdNo;
out<<endl<<StdNo<<" | ";

cout<<"\nEnter Name (50 char):";
cin>>name;
out<<name<<" | ";

int flag=-1;
cout<<"\n0 - Under Grad.,1 - PostGrad";
cout<<"\nEnter :";
cin>>flag;

int moduleCount =-1;

if(flag==0)
moduleCount = 6;
else if(flag ==1)
moduleCount = 4;
else{
cout<<"\nErr: Pl. enter either 0or1 ";
return -1;
}

for(int i=0; i<moduleCount; i++){
int module;
cout<<"\nEnter Module  No"<<i<<" : ";
cin>>module;
out<<module<<" | ";
}

char choice;
cout<<"\nadd Marks against each module? y/n :";
cin>>choice;

//separator to find start of marks
out<<" = ";

if(choice=='y')
{
for(int i=0; i<moduleCount; i++){
double marks;
cout<<"\nEnter Marks of Module  No"<<i<<" : ";
cin>>marks;
out<<marks<<" | ";
}

}

out.close();
}

//update any std's recrod to DB
int Std::updateStdRecord(){
int StdNo;
cout<<"\nEnter Std Number :";
cin>>StdNo;
//modify if it exist e
}

//display record of any Std by his Stdno
int Std::displayStdRecord(){
int StdNo;

//display if Std record exist
cout<<"\n# Find Any Module Details #\n";

cout<<"\nEnter Std No to be searched: ";
cin>>StdNo;

int flag = -1;
ifstream file(stdsRec);
string str;


while (getline(file, str))
{
if(str.length()>0){

char temp[1000];
memset(temp,1000,sizeof(temp));
strcpy(temp, str.c_str());

char * ptr;
ptr = strtok(temp ,"|");

int tempno = atoi(ptr);

if(StdNo == tempno )
{
cout<<"\n"<<str;
flag = 1;
break;
}

}

}

if(flag==-1)
cout<<"\nNo Std found with No :"<<StdNo;

file.close();
getchar();getchar();
}

//display record of all Stds
int Std::displayAllStdRecord(){
ifstream file(stdsRec);
string str;

cout<<"\n# List of All Std #";

if(!file)	{
cout<<"\nNo Record found !!";
return -1;
}


while (getline(file, str))
{
if(str.length()>0)
cout<<"\n\t"<<str;
}
file.close();
getchar();getchar();
}

int Std::findStdMarks(){
cout<<"\n# Find Marks of any Std #\n";
int StdNo;

cout<<"\nEnter Std No : ";
cin>>StdNo;

int flag = -1;
ifstream file(stdsRec);
string str;


while (getline(file, str))
{
if(str.length()>0){

char temp[1000];
memset(temp,1000, sizeof(temp));
strcpy(temp, str.c_str());

char * ptr;
ptr = strtok(temp ,"|");

int tempno = atoi(ptr);

if(StdNo == tempno )
{
memset(temp,1000,sizeof(temp));
strcpy(temp, str.c_str());
char *ptr1 = strtok(temp, "=");
ptr1 = strtok(NULL,"=");
//cout<<"\n====> "<<ptr1;
ptr1 = strtok(ptr1, "|");
double sum  = atof(ptr1);
double minNo = sum;
//cout<<"\nMin no is : "<< minNo;
int countSub = 0;
while(ptr1 = strtok(NULL,"|")){
//cout<<"-> "<<ptr1;
if(atof(ptr1)<minNo)
	minNo = atof(ptr1);

sum += atof(ptr1);
countSub++;
}

//cout<<"\nsum is : "<<sum;
//cout<<"\ncount sub : "<<countSub;
//cout<<"\nMIn no is : "<<minNo;

if(countSub == 6){
sum -= minNo;
cout<<"\nsum is : "<<sum;
sum = sum / 5;
cout<<"\nAvg Sum is top 5 sub: "<<sum;

if(sum>70) cout<<"\nGrade : A";
else if(sum>=60 && sum<=69)
cout<<"\nGrade is : B+";
else if(sum >=50 && sum<=59)
cout<<"\nGrade is : B";
else if(sum>=41 && sum<=49)
cout<<"\nGrade is : C";
else if(sum>=40)
cout<<"\nGrade is : D";
else if(sum<40)
cout<<"\nGrade is: F";

}
else{
sum = sum / 4;
cout<<"\nAvg Sum of 4 sub : "<< sum;

if(sum>= 76) cout<<"\nDistinction";
else if(sum>=61 && sum<=75 )
cout<<"\nMerit";
else if(sum>=50 && sum<=60)
cout<<"\nPass";
else if(sum<50) cout<<"\nFail ";
}

flag = 1;
break;
}

}

}

if(flag==-1)
cout<<"\nNo Std found with No : "<<StdNo;

file.close();
getchar();getchar();
}

int Std::updateStd(){

cout<<"\n# Update Std Record #\n";
int StdNo;

cout<<"\nEnter Std No : ";
cin>>StdNo;

int flag = -1;
ifstream file(stdsRec);
string str;


int StdFound = 0;
while (getline(file, str))
{
if(str.length()>0){

char temp[1000];
memset(temp,1000,sizeof(temp));
strcpy(temp, str.c_str());

char * ptr;
ptr = strtok(temp ,"|");

int tempno = atoi(ptr);

if(StdNo == tempno )
{
addStdRecord(tempFile);
StdFound = 1;
}
else{
ofstream file(tempFile, ios_base::app);
file<<endl<<str;
file.close();

}
}
}

file.close();

if(StdFound){
remove(stdsRec);
rename(tempFile, stdsRec);
}

}



int Std::displayAnyModuleInfo(){
int moduleNo;
cout<<"\n# Find Module Details #\n";

cout<<"\nEnter Module No :";
cin>>moduleNo;
int flag = -1;
ifstream file(modulesRecord);
string str;


while (getline(file, str))
{
if(str.length()>0){
char temp[1000];
memset(temp,1000,sizeof(temp));
strcpy(temp, str.c_str());

char * ptr;
ptr = strtok(temp ,"|");

int tempno = atoi(ptr);
cout<<"\nModule no is : "<<temp;

if(moduleNo == tempno )
{
cout<<"\n"<<str;
flag = 1;
break;
}

}

}

if(!flag)
cout<<"\nNo Module found : "<<moduleNo;

file.close();
getchar();getchar();


}

int Std::displayAllModulesInfo(){
cout<<"\n# List of All Modules #\n";

//read all modules from record

ifstream file(modulesRecord);
string str;
cout<<"\nModule No | Title | Level";
while (getline(file, str))
{
if(str.length()>0)
cout<<"\n"<<str;
}
file.close();
getchar();getchar();
}

int Std::updateModulesInfo(){
cout<<"\n# Update Module Info #";
int moduleNo;
cout<<"\nEnter Module No to be modified:";
cin>>moduleNo;

}

//add new module to DB
int Std::addModule(char *modulerecord){
int moduleNo;
char title[50];
char level[50];

ofstream out(modulerecord, ios_base::app);

cout<<"\n# Add New Module #";

cout<<"\nEnter Module No : ";
cin>>moduleNo;
out<<endl<<moduleNo<<" | ";

cout<<"\nEnter Title of Module (50 char) :";
cin>>title;
out<<title<<" | ";

cout<<"\nEnter Level UnderGrad/Grad.:";
cin>>level;
out<<level<<" | ";

cout<<"\nModule Added !!";
getchar();

out.close();
}

int Std::updateModule(){

cout<<"\n# Update Module Record #\n";
int moduleNo;

cout<<"\nEnter Module No : ";
cin>>moduleNo;

int flag = -1;
ifstream file(modulesRecord);
string str;


int moduleFound = 0;
while (getline(file, str))
{
if(str.length()>0){

char temp[1000];
memset(temp,1000,sizeof(temp));
strcpy(temp, str.c_str());

char * ptr;
ptr = strtok(temp ,"|");

int tempno = atoi(ptr);

if(moduleNo == tempno )
{
addModule(tempFile);
moduleFound = 1;
}
else{
ofstream file(tempFile, ios_base::app);
file<<endl<<str;
file.close();
}
}
}

file.close();

if(moduleFound){
remove(modulesRecord);
rename(tempFile, modulesRecord);
}

}
