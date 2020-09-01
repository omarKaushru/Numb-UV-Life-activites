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
       cout<<"\n---------->Kaushru";
       getch();
       }
