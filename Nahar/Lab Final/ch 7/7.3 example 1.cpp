/***  this is a simple program which inheritance constructor and destructor  ***/ 
#include<iostream>
#include<conio.h>
using namespace std;
class base{
public:
    base(){
        cout<<"Constructing base class\n";         
         }
    ~base(){
        cout<<"Destructing base class\n";/* destructor will show in the time of closing program in order of reverse */
            }
      };
class derived : public base {
public:
       derived(){
         cout<<"Cnstruting derived class\n";
                }
       ~derived(){
         cout<<"Destructing derived class\n";/* destructor will show in the time of closing program in order of reverse */
                  }
      };
main(){
       derived o;
       cout<<"\n\n\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
