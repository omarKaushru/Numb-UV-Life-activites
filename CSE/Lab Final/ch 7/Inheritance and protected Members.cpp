#include <iostream>
#include<conio.h>
using namespace std;
class base {
protected:
      int i, j; // protected to base, but accessible by derived
public:
       void set(int a, int b){
            i=a; 
            j=b; 
            }
       void show(){
                 cout << i << "                    " << j << "\n"; 
                 }
};
class derived : public base {
      int k;
public:
// derived may access base's i and j
      void setk(){ 
           k=i*j; 
           }
      void showk(){ 
           cout <<"\n\n"<< k << "\n"; 
           }
  };
  main(){
        derived ob;
        ob.set(2, 3); // OK, known to derived
        ob.show(); // OK, known to derived
        ob.setk();
        ob.showk();
        getch();
        }
