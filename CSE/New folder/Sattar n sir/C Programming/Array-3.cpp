#include<stdio.h>
#include<conio.h>
main()
{
     int number[3],i;
     printf("Enter 3 values \n");
     for(i=0;i<3;i++)
     {
          scanf("%d",&number[i]);
     }
     printf("The entered values are:\n");
     for(i=0;i<3;i++)
     {
          printf("\n number[%d] = %d ",i,number[i]);
     }
getch();
}

