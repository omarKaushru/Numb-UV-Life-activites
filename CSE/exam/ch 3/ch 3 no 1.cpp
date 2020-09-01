#include<iostream>
#include<conio.h>
using namespace std;
class Stact{
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
             Stact o1,o2;
             o1.set(10,50);
             o2=o1;
             o1.show();
             o2.show();
             getch();
             }
