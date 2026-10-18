#include<iostream>
using namespace std;
int main()
{
    cout<<"Program Start"<<endl;
    int n;
    cout<<"Enter number of Student";
    cin>>n;
    
    int* marks=new int[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Marks of Student "<<i+1<<endl;
        cin>>marks[i];
    }

    
    for(int i=0;i<n;i++)
    {
        cout<<"Marksof Student"<< i+1 <<marks[i]<<":"<<endl;
    }
    cout<<"Program End"<<endl;
}