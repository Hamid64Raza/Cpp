//Program to find factorial of given number...
#include<iostream>
using namespace std;


int main()
{
int n,i,fact=1;
cout<<"Enter a number";
cin>>n;
for(i=1;i<=n;i++)
{
    fact*=i;
}
cout<<"factorial of"<<n<<"is"<<fact;
return 0;
}
