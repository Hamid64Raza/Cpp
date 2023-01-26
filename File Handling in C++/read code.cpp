#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("test.txt");
    char ch;
    int c=0;
    while(!fin.eof())
    {
        fin.get(ch);
        c++;
    }
    cout<<"total char="<<c;

}
