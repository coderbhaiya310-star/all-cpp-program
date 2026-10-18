//size of pointer.cpp
#include<iostream>
using namespace std;
int main(){
    
    int *p;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(p)<<endl;
}

//all datatype size in c++

#include<iostream>
using namespace std;
int main(){

    int *p;//pointer to integer
    double *p2;//pointer to double
    string *p3;//pointer to string

    cout<<sizeof(p)<<endl;//size of pointer to integer.
    cout <<sizeof(p2)<<endl;//size of pointer to double.
    cout<<sizeof(p3)<<endl;//size of pointer to string.

    return 0;
    
}

