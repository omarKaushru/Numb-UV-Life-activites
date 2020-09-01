#include<stdio.h>
#include<conio.h>
#include<math.h>
int GCD(int m,int n);
int main(){
     int num1,num2;
     printf("Enter the two numbers whose GCD is to be found:");
     scanf("%d %d",&num1,&num2);
     printf("\nGCD of %d and %d is %d\n",num1,num2,GCD(num1,num2));
     printf("\n\n\n\t\t\tProgram:  ANSI-C\n\n\t\t\tChapter-5\n\n\t\t\tchapter Title: Decision Making And Branching\n\n\t\t\tPage No: 134\n\n\t\t\tProgram: 5.8");
                  printf("\n\n\n\t\t\t************");
     getch();
     }
     int GCD(int a,int b){
         if(b>a)
         return GCD(b,a);
         if(b=a)
         return a;
         else
         return GCD(b,a%b);
         }
