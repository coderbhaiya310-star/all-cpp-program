#include<iostream>
using namespace std;

extern int a;

int main()
{
    cout << "Program Start" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Program end" << endl;

    return 0;
}

int a = 17;   // Global variable definition