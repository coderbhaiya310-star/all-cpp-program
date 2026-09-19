// No arguments no  return value.
#include <iostream>
using namespace std;

void printHelloWorld(); // Function declaration
void printHelloWorld()
{ // Function definition
    cout << "Hello, World!" << endl;
}
int main()
{

    printHelloWorld(); // Call the function to print "Hello, World!"
    return 0;
}