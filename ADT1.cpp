//Program for insertion of eliment in array.
#include<iostream>
using namespace std;
int main()
{
    int a[10]={9,8,7,6,5};
    int pos,num,i;
    cout<<"enter index number at which you want to enter new number"<<endl;
    cout<<"Enter new number"<<endl;
    cin>>pos>>num;
    for(i=4;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=num;
    cout<<"Array after insetion"<<endl;
    for(i=0;i<6;i++)
    {
        cout<<a[i];
    }
    return 0;
}
