#include <iostream>
using namespace std;
int main() {
    // This program demonstrates basic arithmetic operations in C++
    int a = 10, b = 20;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    //this program also demonstrates the use of increment and decrement operators
    cout << "a++ = " << a++ << endl; // Post-increment
    cout << "++a = " << ++a << endl; // Pre-increment
    cout << "b-- = " << b-- << endl; // Post-decrement
    cout << "--b = " << --b << endl; // Pre-decrement

    //this program also demonstrates the use of relational operators
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    //this program also demonstrates the use of logical operators
    cout << "a && b: " << (a && b) << endl;
    cout << "a || b: " << (a || b) << endl;

    //this program also demonstrates the use of bitwise operators
    cout 	<< 	"a 	& 	b 	= 	" 	<< 	(a 	& 	b) 	<< endl;
    cout 	<< 	"a 	| 	b 	= 	" 	<< 	(a 	| 	b) 	<< endl;
    cout 	<< 	"a 	^ 	b 	= 	" 	<< 	(a 	^ 	b) 	<< endl;

    //this program also shifts the bits of a number to the left and right
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;
    return 0;
}