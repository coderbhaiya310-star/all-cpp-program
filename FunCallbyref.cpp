//Function call by reference
#include <iostream>
using namespace std;
void swap(int &x, int &y) // Function definition with reference parameters
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10, b = 20;
    cout << "Before Swap: " << a << " " << b << endl;
    swap(a, b);
    cout << "After Swap: " << a << " " << b << endl;
    return 0;
}
