//arguments: pass no return type
#include<iostream>
using namespace std;

void printValues(int a, int b); // Function declaration

void printValues(int a, int b) // Function definition
{
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
}

int main()
{
    printValues(10, 20); // Call the function with two arguments
    return 0;
}