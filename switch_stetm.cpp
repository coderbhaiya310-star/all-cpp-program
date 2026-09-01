#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char c;
    cout<<"Enter the first number:";
    cin>>a;

     cout<<"Enter +,-,*,/:";
    cin>>c;

     cout<<"Enter the second number:";
    cin>>b;

    switch (c)
    {
    case '+':
            cout<<"Addition:"<<a+b<<endl;
        break;
    

     case '-':
            cout<<"sub:"<<a-b<<endl;
        break;
    


    case '*':
            cout<<"Multiply:"<<a*b<<endl;
        break;
    

    case '/':
            cout<<"Division:"<<a/b<<endl;
        break;
    
    default:
            cout<<"Enter the integer Value"<<endl;
        break;
    }
}