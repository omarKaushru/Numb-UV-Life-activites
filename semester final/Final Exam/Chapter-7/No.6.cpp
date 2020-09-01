#include<iostream>
#include<conio.h>
using namespace std;
class B1{
      public:
             B1(){
                  cout<<"Constructing B1\n";
                  }
             ~B1(){
                   cout<<"Destructing B1\n";
                   }
                   };
class B2{
      public:
             B2(){
                  cout<<"Constructing B2\n";
                  }
             ~B2(){
                   cout<<"Destructing B2\n";
                   }
                   };
class B3:public B1,public B2{
      public:
             B3(){
                  cout<<"Constructing B3\n";
                  }
             ~B3(){
                   cout<<"Destructing B3";
                   }
                   };
int main(){
    B3 Ob;
    getch();
}
             
      
