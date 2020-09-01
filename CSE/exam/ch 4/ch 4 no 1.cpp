#include<iostream>
#include<conio.h>
using namespace std;
main(){
       long *p;
       float *i;
       char *j[50];
       p=new long;
       i=new float;
       j[50]=new char;
       *p=1000;
       *i=5.1;
       *j="kaushru";
       cout<<*p<<"\n"<<*i<<"\n"<<*j;
       delete p,i,j[50];
       getch();
      }       
       
       
