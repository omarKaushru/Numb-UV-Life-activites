#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
     {
         int i;
         int quiz(5);
         for (i=0;i<5;i++)
             {
              printf("enter marks of quiz[%d]",i);
              scanf("%d",&quiz);
              }
              for(i=0;i<5;i++)
              {
                              printf("\nvalue of quiz is %d\n",i,quiz);
                              }
                              getch();
            }
