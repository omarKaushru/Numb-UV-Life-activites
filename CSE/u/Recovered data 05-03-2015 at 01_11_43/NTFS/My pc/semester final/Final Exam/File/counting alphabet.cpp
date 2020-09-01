#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    string line;
    char count[80];
    int i,alphabet;
    ifstream myfile("OUT.TXT");
    while(getline(myfile,line))
    {
    for(i=0;line[i]!='\0';i++)
    if(line[i]!=' ')
    alphabet++;
    cout<<"Number of alphabet is:"<<alphabet<<"\n";
    }
myfile.close();

    getch();
}
