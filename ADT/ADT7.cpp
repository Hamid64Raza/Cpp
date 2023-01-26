#include<iostream>
using namespace std;
int main()
{
    int a[10]={9,8,7,6,5};
    int temp,i;
    temp=a[0];

    for(int i=0;i<4;i++){
        a[i]=a[i+1];
    }

    a[4]=temp;



    for( i=0;i<5;i++)
    {
        cout<<a[i];
    }
    return 0;
}
