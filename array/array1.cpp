//Program for finding largest element of an Array.
#include<iostream>
using namespace std;
int main()
{
    int A[10]={1,2,3,4,50,6,7,8,50,2},i,max;
    max=A[0];
    for(i=0;i<10;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<"Largest element= "<<max;
    return 0;
}
