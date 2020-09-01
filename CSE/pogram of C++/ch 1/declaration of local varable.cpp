#include<iostream>
//#include<conio.h>
using namespace std;
int main(){
    int i;
    cout<<"enter number:";
    cin>>i;
    int j,fact=1;
    for(j=i;j<=5;j--)fact=fact*j;
    cout<<"factorial is"<<fact;
    return 0;
    //getch();
}

