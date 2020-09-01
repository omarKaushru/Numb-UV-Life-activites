/***  This program shows both the base class and derived clas constructors take arguments 
here they use the same arguments and the derived class pass this argument to base class
and we can pass number of argument as we want
Here we pass two argument derived class after that we pass only one arguments to the base class  ***/

#include<iostream>
#include<conio.h>
using namespace std;
class base{
      int i;
public:
    base(int n){
        cout<<"Constructing base class\n";
        i=n;         
         }
    ~base(){
        cout<<"Destructing base class\n";/* destructor will show in the time of closing program in order of reverse */
            }
    void showi(){
         cout<<"i  :"<<i<<"\n";
         }
      };
class derived : public base {
      int j;
public:
       derived(int n, int m) :base(m){                  /* Pass arguments to base class */
         cout<<"Cnstruting derived class\n";
         j=n;
         }
       ~derived(){
         cout<<"Destructing derived class\n";/* destructor will show in the time of closing program in order of reverse */
                  }
       void showj(){
            cout<<"j  :"<<j<<"\n";
            }
      };
main(){
       derived o(11,12);
       o.showi();
       o.showj();
       cout<<"\n\n\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
