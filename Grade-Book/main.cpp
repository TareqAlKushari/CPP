#include <iostream>
#include "GradeBook.h"
#include "Modifying.h"

using namespace std;

int main()
{
    // GradeBook gradeBook_1( "CS101 Introduction to Programming in C++" );
    // GradeBook gradeBook_2( "CS102 C++ Data Structures" );

    // cout << "gradeBook_1's initial course name is: "
    // << gradeBook_1.getCourseName()
    // << "\ngradeBook_2's initial course name is: "
    // << gradeBook_2.getCourseName() << endl;

    // gradeBook_1.setCourseName( "CS101 C++ Programming" );

    // cout << "\ngradeBook_1's course name is: "
    // << gradeBook_1.getCourseName()
    // << "\ngradeBook_2's course name is: "
    // << gradeBook_2.getCourseName() << endl;


    Modifying gradeBook_1( "CS101 Introduction to Programming in C++", "Tareq" );
    Modifying gradeBook_2( "CS102 C++ Data Structures", "Mohammed" );

    cout << "gradeBook_1's initial course name is: \n"
    << gradeBook_1.displayMessage()
    << "\ngradeBook_2's initial course name is: \n"
    << gradeBook_2.displayMessage() << endl;

    gradeBook_1.setCourseName( "CS101 C++ Programming" );

    cout << "\ngradeBook_1's course name is: "
    << gradeBook_1.displayMessage()
    << "\ngradeBook_2's course name is: "
    << gradeBook_2.displayMessage() << endl;
}
