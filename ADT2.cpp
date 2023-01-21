//Program for delition of eliment in an array..
#include<iostream>
using namespace std;
int main()
{
    int a[5]={9,8,7,6,5};
    int pos,i;
    cout<<"Enter index no to delete its value";
    cin>>pos;
    for(i=pos;i<5;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<4;i++)
    {
        cout<<a[i];
    }
    return 0;
}
