#include <iostream>
using namespace std;

int main()
{

    // This program demonstrates the use of a while loop in C++
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    while (n > 0)
    {
        cout << n << " ";
        n--;
    }

    //this program also demonstrates this using a do while loop in C++
    int m;
    cout << "\nEnter a positive integer: ";
    cin >> m;

    do
    {
        cout << m << " ";
        m--;
    } while (m > 0);

    //this program also demonstrates the use of a for loop in C++
    int p;
    cout << "\nEnter a positive integer: ";
    cin >> p;
    for (int i = p; i > 0; i--)
    {
        cout << i << " ";
    }

    return 0;
}