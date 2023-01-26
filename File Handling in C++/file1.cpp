#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("my file.dat");
    getch();
    fout<<"hello";
    fout<<"my name is Hamid";
    getch();
    fout.close();
    getch();
    return 0;

}
