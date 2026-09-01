#include<iostream>
using namespace std;
int main()
{
    float fdata=5.99;
    int idata=static_cast<int>(fdata); // type casting using static_cast
    cout<<"Value of fdata is "<<fdata<<endl;
    cout<<"Value of idata is "<<idata<<endl;
    return 0;
}