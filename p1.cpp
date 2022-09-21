// Use of switch case in Class and object..
#include<iostream>

using namespace std;

class st
{
private:

     int day;

public:

        void read()
        {
            cout<<"Enter no from 1 to 7 and get name of that day"<<endl;
            cin>>day;
        }
        void print()
        {
            switch(day)
            {
            case 1:
                cout<<"monday";
                break;
            case 2:
                cout<<"tuesday";
                break;
            case 3:
                cout<<"wednesday";
                break;
            case 4:
                cout<<"thrusday";
                break;
            case 5:
                cout<<"friday";
                break;
            case 6:
                cout<<"saterday";
                break;
            case 7:
                cout<<"sunday";
                break;
            default :
                cout<<"Invalid Number";
                break;
            }
        }

};
int main()
{
st d;
d.read();
d.print();
return 0;
}

