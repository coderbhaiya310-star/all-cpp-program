#include<iostream>
using namespace std;
int main()
{
    int a = 5, b = 10;
    cout << "Before Swapping: a = " << a << ", b = " << b << endl;

    // Swapping without using a temporary variable
    a = a + b; // a now becomes 15
    b = a - b; // b becomes 5
    a = a - b; // a becomes 10

    cout << "After Swapping: a = " << a << ", b = " << b << endl;

    return 0;
}