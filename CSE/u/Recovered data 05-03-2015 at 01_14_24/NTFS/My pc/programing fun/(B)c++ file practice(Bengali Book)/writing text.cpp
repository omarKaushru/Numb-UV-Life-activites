#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
main(){
       ofstream myfile;//("sample.txt");
       myfile.open("sample.txt");
       myfile<<"Name :Sajal Acharjee"<<endl;
       myfile<<"Dept :cse"<<endl<<"Id :09"<<endl;
       //myfile.close();
       getch();
       }
