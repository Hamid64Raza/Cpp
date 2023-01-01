//program to Add all element of an array..
#include<iostream>
using namespace std;
int main()
{
    int A[6]={1,2,3,4,5,6};
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum=sum+A[i];
    }
    cout<<"SUM= "<<sum;
    return 0;
}
