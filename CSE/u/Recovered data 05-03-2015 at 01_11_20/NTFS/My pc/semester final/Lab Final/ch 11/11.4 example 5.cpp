#include<conio.h>
#include<iostream>
using namespace std;
void xhandler(){
     try{
         throw "hellow";
         }
     catch(char *){
          cout<<"Caught char  * inside main\n";
          throw;
                }
     }
main(){
       cout<<"Start\n";
       try{
           xhandler();
           }
       catch(char *){
                  cout<<"Caught char * inside main\n";
                  }
       cout<<"End";
       getch();
       }
