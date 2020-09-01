#include<stdio.h>
#include<conio.h>
int AREA(int x);
main(){
       int area,r;
        printf("Enter radiuus  :");
       scanf("%d",&r);
       area=AREA(r);
        printf("\nArea  is      :%d",area);
        getch();
        }
int AREA(int x){
    int m;
    m=3.14*x*x;
    return m;
}
