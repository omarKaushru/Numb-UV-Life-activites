#include<iostream>
#include<conio.h>
using namespace std;
class myclass{
      int a,b;
      public:
             int set(int x, int y){
                  a=x;
                  b=y;
                  }
                  int show(){
                      cout<<a<<" "<<b<<"\n";
                      }
      };
      main(){
             myclass ob1,ob2;
             ob1.set(10,5);
             ob2=ob1;
             ob1.show();
             ob2.show();
             getch();
             }
