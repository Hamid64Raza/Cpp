//Runtime polymorphism is implemented using Virtual Function..
#include<iostream>

using namespace std;
class Laptop
{
public:
    virtual void CollingSystem()
                   (
                     cout<<"I AM HAVING SINGLE HEAT CONDUCTING METAL WITH SMALL SINGLE FAN";
                    )
};
class GamigLaptop: Public Laptop
{
public:
    void CollingSystem()
    {
        cout<<"I AM HAVING DUAL HEAT CONDUCTING METAL WITH TWO LARGE FANS";
    }
};
int main()
{
    Laptop *ptr;
    GamigLaptop object;
    ptr=&object;
    ptr->CollingSystem();
    return 0;
}

