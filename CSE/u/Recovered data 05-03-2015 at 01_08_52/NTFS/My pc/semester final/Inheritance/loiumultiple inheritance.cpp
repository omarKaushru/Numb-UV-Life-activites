   /*** This program shows that CONSTRUCTOR DESTRUCTOR calls when derived class inherits from multiple base class  ***/

#include<conio.h>
#include<iostream>
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
class D : public B1, public B2{
      public:
    D(){
      cout<<"Constructing D\n";
      }
   ~D(){
      cout<<"Destructing D\n";
      }
      };
main(){
       D ob;
       getch();
       }
