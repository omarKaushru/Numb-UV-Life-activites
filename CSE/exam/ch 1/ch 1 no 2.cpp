#include<conio.h>
#include<iostream>
#include<cstring>
using namespace std;
class Sky{
      char name[63],address[55];
      public:
             void stores(char*n, char *a){
         strcpy(name,n);
         strcpy(address,a);
           }
                 void display(){
                     cout<<"name is  "<<name<<"\n\n";
                     cout<<"address is       "<<address;
                     }
      };
      main(){
            Sky ob;
            ob.stores("kaushru", "lakshum comilla");
            ob.display();
            getch();
             }
