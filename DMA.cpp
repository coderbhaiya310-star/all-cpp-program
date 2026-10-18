#include<iostream>
using namespace std;
int main()
{
    cout<<"Program Start"<<endl;
    int* ptr=new int;
    *ptr=1000;
    cout<<"Value of ptr is "<<ptr<<endl;
    cout<<"Value of *ptr is "<<*ptr<<endl;
    delete ptr;
    cout<<"Program End"<<endl;

    return 0;
}