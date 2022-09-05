// Example of Switch case..
#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter any number of day";
    cin>>day;
    switch(day)
    {
    case 1:
    cout<<"monday";
    break;
    case 2:
    cout<<"tuesday";
    break;
    case 3:
    cout<<"wednesday";
    break;
    case 4:
    cout<<"thrusday";
    break;
    case 5:
    cout<<"friday";
    break;
    case 6:
    cout<<"satarday";
    break;
    case 7:
    cout<<"sunday";
    break;

     default: 
         cout<<"invalid day";
    
    
    }
    
return 0;
}