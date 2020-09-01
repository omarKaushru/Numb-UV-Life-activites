#include<stdio.h>
#include<conio.h>
int AREA(int x);
main(){
       int area,r;
        printf("enter r");
       scanf("%d",&r);
       area=AREA(r);
        printf("\n area is=%d",area);
        getch();
        }
int AREA(int x){
    int m;
    m=3.14*x*x;
    return m;
}
