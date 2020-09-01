#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    string line;
    
    ifstream COPYfile;
    ifstream myfile("OUT.TXT");
    COPYfile.open("COPY.TXT");
    while(getline(myfile,line))
    {
    strcpy("OUT.TXT","COPY.TXT");
    }
myfile.close();
COPYfile.close();

    getch();
}
