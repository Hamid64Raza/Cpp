#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("test.txt");
    fout<<"hello i am hamid raza";
    fout.close();


}
