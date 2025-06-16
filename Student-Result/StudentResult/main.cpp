#include <iostream>
#include <iomanip>
using namespace std;

{

}
int main()
{
    int n;
    cout << "Enter the Number of Students: " << endl;
    cin >> n;

    string student_name[n];
    int student_ID[n];
    float semester_activity[n];
    float lab_grade[n];
    float final_grade[n];
    float total_grade[n];
    int aCont, bCont, cCont, dCont, fCont, sCont, pCont;
    float perc_pass, perc_fail, perc_absent;

    for(int i=0; i<n; i++)
    {
        cout << "Information of students: " << i+1 << "\nEnter the student name: " <<endl;
        cin >> student_name[i];

        cout << "Enter the student ID: " <<endl;
        cin >> student_ID[i];

        cout << "Enter the student semester activity: " <<endl;
        cin >> semester_activity[i];

        cout << "Enter the student lab grade: " <<endl;
        cin >> lab_grade[i];

        cout << "Enter the student final grade: " <<endl;
        cin >> final_grade[i];

    }
    for(int i=0; i<n; i++)
    {
        total_grade[i] = (semester_activity[i] + lab_grade[i] + final_grade[i]);
        if(total_grade[i] < 100.0 && total_grade[i] >= 90.0)
        {
            ++aCont;
            ++pCont;
        }
        else if(total_grade[i] < 90.0 && total_grade[i] >= 80.0)
        {
            ++bCont;
            ++pCont;
        }
        else if(total_grade[i] < 80.0 && total_grade[i] >= 70.0)
        {
            ++cCont;
            ++pCont;
        }
        else if(total_grade[i] < 70.0 && total_grade[i] >= 60.0)
        {
            ++dCont;
            ++pCont;
        }
        else if(total_grade[i] < 60.0 && total_grade[i] >= 00.0)
        {
            ++fCont;
        }
        else
            ++sCont;
    }

    perc_pass = (pCont * 100)/n;
    perc_fail = (fCont * 100)/n;
    perc_absent = (sCont * 100)/n;

    for(int i=0; i<n; i++)
    {
        cout << student_name[i] << setw(10) << student_ID[i] << setw(10) << semester_activity[i] << setw(10) << lab_grade[i] << setw(10) << final_grade[i]
            << setw(10) << total_grade[i] <<endl;
    }
    return 0;
}
