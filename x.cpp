
#include<iostream>
using namespace std;
class Student
{
public:
int x;
Student(int a)//This is parameterized constructor.
{
x=a;
}
Student(Student &i) //This is copy constructor
{
x = i.x;
}
};
int main()
{
Student stu(12); //Here need to Call parameterized constructor.
Student stu2(stu);//Calling the copy constructor.
cout<<stu.x<<endl;
cout<<stu2.x;
return 0;
}
