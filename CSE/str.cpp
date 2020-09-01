#include<iostream>
#include<string.h>
#include<conio.h>
 void Area(char *k);
 void Area(char *p,char *q);
using namespace std;
    main(){
          Area("kaushru");
           Area("ami","tumi");
           getch();
           }
       void Area(char *k){
            int len=strlen(k);
    cout<<k<<"\n"<<len;
    }
    void Area(char *p,char *q){
         strcat(p,q);
         cout<<p;
         }
  
