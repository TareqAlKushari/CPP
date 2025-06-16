#include <iostream>
#include <string.h>

using namespace std;

struct car
{
    string name;
    string color;
    int maxspeed;
    int model;
    void fun(car n)
    {
        cout << n.name << endl;
    }
};

car read_return( car &s )
{
    cout << "Enter the Name: " << endl;
    cin >> s.name;
    cout << "Enter the Color: " << endl;
    cin >> s.color;
    cout << "Enter the Maxspeed: " << endl;
    cin >> s.maxspeed;
    cout << "Enter the Model: " << endl;
    cin >> s.model;

    return s;
}

int main()
{
    //Structures withe pointer
    car *n;
    car b = {"A", "C", 200, 2011};
    n = &b;
    cout << n->color << endl;

    //Structures withe inside function
    car m = {"Kia"};
    m.fun(m);

    //Structures withe function
    car v; 
    read_return(v);
    car h;
    h = v; 
    cout << h.name << endl;

    //Structures withe if & else
    car x = {"BMW", "Blue", 250, 2016};
    car y = {"Mercedes", "Red", 300, 2016};
    if (x.maxspeed > y.model)
        cout << "X graeter than Y\n";
    else
        cout << "Y graeter than X\n";

    int arr[5] = {1,2,3};

    cout << arr[0] << endl;
    cout <<  y.name;
}