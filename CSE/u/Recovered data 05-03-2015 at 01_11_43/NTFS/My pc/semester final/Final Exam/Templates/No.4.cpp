#include<iostream>
#include<conio.h>
using namespace std;
template<class x>
int swapargs(x &a,x &b){
     x temp;
     temp=a;
     a=b;
     b=temp;
     return a,b;
     //cout<<a<<b;
     }
int main(){
    int i=10;int j=20;
    cout<<swapargs(i,j);
    //cout<<i<<j;
    getch();
}
