#include<conio.h>
#include<iostream>
using namespace std;
void Xhandler(int test){
     try{
        if(test)
        throw test;
        }
     catch(int i){
               cout<<"Caught One! Ex. :"<<i<<"\n";
               }
     }
main(){
       cout<<"Start \n";
       Xhandler(1);
       Xhandler(2);
       Xhandler(0);
       Xhandler(3);
       cout<<"End";
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
