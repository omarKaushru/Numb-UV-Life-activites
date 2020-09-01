   /*** This program shows that derrive class directly inherits base class  ***/

#include<conio.h>
#include<iostream>
using namespace std;
class B1{
      int a;
public:
   B1(int x){
          a=x;
          }
   int geta(){
       return a;
       }
      };
class B2{
      int b;
public:
    B2(int x){
           b=x;
           }
    int getb(){
        return b;
        }
      };
class D : public B1, public B2{
      int c;
      public:
      D(int x, int y, int z):B1(z),B2(y){
            c=x;
            }
      void show(){
           cout<<geta()<<' '<<getb()<<' ';
           cout<<c<<"\n";
           }
      };
main(){
       D ob(7,8,9);
       ob.show();
       cout<<"\n\n\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
