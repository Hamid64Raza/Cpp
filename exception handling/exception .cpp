//Program for Exception Handling..
#include<iostream>
using namespace std;
int main()
{
    int velocity,time,distance;
    cout<<"Enter time and distance";
    cin>>time>>distance;
    try{
        if(time>0)

        {
            velocity=distance/time;
        cout<<"velocity= "<<velocity;

        }
       else{
            throw time;                                   //Example of multiple throw..
            throw distance;
       }

       }
       catch(int d)
       {
           cout<<"distance can not be zero or negative";
       }
       catch(int t)                                       //Example of multiple catch..
       {
           cout<<"time can not be negative";

       }
       return 0;
}
