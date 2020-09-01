#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip.h>
using namespace std;
int main(){
       ofstream myfile("manip.txt");
       if(!myfile){
       cout<<"File error...!";
       return 0;
       }
       myfile<<"Decimal Octal Hexadecimal"<<endl;
       for(int i=0;i<=10;i++)
       myfile<<dec<<setw(4)<<i<<setw(7)<<oct<<i<<setw(8)<<hex<<i<<endl;
       myfile.close();
       getch();
       }
