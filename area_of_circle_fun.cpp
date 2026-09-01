#include <iostream>
using namespace std;

// Function Definition
int areaofcircle(int r)
{
    int area;
    area = 3.14 * r * r;
    return area;
}

int main()
{
    cout << "Area of Circle = " << areaofcircle(4);

    return 0;
}