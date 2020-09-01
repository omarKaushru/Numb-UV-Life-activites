#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
ofstream myfile;
myfile.open("OUT.TXT");
myfile<<"Hello I am kaushru";
myfile.close();
getch();
}
