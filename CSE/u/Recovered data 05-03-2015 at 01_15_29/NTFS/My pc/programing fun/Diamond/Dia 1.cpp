#include<stdio.h>
#include<conio.h>
main(){
int i,j,k;
for(i=1; i<=18; i=i+2)
{
for(k=i; k<65; k=k+2){
printf(",");
}
for(j=1; j<=i; j++){
printf("*");
}
printf("\n");
}
///////
for(i=18; i!=0; i=i-2)
{
for(k=65; k<=i; k=k+2){
printf(",");
}
for(j=1; j<=i; j++){
printf("*");
}
printf("\n");
}
getch();
}
