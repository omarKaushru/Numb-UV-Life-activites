#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
main()
{
string line;
    //fstream myfile;
fstream myfile("NOTE.TXT");
int i;
//for(i=1;i<=100;i++)
if(myfile.is_open())
{
while(getline(myfile,line))
{
for(i=1;i<=100;i++)                           
cout<<line<<"\n";
myfile.close();
}
}
else
cout<<"file is not allocated\n";
getch();
}
