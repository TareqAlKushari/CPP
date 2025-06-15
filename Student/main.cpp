#include <iostream>
#include <fstream>
#include "student.h"

using namespace std;



int main()
{
    student s[5];
    fstream file;
    int i;



    file.open("c:\\Users\\acer\\Documents\\file4.txt", ios :: out);
     cout << "\nWriting student information to the file : " << endl ;
     cout << "\nWriting student information to the file : " << endl ;

    for (i = 0; i<5; i++)
     {
        s[i].getData();

        file.write ((char *) &s[i], sizeof(s[i]));
     }

    file.close();


    file.open("c:\\Users\\acer\\Documents\\file4.txt", ios :: in);
    cout << "\nReading Student information to the file :." << endl ;

    for (i=0; i <5; i++)
    {

        file.read((char *)&s[i], sizeof(s[i]));
        s[i].displayData();
    }

    file.close();





    return 0;
}

