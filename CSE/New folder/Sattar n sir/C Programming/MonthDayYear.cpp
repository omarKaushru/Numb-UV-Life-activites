#include<stdio.h>
#include<conio.h>

main()
      {
      int day, months, year,x;

       printf("\n ** Enter days: ");
       scanf("%d",&day);
       
       year = day/364;
       x = day%364;
       months = x/30;
       day = x-months*30;
       
       printf("\n ** Year : %d",year);
       printf("\n ** Months : %d",months);
       printf("\n ** Day : %d",day);
 
getch(); 
}

