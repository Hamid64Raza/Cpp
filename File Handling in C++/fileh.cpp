#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name;
    int roll;
    ofstream fout("stdent.txt",ios::app);
    cout<<"Enter name"<<endl;
    cin>>name;
    fout<<cin;
    cout<<"Enter roll"<<endl;
    cin>>roll;
    fout<<cin;
    fout.close();
    return 0;
}

