#include<iostream>
#include<conio.h>
using namespace std;
class sky{
      int a,b,c,d;
      public:
         int set(int i, int j){
                 a=i;
                 b=j;
                 }
                 int pen(){
                      cout<<a<<"   "<<b<<"\n";
                      }
                 int add(){
                 c=a+b;
                 }
                 int show(){
                     cout<<c<<" ";
                     }
                     int sub(){
                         d=a-b;
                         }
                         int print(){
                           cout<<d;
                             }
      };
      main(){
             sky ob1,ob2;
             ob1.set(10,4);
             ob2=ob1;
             ob1.pen();
             ob2.pen();
             ob1.add();
             ob2.sub();
             ob1.show();
             ob2.print();
             getch();
             }
