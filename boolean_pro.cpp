#include<iostream>
using namespace std;
int main()
{
    const bool a = true;
    const bool b = false;
    cout << "Value of a is " << a << endl;
    cout<<boolalpha; // to print boolean values as true/false instead of 1/0
    cout << "Value of a is " << a << endl;
    cout<<noboolalpha; // to print boolean values as 1/0 instead of true/false
    cout << "Value of a is " << a << endl;
    
    cout << "Value of b is " << b << endl;
    return 0;
}