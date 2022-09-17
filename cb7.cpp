// program on class and object..
#include<iostream>
using namespace std;
class A
{
private:
int a,b,c;
public:
void read()
{
cout<<"Enter two number";
cin>>a>>b;
}
void cal()
{
c=a+b;
}
void print()
{
cout<<"SUM is ="<<c;
}
};
int main()
{
A a1;
a1.read();
a1.cal();
a1.print();
return 0;
}
