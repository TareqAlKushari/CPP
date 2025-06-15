#include <iostream>

using namespace std;
class GradeBook
{
private:
    string cours_name;
    unsigned int aCount;
    unsigned int bCount;
    unsigned int cCount;
    unsigned int dCount;
    unsigned int fCount;
    unsigned int sCount;
    unsigned int pass;
    unsigned int fail;
public:
    GradeBook(string name)
        : cours_name(name),
        aCount(0),
        bCount(0),
        cCount(0),
        dCount(0),
        fCount(0),
        sCount(0),
        pass(0),
        fail(0)
    {

    }
    void StudentResult()
    {
        int grade, n;
        cout << "Enter the number of students: " <<endl;
        cin >> n;


        for(int i=0; i<n; i++)
        {
            cout << "Enter The Grade of Student:" << i+1 <<endl;
            cin >> grade;
            if((grade <= 100) && (grade >= 90))
            {
                ++aCount;
                ++pass;
            }
            else if((grade < 90) && (grade >= 80))
            {
                ++bCount;
                ++pass;
            }
            else if((grade < 80) && (grade >= 70))
            {
                ++cCount;
                ++pass;
            }
            else if((grade < 70) && (grade >= 60))
            {
                ++dCount;
                ++pass;
            }
            else if(grade < 60)
            {
                ++fCount;
            }
            else
                ++sCount;
        }
        pass = (pass*100)/n;
        fail = (fail*100)/n;
        sCount = (sCount*100)/n;
    }
    void displays()
    {
        cout << "  Welcome to the GradeBook program for managing the following courses:\n "
            << "  1) " << cours_name
            << "\n\n\t  Presented by Dr.Ali AL-HAMDI for first semester of academic year 2022-2023."
            << "\nThe result of selected course is as follows:"
            << "\n\tThe A is:" << aCount
            << "\n\tThe B is:" << bCount
            << "\n\tThe C is:" << cCount
            << "\n\tThe D is:" << dCount
            << "\n\tThe Pass is:" << pass << "%"
            << "\n\tThe Fail is:" << fCount << "%"
            << "\n\tThe Absent is:" << sCount << "%" <<endl;

    }
};
int main()
{
    GradeBook myGradeBook("C++ programming language");

    myGradeBook.StudentResult();
    myGradeBook.displays();
    return 0;
}
