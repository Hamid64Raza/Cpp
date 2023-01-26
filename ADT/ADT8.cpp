#include<iostream>//left shift
using namespace std;
int main()
{
    int a[10]={9,8,7,6,5};
    int temp;
    temp=a[4];
    for(int i=4;i>=0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
    return 0;
}
