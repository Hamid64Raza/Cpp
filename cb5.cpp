#include<iostream>
using namespace std;
class  student
{
private:
    char stname[20];
    int sid,sub1,sub2,sub3,total;
    float avg;
public:
    void read()
    {
        cout<<"Enter name of student"<<endl;
        cin>>stname;
        cout<<"Enter student ID NUMBER"<<endl;
        cin>>sid;
    }
    void marks()
    {
        cout<<"Enter Marks of 3 Subjects"<<endl;
        cin>>sub1>>sub2>>sub3;
        total=sub1+sub2+sub3;
       // cout<<"TOTAL MARKS ="<<total<<endl;
        avg=total/3;                          //Learn by mistake...
       // cout<<"AVERAGE MARKS ="<<avg<<endl;
    }
    void print()
    {
        cout<<"Name="<<stname<<endl;
        cout<<"STUDENT ID ="<<sid<<endl;
        cout<<"TOTAL MARKS ="<<total<<endl;
        cout<<"AVRAGE MARKS="<<avg<<endl;
    }
};
int main()
{
    student s1,s2,s3;
    cout<<"Student 1st"<<endl;
    s1.read();
    s1.marks();
    s1.print();
    cout<<"Student 2nd "<<endl;
    s2.read();
    s2.marks();
    s3.print();
    cout<<"Student 3rd"<<endl;
    s3.read();
    s3.marks();
    s3.print();
    return 0;

}
