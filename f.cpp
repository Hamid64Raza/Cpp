#include<iostream>
using namespace std;


int main()
{
float f;
int maths,scince,sst,sum;
cout<<"Enter marks of subjects";
cin>>maths>>scince>>sst;
sum=maths+scince+sst;
sum=sum/3;
if(sum>=30)
{
    cout<<"pass";

}
else
{
    cout<<"fail";
}
return 0;
}