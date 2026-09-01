#include<iostream>
#include<typeinfo>   // add this
using namespace std;

int main()
{
    auto a = 4;
    auto b = 5.5;
    auto c = 'c';

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    return 0;
}