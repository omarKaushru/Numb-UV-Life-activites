/*** This program shows that derived claas that inherits a class derived from another class  ***/

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
class D1 : public B1{
      int b;
      public:
        D1(int x, int y) :B1(y){                       /* pass argument to B1 */
               b=x;
               }
        int getb(){
            return b;
            }
      };
class D2 : public D1{
      int c;
      public:
        D2(int x, int y, int z) : D1(y,z){               /* pass argument to D1 */
                   c=x;
                   }
        void show(){
             cout<<geta()<<' '<<getb()<<' '<<"\n\n"<<c<<"\n\n";
             }
      };
main(){
       D2 o(11,22,33);
       o.show();
       cout<<o.geta()<<' '<<o.getb()<<' '<<"\n";
       cout<<"\n\n\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
