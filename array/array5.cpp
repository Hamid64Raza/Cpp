//Program for multiplication of two array..
#include<iostream>
using namespace std;
int main()
{
    int A[2][3]={{2,2,2},{2,2,2}};
    int B[2][3]={{2,2,2},{2,2,2}};
    int c[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=A[i][j]*B[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j];
        }
        cout<<endl;
    }

}
