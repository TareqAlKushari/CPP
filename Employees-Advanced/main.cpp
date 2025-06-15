#include <iostream>
#define max 100
using namespace std;

//Solve the Question Q(3-2)

class Employees
{
private:
    friend int Compute_Salary();
    int Emp_No;
    int Emp_Salary;
    const int D = 5000;
    const int M = 3000;
    const int B = 2500;
    const int F = 1500;


protected:
    int Emp_Wh;
    int Emp_Mh;
    int Emp_Moff;
    int Emp_H;

public:

    string Emp_Name;
    int Emp_Degree;
    int Emp_Phone;


    Employees ()
    {
        Emp_Name = "No Name";
        Emp_degree('N');
        Emp_Phone = 000000000;
        Emp_No = 00000000;
        Emp_Salary = 0.00;
        Emp_H = 00;
    }
    Employees (int No, string Name, char Degree, int Wh, int Mh, int Moff, int Phone)
    {
        Emp_Name = Name;
        Emp_degree(Degree);
        Emp_Phone = Phone;
        Emp_No = No;
        //Determent_H (Wh, Mh, Moff);
        Emp_Wh = Wh;
        Emp_Mh = Mh;
        Emp_Moff = Moff;
    }
    int Emp_degree(char degree)
    {
        if(degree == 'D')
            Emp_Degree = D;
        else if(degree == 'M')
            Emp_Degree = M;
        else if(degree == 'B')
            Emp_Degree = B;
        else if(degree == 'F')
            Emp_Degree = F;
        else
            Emp_Degree = 0;
    }
    void Input_Data()
    {
        static int count = 1;
        cout << "Input The Data of Employee: " << count << endl;
        cin>> Emp_No >> Emp_Name >> Emp_Degree >> Emp_Wh >> Emp_Mh >> Emp_Moff >> Emp_Phone;
        count++;
    }

    int Determin_H()
    {
        return Emp_H = ( ( 4 * Emp_Wh ) - Emp_Mh - Emp_Moff );
    }
    void Output_result()
    {
        static int count = 0;
        cout<< Emp_No << Emp_Name << Determin_H() << Compute_Salary() << Emp_Wh << Emp_Mh << Emp_Moff << Emp_Phone << endl;
        count++;

    }
};

int Compute_Salary()
{
    return Emp_Salary = (Emp_Degree * Determin_H());
}
int main()
{
    int N;
    cout << "Enter the Number of Employee !" << endl;
    cin >> N;

    //Employees E0(2007001, "Tareq",'D',40,0,2,777161416);
    Employees employees[max] = {Employees(2007001, "Tareq", 'D', 40, 0, 2, 777161416),};
    Employees *E = employees;


    for(int i=1; i <= N; i++)
    {
        E[i].Input_Data();
    }

    for(int i=0; i <= N; i++)
    {
        E[i].Output_result();
    }


    return 0;
}
