#include<iostream>
using namespace std;
class admission
{
private:
    char sname[20];
    int smarks,pay;
    float sca;
public:
    void read()
    {
        cin>>sname;
        cout<<"Enter student marks"<<endl;
        cin>>smarks;
    }
    void cal()
    {
        if(smarks>=90)
        {
            cout<<"You are under 1st catogaroy you will get 50% of scalership"<<endl;
            sca=(80000*50)/100.0;
            pay=80000-sca;
            cout<<"now your fee is="<<pay;
        }
        else if(smarks<90&&smarks>=80)
        {
            cout<<"you are under 2nd catogaroy, yoy will get 40% of scalership"<<endl;
            sca=(40/100.0)*80000;
            pay=80000-sca;
            cout<<"now your fee is="<<pay;

        }
        else if(smarks<80&&smarks>=70)
        {
            cout<<"you are under 3rd catogaroy you will get  30% of scalership"<<endl;
            sca=(30/100.0)*80000;
            pay=80000-sca;
            cout<<"now your fee is ="<<pay;

        }
        else if(smarks<70&&smarks>=60)
        {
            cout<<"you are under 4th catogary you will get  20% of scolership"<<endl;
            sca=(20/100.0)*80000;
            pay=80000-sca;
            cout<<"now your fee is ="<<pay;
        }
        else if(smarks<60&&smarks>=50)
        {
            cout<<"you are under 5th catogary you will get  10% of scalership"<<endl;
            sca=(10/100.0)*80000;
            pay=80000-sca;
            cout<<"now your fee is="<<pay;

        }
        else
            cout<<"SORRY YOU WILL NOT GET ANY SCALERSHIP"<<endl;
    }

};
int main()
{
    cout<<"\nEnter student details";
    cout<<"\nEnter student name";
    admission s1;
    s1.read();
    s1.cal();

    return 0;
}
