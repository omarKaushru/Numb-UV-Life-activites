#include <stdio.h>
#include <conio.h>
main(){
int a,b,c;
printf("Enter an integer number for a:");
scanf("%d",&a);
printf("\nEnter an integer number for b:");
scanf("%d",&b);
printf("\nEnter an integer number for c:");
scanf("%d",&c);
if(a>b && a>c){
printf("\nAmong this three number big is%d",a);
}
else if(b>a && b>c){
printf("\nAmong this three number big is%d",b);
}
else if(c>a && c>b){
printf("\nAmong this three number big is%d",c);
}
getch();
}
