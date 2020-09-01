#include<conio.h>
#include<iostream>
using namespace std;
class num{
public:
   int i;
   num(int x){
           i=x;
           }
   virtual void shownum(){
           cout<<i<<"\n";
           }
      };
class outhex : public num{
public:
   outhex(int n):num(n){}
   void shownum(){
        cout<<hex<<i<<"\n";
        }
      };
class outoct : public num{
public:
   outoct(int n):num(n){}
   void shownum(){
        cout<<oct<<i<<"\n";
        }
   };
main(){
       outoct o(12);
       outhex h(22);
       o.shownum();
       h.shownum();
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
