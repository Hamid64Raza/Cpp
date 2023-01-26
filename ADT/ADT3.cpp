#include<iostream>
using namespace std;
int main()
{
    int a[10];

    cout<<"Enter 10 element in array"<<endl;

    for(int i=0;i<10;i++)
    {  cout<<"enter at index no "<<i<<endl;
       cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i];
    }
    return 0;

}
