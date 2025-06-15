#include <iostream>

using namespace std;

//Solve the Question Q(3-1)

class Employee
{
private:
    string first_name;
    string last_name;
    int job_number;
    float monthly_salary;
public:
    Employee(string name1="No", string name2="Name", int number=00, float salary=0.0)
    {
        set_first_name(name1);
        set_last_name(name2);
        set_job_number(number);
        set_monthly_salary(salary);
    }
    void set_first_name(string name)
    {
        first_name = name;
    }
    void set_last_name(string name)
    {
        last_name = name;
    }
    void set_job_number(int number)
    {
        job_number = number;
    }
    void set_monthly_salary(float salary)
    {
        monthly_salary = salary;
    }
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    int get_job_number()
    {
        return job_number;
    }
    float get_monthly_salary()
    {
        return monthly_salary;
    }
    void input_employee()
    {
        string name1,name2;
        int number;
        float salary;
        cout << "Enter The First Name: "; cin >> name1; set_first_name(name1);
        cout << "\nEnter The Last Name: "; cin >> name2 ; set_last_name(name2);
        cout << "\nEnter The Job Number: "; cin >> number; set_job_number(number);
        cout << "\nEnter The Monthly Salary: "; cin >> salary; set_monthly_salary(salary);
        cout <<endl;
    }
    void Display_employee()
    {
        cout << "The Name: " << get_first_name() << " " << get_last_name() << endl;
        cout << "The Job Number: " << get_job_number() << endl;
        cout << "The Monthly Salary: " << get_monthly_salary() << endl;
    }

};

int main()
{
    Employee emp[3];
    for(int i=0; i < 3; i++)
    {
        emp[i].input_employee();
    }
    for(int i=0; i < 3; i++)
    {
        emp[i].Display_employee();
    }
    return 0;
}
