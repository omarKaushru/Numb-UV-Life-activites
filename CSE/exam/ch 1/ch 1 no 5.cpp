#include<conio.h>
#include<iostream>
#include<cstring>
using namespace std;
class card{
      char title[63],author[55];
       int number;
      public:
       void stores(char*n, char *a, int r){
         strcpy(title,n);
         strcpy(author,a);
         number=r;
           }
                 void show(){
                     cout<<"book's title----->   "<<title<<"\n\n";
                     cout<<"author  name----->   "<<author<<"\n\n";
                     cout<<"number on hand----->   "<<number<<"\n\n";
                     }
      };
      main(){
            card ob;
            ob.stores("tech your self c++", " herbert schildth",44);
            ob.show();
            getch();
             }
