/*** This program shows virtual inheritance from one base class ***/

#include<conio.h>
#include<iostream>
using namespace std;
class base{
public:
       int i;
      };
class derived1: virtual public base{
public:
       int j;
      };
class derived2: virtual public base{
public:
       int k;
      };
class derived3: virtual public base{
public:
       int i,j,k;
   int product(){
       return  i*j*k;
             }
      };
main(){
      derived3 ob;
      ob.i=2;
      ob.j=3;
      ob.k=4;
      cout<<"Product is  :"<<ob.product()<<"\n";
      cout<<"\n\n\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
      cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
      getch(); 
      }
