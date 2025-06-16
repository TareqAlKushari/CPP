#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    //1
    stringstream ss("hello world");

    string word;
    int counter = 0;

    while (ss>>word)
    {
        counter++;
    }
    cout<<counter<<endl;

    //2
    stringstream ss_2("5#4$");

    int n;
    char c;

    while (ss_2>>n>>c)
    {
        cout<<n<<" "<<endl;
    }

    //3
    stringstream ss_3;

    int n = 1234;
    string ns;

    ss_3<<n;
    ss_3>>ns;

    cout<<n<<endl;
    cout<<ns<<endl;

    
}