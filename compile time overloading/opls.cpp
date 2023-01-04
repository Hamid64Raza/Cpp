#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void getdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void dispdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.a;
        return (temp);
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata(3,5);
    c2.getdata(5,3);
    c3=c1+c2;
    c3.dispdata();
    return 0;
}
