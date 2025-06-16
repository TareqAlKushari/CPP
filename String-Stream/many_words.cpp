#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    //1
    stringstream ss_1("hello world");

    string a1, a2;

    ss_1>>a1>>a2;

    cout << a1 << " " << a2 <<endl;

    //2
    stringstream ss_2("5 .2 4");

    int n, n2;
    float f;

    ss_2>>n>>f>>n2;

    cout <<n<<" "<<f<<" "<<n2<<endl;

    //3
    stringstream ss_3("5,4,5");

    int n_1,n_2,n_3;
    char c1,c2;

    ss_3>>n_1>>c1>>n_2>>c2>>n_3;

    cout<<n_1<<" "<<n_2<<" "<<n_3<<endl;
}