#include<iostream>
using namespace std;


int main()
{
int n,p,i=1;
cout<<"Enter a number to print its table";
cin>>n;
for(i=1;i<=10;i++){

p=n*i;
cout<<"\n"<<n<<"*"<<i<<"="<<p;
}
return 0;
}