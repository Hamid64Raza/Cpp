//use of :: oprator in class
#include<iostream>
using namespace std;
class op
{
private:
    int a,b,c;
public:
    void read();
    void cal();
    void print();
};
void op ::read()
{
    cout<<"Enter two no"<<endl;
    cin>>a>>b;
}
void op::cal()
{
    c=a+b;
}
void op:: print()
{
    cout<<"SUM is ="<<c;
}
int main()
{
    op a1;
    a1.read();
    a1.cal();
    a1.print();
    return 0;
}
