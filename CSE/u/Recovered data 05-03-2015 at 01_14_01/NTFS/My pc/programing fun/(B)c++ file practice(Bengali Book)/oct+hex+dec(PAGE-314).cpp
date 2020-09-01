#include<iostream>
#include<conio.h>
using namespace std;
int main(){
     int number;
     cout<<"Enter number";
     cin>>number;
     cout.setf(ios::showbase);
     ///cout.unsetf(ios::showpoint);
     cout<<"Number in Octal "<<oct<<number<<endl;
     cout<<"Number in Hexa "<<hex<<number<<endl;
     cout<<"Number in Decimal "<<dec<<number;
     getch();
     }
