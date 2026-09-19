#include<iostream>
using namespace std;
int main() {
    // This program demonstrates the use of conditional statements in C++
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Using if-else statement
    if (num > 0) {
        cout << num << " is a positive number." << endl;
    } else if (num < 0) {
        cout << num << " is a negative number." << endl;
    } else {
        cout << "You entered zero." << endl;
    }

    

    // Using switch statement
    switch (num) {
        case 1:
            cout << "You entered one." << endl;
            break;
        case 2:
            cout << "You entered two." << endl;
            break;
        case 3:
            cout << "You entered three." << endl;
            break;
        default:
            cout << "You entered a number other than 1, 2, or 3." << endl;
            break;
    }

    return 0;
}