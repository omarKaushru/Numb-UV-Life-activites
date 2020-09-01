#include <stdio.h>
#include <conio.h>
int factorial(int i);
      main()
           {
            int i=8,f;
            f=factorial(i);
            printf("factorial is %d",f);
            getch();
            }
            int factorial(int i)
            {
            if(i<=1)
              {
              return 1;
               }
               else
               {
               return i*factorial(i-1);
                }
               printf("factorial of %d is %d\n",i,factorial(i));
                 }
