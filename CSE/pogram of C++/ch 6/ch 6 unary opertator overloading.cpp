#include<conio.h>
#include<iostream>
using namespace std;
class temp{
      int count;
      public:
      temp(){
             count=5;
             }
             void operator ++(){
                  count=1+count;
                  }
                  void display(){
                       cout<<"count   :"<<count;
                       }
      };
      main(){
             temp t;
             ++t;
             t.display();
             getch();
             }
