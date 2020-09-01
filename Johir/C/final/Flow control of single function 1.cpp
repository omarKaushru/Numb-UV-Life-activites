#include <stdio.h>
#include <conio.h>
    int Add(int a,int b);
    int sub(int a,int b);
    int multiplication(int a,int b);
    float division(int a,int b);
main()
     {
      int a,b,c,sub,multi;
      float div;
      printf("Enter value for a:");
      scanf("%d",&a);
      printf("Enter value for b:");
      scanf("%d",&b);
      c=Add(a,b);
      sub=subtraction(a,b);
      multi=ultiplication(a,b);
      div=division(a,b);
      printf("The addition is:%d",c);
       printf("The substraction is:%d",c);
       printf("The multiplication is:%d",c);
       printf("The division is:%f",c);
      
      
        getch();
            }
            int Add(int a,int b)
            {
                int z;
                z=a+b;
                return z;
            }
              int Sub(int a,int b)
            {
                int z;
                z=a-b;
                return z;  
                }
                int multi(int a,int b)
            {
                int z;
                z=a*b;
                return z;
                }
                int division(int a,int b)
            {
                int z;
                z=a/b;
                return z;
                }
