//No arguments  return value.
#include <iostream>
using namespace std;

int areaofcircle(); // Function declaration

int areaofcircle() // Function definition
{
    float area = 3.14 * 5 * 5;
    return area;
}

int main()
{
    cout << "Area of circle: " << areaofcircle() << endl;
    return 0;
}   