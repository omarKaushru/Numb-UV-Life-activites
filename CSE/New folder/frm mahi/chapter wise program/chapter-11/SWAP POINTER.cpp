#include<stdio.h>
#include<conio.h>
int swap(int *x,int *y);
main(){
       int a,b;
       printf("a=");
       scanf("%d",&a);
       printf("b=");
       scanf("%d",&b);
       swap(&a,&b);
       printf("\na=%d\nb=%d",a,b);
       getch();
       }
int swap(int *x,int *y){
    int c;
    c=*x;
    *x=*y;
    *y=c;
}
