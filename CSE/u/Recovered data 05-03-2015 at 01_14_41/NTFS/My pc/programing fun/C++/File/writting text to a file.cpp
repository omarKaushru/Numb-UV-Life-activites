#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
ofstream myfile;
myfile.open("OUT.TXT");
myfile<<"Umbrella Cap BAG LAPTOP";
myfile.close();
cout<<"Writing completed";
getch();
}
