#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,9,8,7,6,};
    int pos,num,i;
    cout<<"Enter index number at which to want to insert data,also insert that number"<<endl;
    cin>>pos>>num;
    for(i=4;i<=pos;i--)
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
