#include <iostream>

using namespace std;

//Solve the Question Q(3-2)

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
        cout << "\nEnter The Fixed Monthly Salary: "; cin >> salary; set_monthly_salary(salary);
        cout <<endl;
    }
    void Display_employee()
    {
        cout << "The Name: " << get_first_name() << " " << get_last_name() << endl;
        cout << "The Job Number: " << get_job_number() << endl;
        cout << "The Monthly Salary: " << get_monthly_salary() << endl;
    }

};

class Staffs :public Employee
{
private:
    const int fixed_salary = 250000;
    const int fixed_hours = 2000;
    int years_experience;
    int extra_hours;
public:
    Staffs(string name1="No", string name2="Name", int number=00, float salary=0.0, int year=00, int hours=00)
    {
        set_first_name(name1);
        set_last_name(name2);
        set_job_number(number);
        set_monthly_salary(salary);
        set_years_experience(year);
        set_extra_hours(hours);
    }
    void set_years_experience(int exp)
    {
        years_experience = exp;
    }
    void set_extra_hours(int hours)
    {
        extra_hours = hours;
    }
    int get_years_experience()
    {
        return years_experience;
    }
    int get_extra_hours()
    {
        return extra_hours;
    }
    void input_staffs()
    {
        int years,hours;
        input_employee();
        cout << "\nEnter The Years Experience: "; cin >> years; set_years_experience(years);
        cout << "\nEnter The Extra Hours: "; cin >> hours; set_extra_hours(hours);
        cout <<endl;
    }
    void total_monthly()
    {
        float total, total_experience, total_extra;
        total_experience = (fixed_salary/10) * (years_experience/4);
        total_extra = fixed_hours * extra_hours;
        total = total_experience + total_extra + get_monthly_salary();
        set_monthly_salary(total);
    }
    void Display_staffs()
    {
        cout << "The Name: " << get_first_name() << " " << get_last_name() << endl;
        cout << "The Job Number: " << get_job_number() << endl;
        cout << "The Monthly Salary: " << get_monthly_salary() << endl;
    }
};

class Workers :public Employee
{
private:
    const int fixed_hours = 2000;
    int years_experience;
    int extra_hours;
public:
    Workers(string name1="No", string name2="Name", int number=00, float salary=0.0, int year=00, int hours=00)
    {
        set_first_name(name1);
        set_last_name(name2);
        set_job_number(number);
        set_monthly_salary(salary);
        set_years_experience(year);
        set_extra_hours(hours);
    }
    void set_years_experience(int exp)
    {
        years_experience = exp;
    }
    void set_extra_hours(int hours)
    {
        extra_hours = hours;
    }
    int get_years_experience()
    {
        return years_experience;
    }
    int get_extra_hours()
    {
        return extra_hours;
    }
    void input_Workers()
    {
        int years,hours;
        input_employee();
        cout << "\nEnter The Years Experience: "; cin >> years; set_years_experience(years);
        cout << "\nEnter The Extra Hours: "; cin >> hours; set_extra_hours(hours);
        cout <<endl;
    }
    float total_monthly()
    {
        float total, total_experience, total_extra;
        total_extra = fixed_hours * extra_hours;
        total_experience = (total_extra/10) * (years_experience/4);
        total = total_experience + total_extra;
        return total;
    }
    void Display_Workers()
    {
        cout << "The Name: " << get_first_name() << " " << get_last_name() << endl;
        cout << "The Job Number: " << get_job_number() << endl;
        cout << "The Monthly Salary: " << total_monthly() << endl;
    }
};
int main()
{
    cout << " " << endl;

    Employee emp[1];
    Staffs staff[1];
    Workers work[1];
    for(int i=0; i < 1; i++)
    {
        staff[i].input_staffs();
    }
    for(int i=0; i < 1; i++)
    {
        staff[i].Display_staffs();
    }

    return 0;
}
