#include<iostream>
using namespace std;
class teacher
{
private:

    char tn[20];
    int tid,tps;

public:
    void read()
    {
    cout<<"Enter Teacher name\n";
    cin>>tn;
    cout<<"Enter Teacher id Number\n";
    cin>>tid;
    cout<<"Enter Teacher Pay Scale\n";
    cin>>tps;
    }
    void print()
    {
        cout<<"\nname"<<"="<<tn;
        cout<<"\nTeachar id"<<"="<<tid;
        cout<<"\nTeachar Pay Scale"<<"="<<tps<<endl;
    }
};
int main()
{
    teacher t1,t2;
    cout<<"Teachar 1\n";
    t1.read();
    t1.print();
    cout<<"Teachar 2\n";
    t2.read();
    t2.print();
    return 0;
}
