#include<iostream>
#include<conio.h>
using namespace std;
main(){
    float m,i,j;
    cout<<"i=";
    cin>>i;
    cout<<"j=";
    cin>>j;
    try{
        if((i-j)!=0){
        m=i/(i-j);
        cout<<"result is"<<m;
        }
        else
        throw (i-j);
        }
    catch(float x){
              cout<<"Mathe error";
              }
    getch();
}
