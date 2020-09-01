#include <stdio.h>
#include <conio.h>
main()
     {
         float quiz[10],sum=0,average;
         int i,n;
         printf("\n how many quizes marks you want to add?:");
         scanf("%d",&n);
         for (i=0;i<n;i++)
             {
              printf("\nenter marks of quiz %d :",i);
              scanf("%f",&quiz[i]);
              sum=sum+quiz[i];
              }
               average=sum/n;
               printf("\nsum of quiz marks :%.2f",sum);
               printf("\naverage of quiz marks :.2%f",average);
               getch();
            }
