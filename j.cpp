
#include<iostream>
using namespace std;


int main()
{
int option,a,b,c;
float x,y,z;
cout<<"Option\n";
cout<<"1.add\n"<<"2.sub\n"<<"3.mul\n"<<"4.div\n";
cin>>option;
switch(option)
{
    case 1:
    
    cout<<"enter two number\n";
    cin>>a>>b;
    c=a+b;
    cout<<"sum is ="<<c;
    break;
    
    case 2:
        
    cout<<"enter two no\n";
    cin>>a>>b;
    c=a-b;
    cout<<"sub is= "<<c;
    break;
    
    case 3:
    cout<<"Enter two number\n";
    cin>>a>>b;
    c=a*b;
    cout<<"mul is ="<<c;
    break;
    
    case 4:
    
    cout<<"enter two no\n";
    cin>>x>>y;
    z=x/y;
    cout<<"div is ="<<z<<endl;
    break;
    
    default :
    cout<<"you have selected invalid option";
    

}
return 0;
}