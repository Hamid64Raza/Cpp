#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10];
    for(int i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<10;i++)
    {
        cout<<b[i];
    }
    return 0;
}
