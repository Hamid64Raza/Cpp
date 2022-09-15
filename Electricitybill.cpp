//Electricity Bill Calculator...
#include<iostream>
using namespace std;
class ebill
{
private :
    int unit,total;

public:
    void read()
    {
    cout<<"Enter unit consumed:"<<endl;
    cin>>unit;
    }
    void cal()
    {
        if(unit<=100)
            {
            total=unit*2;
           
        }
        else if(unit>100&&unit<=200)
        {
            total=(100*2)+((unit-100)*3);
           
        }
        else
        {


            total=(100*2)+(100*3)+((unit-200)*4);
           
        }


    }
    void show()
    {
        cout<<"your amount is ="<<total<<endl;
          
    }

};

int main()
{
    ebill c1,c2;
    cout<<"Enter detales of 1st customer"<<endl;
    c1.read();
    c1.cal();
    c1.show();
    cout<<"Enter detales of 2nd customer"<<endl;
    c2.read();
    c2.cal();
    c2.show();
    return 0;
}
