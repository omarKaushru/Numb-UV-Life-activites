#include<iostream>
#include<conio.h>
using namespace std;
class samp{
      private:
      int a;
      public:
            void insert(int x){
                        a=x;
                        }
             int show(){
                 cout<<a;
                 }
                 };
                        
   int   main(){
             samp ob;
             ob.insert(9);
             ob.show();
             getch();
             }
