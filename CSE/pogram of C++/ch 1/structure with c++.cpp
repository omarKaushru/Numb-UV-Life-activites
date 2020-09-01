#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class myclass{
      private:
              int a;
      public:
             void set(int num){
                  a=num;
                  }
             int get(){
                  //getch();
                  return a;
                  }
      };
main(){
           myclass ob1,ob2;
           ob1.set(10);
           ob2.set(20);
           cout<<ob1.get();
           cout<<"\n";
           cout<<ob2.get();
           getch();
           }
