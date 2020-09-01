#include<conio.h>
#include <iostream>
using namespace std;
class myclass{
      int data;
      public:
             myclass(){
                       data=100;
                       }
                       int print1(){
                           cout<<"data is ="<<data<<"\n";
                           }
                           int print2(){
                               cout<<"my address ="<<this<<"\n";
                               cout<<this->data<<"\n";
                               }
      };
      main(){
             myclass a;
             a.print1();
             a.print2();
             getch(); 
                   }
