#include<conio.h>
#include<iostream>
using namespace std;
template < class x> void swapargs(x &a, x&b){
         x temp;
         temp=a;
         a=b;
         b=temp;
         }
main(){
      int i=10,j=20;
      float x=10.1,y=23.3;
      cout<<"Orginal i,j :"<<i<<' '<<j<<"\n";
      cout<<"Orginal x,y :"<<x<<' '<<y<<"\n";
      swapargs(i,j);
      swapargs(x,y);
      cout<<"\nSwapped i,j :"<<i<<' '<<j<<"\n";
      cout<<"Swapped x,y :"<<x<<' '<<y<<"\n";
      cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
      cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
      getch();
      }
