/***  This program shows how to pass an arguments to an derrived class constructor  ***/

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
      int j;
public:
       derived(int n){
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
       derived o(11);
       o.showj();
       cout<<"\n\n\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
