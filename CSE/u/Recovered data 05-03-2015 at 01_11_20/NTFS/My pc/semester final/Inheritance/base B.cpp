#include<iostream>
#include<conio.h>
using namespace std;
class B{
public:
   void  B1(){
        cout<<"B1 is the member of base\n";         
         }
   void  B2(){
        cout<<"B2 is the member of base\n";
            }
      };
class D : public B {
public:
      void  D1(){
         cout<<"D1 is the member of derived class\n";
                }
      void D2(){
         cout<<"D2 is the member of derived class\n";
                  }
      };
main(){
       D o;
       o.D1();
       o.B1();
       o.B2();
       o.D2();
       cout<<"\n........Kaushru";
       getch();
       }
