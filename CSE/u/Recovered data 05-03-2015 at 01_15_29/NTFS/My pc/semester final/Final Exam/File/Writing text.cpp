#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile;
    myfile.open("OUT.TXT");
    myfile<<"My mother is best mother in world";
myfile.close();

    getch();
}
