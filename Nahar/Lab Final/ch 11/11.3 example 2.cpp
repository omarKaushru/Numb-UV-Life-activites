#include<conio.h>
#include<iostream>
using namespace std;
main(){
       cout<<"Start \n";
       try{
           cout<<"Inside try block \n";
           throw 10;
           cout<<"This will not execute";
           }
       catch(double i){
                 cout<<"Caught one! Number is :"<<i<<"\n";
                 }
       cout<<"End";
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
