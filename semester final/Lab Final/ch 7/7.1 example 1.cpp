/* here is a short base class and a derived class that inherits it(as public)..*/

#include<iostream>
#include<conio.h>
using namespace std;
class base{
      int x;
public:
   void setx(int n){
        x=n;
        }
   void showx(){
        cout<<"x  :"<<x<<"\n";
        }
      };
class derived : public base{
      int y;
public:
   void sety(int n){
        y=n;
        }
   void showy(){
        cout<<"\ny  :"<<y<<"\n";
        }
      };
main(){
       derived ob;
       ob.setx(10);
       ob.sety(20);
       ob.showx();
       ob.showy();
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
