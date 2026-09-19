// arguments and return value.
#include <iostream>
using namespace std;

int areaofcircle(int r); // Function declaration

int areaofcircle(int r) // Function definition
{
    float area = 3.14 * r * r;
    cout << "Area of circle: " << area << endl;
}

int main()
{
    areaofcircle(5); // Call the function with radius 5.0;
    return 0;
}   