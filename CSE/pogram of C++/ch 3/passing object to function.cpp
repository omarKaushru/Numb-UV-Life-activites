#include<iostream>
#include<conio.h>
using namespace std;
class rational{
      public:
    int  num1,num2;
             int get(){
          cout<<"first number    :";
          cin>>num1;
          cout<<"second number   :";
          cin>>num2;
                 }
                 int print(){
                     cout<<num1<<"\n"<<num2;
                     }
                     int mult(rational r1,rational r2){
                         num1=r1.num1*r2.num1;
                         num2=r1.num2*r2.num2;
                         }
                 };
                 main(){
                        rational r1,r2,r3;
                        r1.get();
                        r2.get();
                        r3.mult(r1,r2);
                        r3.print();
                        getch();
                        }
