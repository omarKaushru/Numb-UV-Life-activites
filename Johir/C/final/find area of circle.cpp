#include <stdio.h>
#include <conio.h>
float area(float r);
main()
{
      float r,b;
      printf("enter value of:r");
      scanf("%f",&r);
      b=area(r);
      printf("area is %f",b);
      getch();
      }
      float area (float r)
      {
            float a;
            a=3.1416*r;
            return a;
            }
