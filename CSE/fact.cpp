#include<conio.h>
#include<iostream>
using namespace std;
class factorial{
      int r;
      public:
             long int fact(int n){
                  if (n==1)
                  cout<<1;
                  else    
                  r=n*(fact(n-1));
                  cout<<r;
                  }
                  };
                  main(){
                  factorial o;
                  o.fact(5);
                  getch();
                  }          
