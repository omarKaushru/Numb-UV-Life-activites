#include <iostream>
#include <conio.h>
using namespace std;

class Base{
   int i,j;
public:
   void set(int a, int b)
   { 
        i=a;    j=b; 
   }
   
   void show() 
   { 
       cout<<"\b i is:"<<i<<"\n j is:"<<j;
   }
};

class Derived : public Base {  
      int k;
      public:
      Derived(int x)
      {
          k=x;            
      }
      
      void display() 
      { 
       cout<<"\n k is: "<<k;
       }
          
      };

int main() {
   Derived ob(5);
   ob.set(10,20);
   ob.show();
   ob.display(); 
   getch();
   return 0;
}
