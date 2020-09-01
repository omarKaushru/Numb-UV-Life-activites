   /*** This program shows that CONSTRUCTOR DESTRUCTOR calls when derived class inherits from multiple base class  ***/

#include<conio.h>
#include<iostream>
using namespace std;
class B1{
      int a;
public:
   B1(){
      cout<<"Constructing B1\n";
      }
   ~B1(){
      cout<<"Destructing B1\n";
      }
      };
class B2{
      int b;
public:
    B2(){
      cout<<"Constructing B2\n";
      }
   ~B2(){
      cout<<"Destructing B2\n";
      }
      };
class D : public B1, public B2{
      int c;
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
       cout<<"\n\n\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
