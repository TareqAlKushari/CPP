#include <iostream>
#include <iomanip>

using namespace std;

class classResult
{
    private:
        int semester;
        int final_exam;

    public:
        explicit classResult (int number1, int number2):semester(number1), final_exam(number2);
        {

        }

        int get_1()
        {
            return semester;
        }

        int get_2 ()
        {
            return final_exam;
        }

        int total()
        {
            int t = 0;
            t = semester + final_exam;
            return t;
        }

        string score()
        {
            int grade = 0;
            grade = total;

            if (grade >= 90 && grade <= 100)
            {
                return "A";
            }
            else if (grade >= 80 && grade < 90)
            {
                return "B";
            }
            else if (grade >= 70 && grade < 80)
            {
                return "C";
            }
            else if (grade >= 60 && grade < 70)
            {
                return "D";
            }
            else
            {
                return "F";
            }
        }
};

int main()
{
    int n = 1;
    classResult student_1();
    classResult student_2();
    while (n <= 2)
    {
        int number1, number2;
        cout << "Enter the two grade of the student_" << n <<endl;
        cin >> number1 >> number2;
        if(n == 1)
            classResult student_1(number1, number2);
        if(n == 2)
            classResult student_2(number1, number2);
    }

    cout << "number" << setw(25) << "semester grade" << setw(15) << "final exam" << setw(10) << "total" << setw(10) << "score" <<endl;
    cout << "1" << setw(15) << student_1.get_1() << setw(15) << student_1.get_2() << setw(15) << student_1.total() << setw(15) 
    << student_1.score() << endl;
    cout << "1" << setw(15) << student_2.get_1() << setw(15) << student_2.get_2() << setw(15) << student_2.total() << setw(15) 
    << student_2.score() << endl;
}