//Function overloading comes under compile time polymorphism..
//Same function name with different type signature..
#include<iostream>
using namespace std;
class funo
{
public:
    void add()
    {
        int a=10,b=20;
        int c=a+b;
        cout<<"sum= "<<c<<endl;
    }
    void add(int x,int y)
    {
        int c=x+y;
        cout<<"sum= "<<c;
    }
};
int main()
{
    funo ob;
    ob.add();
    ob.add(20,10);
    return 0;
}
