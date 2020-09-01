#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile;
    myfile.open("example.txt");
    myfile<<"writting this to a file";
    myfile.close();
    getch();
}
