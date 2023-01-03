//pointer Arithmetic..
//Total 5 operations are allowed..
#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,5};
    int *ptr= A;
    int *q=&A[4];
    ptr++;          //1>Ptr++
    cout<<ptr<<endl;
    ptr--;          //2>ptr--
    cout<<ptr<<endl;
    ptr=ptr+2;      //3>ptr=ptr+2
    cout<<ptr<<endl;
    ptr=ptr-2;      //4>ptr=ptr-2
    cout<<ptr<<endl;
    int d=ptr-q;    //5>Subtraction of Adress
    cout<<d;
    return 0;

}
