#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int marks[2][5]={{13,56,67,45,67},
                    {46,67,89,43,40}};

    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
              cout<<marks[j][i]<<endl;
        }
    }

  

    return 0;

}