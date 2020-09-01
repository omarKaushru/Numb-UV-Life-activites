#include<stdio.h>
#include<conio.h>
    main()
          {
         int i,sum,n;
       //  printf("enter value for n= ");
       //  scanf("%d",&n);
         sum=0;
         for(i=2;i<=100;i=i+2)
         {
         sum=sum+i;
          }
         printf("Sum of first 100 even :%d",sum);
             
         getch();
         }    
