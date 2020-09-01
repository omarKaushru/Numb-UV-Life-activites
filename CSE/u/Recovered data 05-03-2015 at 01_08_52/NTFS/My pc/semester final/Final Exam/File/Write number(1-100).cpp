#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile;
    myfile.open("NOTE.TXT");
    int i,a;
    for(i=1;i<=100;i++)
    {
    a=i;
    myfile<<a<<"\n";
}
myfile.close();

    getch();
}
