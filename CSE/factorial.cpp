#include<stdio.h>
#include<conio.h>
int FACT(int c);
main(){
       int n,fact;
       printf("Enter n :");
       scanf("%d",&n);
       fact=FACT(n);
       printf("\nfactorial is %d",fact);
       getch();
       }
int FACT(int c){
    if(c==0)
    return 1;
    else
    return c*FACT(c-1);
}
