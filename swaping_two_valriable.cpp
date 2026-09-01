#include<iostream>
using namespace std;
int main()

{
    int a = 5, b = 10;
    cout << "Before Swapping: a = " << a << ", b = " << b << endl;

    // Swapping using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    cout << "After Swapping: a = " << a << ", b = " << b << endl;

    return 0;
}