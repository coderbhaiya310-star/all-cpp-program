#include<iostream>
using namespace std;
void print(int n);
void print(int n)
{
    if(n==1)
        return;
    cout<<"Hi Everyone"<<endl;
    print(n-1);
}

int main()
{
cout<<"Program Start"<<endl;
int n;
cout<<"Enter the number of times you want to print the string"<<endl;
cin>>n;
print(n);

cout<<"Program End"<<endl;

return 0;

}
