#include<iostream>
#include<conio.h>
using namespace std;
class myclass{
      private:
              int a;
      public:
             void set(int num);
             int get();
             };
      void myclass::set(int num){
           a=num;
           }
      int myclass::get(){
          return a;
          }
      int main(){
          myclass ob1,ob2;
          ob1.set(10);
          ob2.set(99);
          cout<< ob1.get()<<"\n";
          cout<< ob2.get()<<"\n";
          getch();
          }
