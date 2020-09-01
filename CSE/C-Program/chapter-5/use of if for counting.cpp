#include<stdio.h>
#include<conio.h>
main(){
       int count,i;
       float weight,height;
       count=0;
       printf("Enter weight and height for 10 boys\n");
       for(i=1;i<=2;i++)
       {
         scanf("%f %f",&weight,&height);
         if(weight<50 && height>170)
         count=count+1;
       }
       printf("Number of boys with weight<50kg\n");
       printf("and height>170cm=%d\n",count);
       printf("\n\n\n\t\t\tCourse:  ANSI-C\n\n\t\t\tChapter-5\n\n\t\t\tchapter Title: Decision Making And Branching\n\n\t\t\tPage No: 115\n\n\t\t\tProgram: 5.2");
                  printf("\n\n\n\t\t\t************");
       getch();
       }
