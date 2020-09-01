#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    string line;
    char count[80];
    int i;
    ifstream myfile("OUT.TXT");
    while(getline(myfile,line))
    {
    for(i=0;line[i]==' ';i++)
    if(line[i]=' ')//=' ';i++)
    if(line[i]!='\0')
    count[i]=line[i]; 
    i=i=1;
}
cout<<i<<"\n";
myfile.close();

    getch();
}
