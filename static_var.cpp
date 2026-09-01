#include<iostream>
using namespace std;

void counter(int c);   // declaration

void counter(int c)    // definition
{
    static int count = 0;
    count = count + c;
    cout << count << endl;
}

int main()
{
    counter(8);

    return 0;
}