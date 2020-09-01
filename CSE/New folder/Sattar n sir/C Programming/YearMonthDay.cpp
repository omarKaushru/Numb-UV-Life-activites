#include<stdio.h>
#include<conio.h>
int main(){
  int day,year, month,x;
  printf("\n Enter Days: ");
  scanf("%d",&day);

  year = day/365;
  x = day%365;
  month = x/30;
  day = x-month*30;
  
  printf("\n Sum of digits of number:  %d",year);
  printf("\n Sum of digits of number:  %d",month);
  printf("\n Sum of digits of number:  %d",day);
  getch();
  return 0;
}
