#include <iostream>
#include <sstream>

using namespace std;


int main()
{
    //1
    stringstream ss_1;

    ss_1 << "hello world";

    //2
    stringstream ss_2("hello world");

    string h;

    ss_2 >> h;

    cout << h << endl;;

    //3
    stringstream ss_3;

    string g = "hello";
    string g2;

    ss_3<<g; 
    ss_3>>g2;
    cout << g << endl;
    cout << g2 << endl;

}