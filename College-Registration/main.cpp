#include <iostream>
#include <fstream>
#include <cstring>
#include<stdio.h>
#include<stdlib.h>
#include "Std.h"

using namespace std;

char StdsRec[] = "stdtRecord.txt";
char ModulesRecord[] = "modRecord.txt";
char TempFile[] = "tempFile.txt";

int main(int argc, char** argv)
{
Std stdObj;

int choice = -1;

while(choice !=0){
system("cls");

cout<<"\n# College Registration System #";
cout<<"\n 1> Add Record";
cout<<"\n2> Update Record";
cout<<"\n3> Get any record";
cout<<"\n4> Get all record";
cout<<"\n5> Add Module";
cout<<"\n6> Get Any Module details";
cout<<"\n7> Get All Modules details";
cout<<"\n8> Update Module";
cout<<"\n9> Find Std Marks";
cout<<"\n0> Exit..";

cout<<"\n Enter your choice : ";
cin>>choice;


switch(choice)
{
case 1:
stdObj.addStdRecord(StdsRec);
break;
case 2:
stdObj.updateStd();
break;
case 3:
stdObj.displayStdRecord();
break;
case 4:
stdObj.displayAllStdRecord();
break;
case 5:
stdObj.addModule(ModulesRecord);
break;
case 6:
stdObj.displayAnyModuleInfo();
break;
case 7:
stdObj.displayAllModulesInfo();
break;
case 8:
stdObj.updateModule();
break;
case 9:
stdObj.findStdMarks();
break;
case 0:
cout<<"\nThankyou !! Good Bye\n ";
break;
default:
cout<<"\nInvalid choice..";
getchar();
}
}

return 0;
}
