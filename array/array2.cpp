//Program for Linear search in array..
#include<iostream>
using namespace std;
int main()
{
    int A[10];
    int key;
    cout<<"Enter 10 Array element"<<endl;
    for(int i=0;i<10;i++)
    {
    cin>>A[i];
    }

    cout<<"Now Enter search value "<<endl;
    cin>>key;
    for(int i=0;i<10;i++)
    {
        if(A[i]==key)
        {
            cout<<"Search value Found= "<<key<<endl;
            return 0;
        }
    }
    cout<<"Search value not found";
    return 0;

}
