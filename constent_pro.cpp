#include <iostream>
using namespace std;

const double PI = 3.14159;

// Function Definition
double areaofcircle(double r)
{
    double area;
    area = PI * r * r;
    return area;
}

int main()
{
    cout << "Area of Circle = " << areaofcircle(4);

    return 0;
}