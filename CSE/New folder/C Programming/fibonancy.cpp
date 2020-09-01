#include<stdio.h>
#include<conio.h>
main()    {
          int a,b,c,n;
          printf("n=");
          scanf("%d",&n);
          a=0;
          for(b=0; b<=n; b++)
         {
                   c=a+b;
                   printf("%d",c);
                   a=b;
                  // b=c;
                   }
                   getch();  
                   }
