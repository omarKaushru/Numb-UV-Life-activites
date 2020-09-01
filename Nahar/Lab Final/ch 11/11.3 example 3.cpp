#include<conio.h>
#include<iostream>
using namespace std;
void Xtest(int test){
     cout<<"Inside Xtest, test is  :"<<test<<"\n";
     if(test)
     throw test;
     }
main(){
       cout<<"Start \n";
       try{
           cout<<"Inside try block \n";
           Xtest(0);
           Xtest(1);
           Xtest(2);
           }
       catch(int i){
                 cout<<"Caught one! Number is :"<<i<<"\n";
                 }
       cout<<"End";
       cout<<"\n---------->Kaushru"<<"\n\n\t\t*** This program is evaluted by our honourble Teacher ***";
       cout<<"\n\n\t\t\t Mr. Abdus Sattar."<<"\n\n\t\t\t Faculty member of CSE.";
       getch();
       }
