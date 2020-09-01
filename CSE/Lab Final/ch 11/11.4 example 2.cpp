#include<conio.h>
#include<iostream>
using namespace std;
void Xhandler(int test){
     try{
        if(test==0)
        throw test;
        if(test==1)
        throw 'a';
        if(test==2)
        throw 123.23;
        
        }
     catch(int i){
               cout<<"Caught "<<i<<"\n";
               }
     catch(...){
               cout<<"Caught One!\n";
               }
     }
main(){
       cout<<"Start \n";
       Xhandler(1);
       Xhandler(2);
       Xhandler(0);
       cout<<"End";
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
