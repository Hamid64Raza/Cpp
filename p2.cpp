// Q What is constructor? -> Constructor are spacial member function which is called implicitly, when an objectof is classis created .
//Types of constructor are Default constructor, paramataried constructor, and copy constructor .
#include<iostream>
using namespace std;
class add
{
    int a,b,c;
    public:
    add() //Default constructor
    {
        cout<<"defoult constructor"<<endl;
    }
    add(int x, int y)  //paramataried constructor
    {
        a=x;
        b=y;
        c=a+b;
        cout<<"sum is ="<<c<<endl;
    }
    add(add &m)  //copy constructor
    {
        a=m.a;
        b=m.b;
    }
    
};

int main()
{
    add c1,c2(5,5);
    add c3(c2);

return 0;
}