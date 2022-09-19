//Program on recursive Function...
//Program on factorial of a Program..
#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n=4;
    int r;
    r=fact(n);
    cout<<"FACTORIAL="<<r;
}
int fact(int n)

{

    int f;
    if(n==1)
        return(1);
    else
        f=n*fact(n-1);
    return(f);
}
