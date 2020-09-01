#include<iostream>
#include<conio.h>
using namespace std;
class myclass{   
      public:
              int a;
          };
      int main(){
          myclass ob1,ob2,ob3;
          ob1.a=10;
          ob2.a=99;
          ob3.a=ob1.a+ob2.a;
          cout<< ob3.a<<"\n";
          //cout<< ob2.a<<"\n";
          getch();
          }
