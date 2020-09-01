/**** public member base class become private members of a derived class when inherited using private specifire ****/ 

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
class derived : private base{
      int y;
public:
   void setxy(int n, int m){
        setx(n);
        y=m;
        }
   void showxy(){
        showx();
        cout<<"\ny  :"<<y<<"\n";
        }
      };
main(){
       derived ob;
       ob.setxy(10,20);
       ob.showxy();
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
