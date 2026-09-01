#include<iostream>
#include<iomanip>   // required for setw, setfill, left, right
using namespace std;

int main()
{
    int cardnumber = 1234;

    cout << setw(10);            // width applies only to NEXT output
    cout << setfill('x');        // fill empty spaces with 'x'
    cout << cardnumber << endl;

    cout << setw(10) << left;    // left alignment
    cout << cardnumber << endl;

    return 0;
}