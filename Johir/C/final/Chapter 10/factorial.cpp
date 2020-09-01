#include <stdio.h>
#include <conio.h>
 main()
     {
      int num,c,r;
      printf("enter the num");
      scanf("%d",&num);
       for(c=1;c<=num;c++)
         {
          for(r=1;r<=num-c;r++)
            {
            printf("  ");
            }
          for(r=1;r<=2*c-1;r++)
          {
            printf(" *");
            }
            printf("\n");
               }
         for(c=num;c>=1;c--)
            {
           for(r=1;r<=num-c;r++)
             {
              printf("  ");
              }
            for(r=1;r<=2*c-1;r++)
            {
             printf(" *");
                }
                printf("\n");
               }
                getch();
                }
