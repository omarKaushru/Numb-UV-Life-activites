/* defult arguments */ 
#include<iostream>
#include<conio.h>
using namespace std;
void f(int a=0, int b=0){
     cout<<"a is  :"<<a<<"\n";
     cout<<"b is  :"<<b;
     }
     main(){
            f();
            f(10);
            f(100,200);
            getch();
            }
