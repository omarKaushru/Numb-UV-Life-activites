#include<conio.h>
#include<iostream>
using namespace std;
template < class x> void swapargs(x &a, x&b){
         x temp;
         temp=a;
         a=b;
         b=temp;
         }
void swapargs(int a, int b){
    cout<<"\nThis inside swapargs"<<endl;
    }
main(){
      int i=10,j=20;
      float x=10.1,y=23.3;
      char a='s',b='f';
      cout<<"Orginal i,j :"<<i<<' '<<j<<"\n";
      cout<<"Orginal x,y :"<<x<<' '<<y<<"\n";
      cout<<"Orginal a,b :"<<a<<' '<<b<<"\n";
      swapargs(i,j);
      swapargs(x,y);
      swapargs(a,b);
      cout<<"\nSwapped i,j :"<<i<<' '<<j<<"\n";
      cout<<"Swapped x,y :"<<x<<' '<<y<<"\n";
      cout<<"Swapped x,y :"<<a<<' '<<b<<"\n";
      getch();
      }
