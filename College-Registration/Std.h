#ifndef STD_H_INCLUDED
#define STD_H_INCLUDED

#include <iostream>
#include <fstream>
#include <cstring>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


class Std
{

public:

    int addStdRecord(char *);
    int updateStdRecord();
    int displayStdRecord();
    int displayAllStdRecord();
    int findStdMarks();
    int updateStd();
    int displayAnyModuleInfo();
    int displayAllModulesInfo();
    int updateModulesInfo();
    int addModule(char *);
    int updateModule();

};


#endif // STD_H_INCLUDED
