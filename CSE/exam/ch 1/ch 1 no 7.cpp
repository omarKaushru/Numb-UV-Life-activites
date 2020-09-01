#include<conio.h>
#include<iostream>
#include<cstring>
using namespace std;
class Student{
      char name[63],GPA[55],roll[55];
      public:
             void stores(char*n, char *a, char *r){
         strcpy(name,n);
         strcpy(GPA,a);
         strcpy(roll,r);
           }
                 void display(){
                     cout<<"name is----->   "<<name<<"\n\n";
                     cout<<"GPA  is----->   "<<GPA<<"\n\n";
                     cout<<"Roll is----->   "<<roll<<"\n\n";
                     }
      };
      main(){
            Student ob;
            ob.stores("kaushru", "A+","55");
            ob.display();
            getch();
             }
