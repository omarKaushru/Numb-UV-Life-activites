/*** The following program illustrates what occurs when protected members are inherited as public   ***/

#include<iostream>
#include<conio.h>
using namespace std;
class base{
protected:
     int a,b;
public:
       void setab(int n, int m){
            a=n;
            b=m;
            }
     };
class derived : public base{
      int c;
public:
      void setc(int n){
           c=n;
           }
      void showabc(){
           cout<<a<<' '<<b<<' '<<c<<"\n";
           }
      };
main(){
       derived ob;
       ob.setab(1,2);
       ob.setc(3);
       ob.showabc();
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
