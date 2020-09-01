#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
      {
      float  a,b,c,x,y;
       
      printf("Enter a value for a=");
      scanf("%f",&a);
      printf("Enter a value for b=");
      scanf("%f",&b);
      printf("Enter a value for c=");
      scanf("%f",&c);
      
      x=(-b-sqrt(b*b)-(4*a*c))/(2*a);
      y=(-b+sqrt(b*b)-(4*a*c))/(2*a);
      
      printf("the result of x is:%f",x);
      printf("\nthe result of y is:%f",y);
      
      getch();
      }
      
      
