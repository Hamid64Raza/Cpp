#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("myfile.dat");
    fin>>ch;
    while(!fin.eof())
    {
        cout<<ch;
        fin>>ch;
    }

    fin.close();
    getch();
}
