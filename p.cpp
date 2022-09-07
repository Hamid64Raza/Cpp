//program to print sum of natural number...
#include<iostream>
using namespace std;


int main()
{
int n,i,sum=0;
cout<<"Enter number of term";
cin>>n;
for(i=0;i<=n;i++)
{
    sum=sum+i;
}    
    cout<<"Sum of number of terms is="<<sum;

return 0;
}