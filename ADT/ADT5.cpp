#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,9,8,7,6};
    int pos,i,num;
    cout<<"Enter index number to delete its value"<<endl;
    cin>>pos>>num;
    for(i=pos;i<=pos;i++)
    {
        a[i]=a[i+1];
    }
    a[pos]=num;
    for(i=0;i<5;i++)
    {
        cout<<a[i];
    }
    return 0;
}
