#include <sstream>
#include <vector>
#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstring>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> v;
    stringstream ss(str);

    int n;
    char ch;

    while (ss>>n>>ch)
    {
        v.push_back(n);
    }
    v.push_back(n);
    return v;
}

int main() {
    string str;
    cout << "Enter the string: " <<endl;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}