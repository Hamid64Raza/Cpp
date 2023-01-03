//Dynamic allocation of memory from the heap using pointer..
#include<iostream>
using namespace std;
int main()
{
  /*  int size;
    cout<<"Enter number of element"<<endl;
    cin>>size;
    int *p=new int[size];

    cout<<"enter new size";
    cin>>size;
    p=new int[size];
    */
    int *p=new int[20];
//    p[i]                //i can be from 0to19

    delete []p;
    p=new int[40];
//    p[i]             //i can be from 0to39

    return 0;
}
