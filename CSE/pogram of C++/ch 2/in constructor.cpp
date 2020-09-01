#include<iostream>
#include<conio.h>
using namespace std;
class myclass{
         int a,b,c;
         public:
                myclass(int x,int y);
                void show();
                
                };
                myclass::myclass(int x,int y){
                                              cout<<"in constructor \n";
                                              a=x;
                                              b=y;
                                              }
                                              void myclass::show(){
                                                   cout<<a<<"          <.<.<.<.<.<.</////////\\\\\\\\\\\\>.>.>.>.>.>         "<<b;
                                                   }
                                                   int main(){
                                                       int a,b,c;
                                                       myclass ob(5,7);
                                                       c=a+b;
                                                       ob.show( );
                                                       getch();
                                                       }
                                                   
                
