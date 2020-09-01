#include<conio.h>
#include<iostream>
#include<cstring>
using namespace std;
class Address{
      char name[63],street[55],city[44],state[55],zip[44];
      public:
             void stores(char*n, char *s, char*c, char *t,char *z){
                  strcpy(name,n);
                  strcpy(street,s); 
                  strcpy(city,c);
                  strcpy(state,t);
                  strcpy(zip,z);
           }
                 void display(){
                     cout<<"Name is   :"<<name<<"\n";
                     cout<<"Street is :"<<street<<"\n";
                     cout<<"City is   :"<<city<<"\n";
                     cout<<"State is  :"<<state<<"\n";
                     cout<<"Zip is    :"<<zip;
                     }
      };
      main(){
            Address ob;
            ob.stores("borak", "mohammodpur", "dhaka","bangladesh", "1212");
            ob.display();
            getch();
             }
