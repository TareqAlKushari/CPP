#include <iostream>
#include "Modifying.h"

using namespace std;

Modifying::Modifying( string name, string instr )
{
    setCourseName( name );
    setInstructorName( instr );
}

void Modifying::setCourseName( string name )
{
    if ( name.size() <= 25 )
        courseName = name;
    if ( name.size() > 25 )
    {
        courseName = name.substr( 0, 25);

        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n" << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

void Modifying::setInstructorName( string instr )
{
    instructorName = instr;
}

string Modifying::getCourseName() const
{
    return courseName;
}

string Modifying::getInstructorName() const
{
    return instructorName;
}

string Modifying::displayMessage() const
{
    cout << "Welcome to the grade book for\n" << getCourseName()
         << " _ This course is presented by: " << getInstructorName() << "!" << endl;
}
