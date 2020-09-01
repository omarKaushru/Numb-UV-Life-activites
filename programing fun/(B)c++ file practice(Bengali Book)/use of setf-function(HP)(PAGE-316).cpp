#include<iostream>
#include<conio.h>
using namespace std;
int main(){
     double number;
     cout<<"Enter number";
     cin>>number;
     cout<<"default output of input number is :"<<number<<endl;
     cout.setf(ios::showpoint|ios::showpos);
     cout<<"After setting showpoint and showpos :"<<number<<endl;
     cout.unsetf(ios::showpoint);
     cout<<"After clearing showpoint :"<<number<<endl;
     cout.setf(ios::hex|ios::showbase);
     cout<<"Number in Hexa "<<number<<endl;
     //cout<<"Number in Octal "<<oct<<number<<endl;
     //cout<<"Number in Decimal "<<dec<<number;
     getch();
     }
