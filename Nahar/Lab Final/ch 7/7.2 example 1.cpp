/*** this program illustrates how public, private, and protected of a class can be accessed  ***/

#include<iostream>
#include<conio.h>
using namespace std;
class samp{
      int a;
protected:
      int b;
public:
      int c;
samp(int n, int m){
            a=n;
            b=m;
            }
int geta(){
    return a;
    }
int getb(){
    return b;
    }
};
main(){
       samp ob(10,20);
       ob.c=30;
       cout<<ob.geta()<<' ';
       cout<<ob.getb()<<' '<<ob.c<<"\n";
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
