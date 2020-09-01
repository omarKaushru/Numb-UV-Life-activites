#include<stdio.h>
#include<conio.h>
int FACT(int c);
main(){
       int n,fact;
       printf("enter n");
       scanf("%d",&n);
       fact=FACT(n);
       printf("/n fact result is %d",fact);
       getch();
       }
int FACT(int c){
    if(c==1)
    return 1;
    else
    return c*FACT(c-1);
}
