#include<stdio.h>
#include<conio.h>
#include<math.h>
#define Lamda .001
main(){
       float t,r;
       int i,R;
       for(i=1;i<=27;i++)
       {
         printf("--");
       }
       printf("\n");
       for(t=0;t<=3000;t+=150)
       {
        r=(-Lamda*t);
        R=(int)(50*r+0.5);
        printf("|");
        for(i=1;i<=R;++i)
        {
         printf("*");
        }
        printf("#\n");
       }
        printf("\n\n\n\t\t\tCourse:  ANSI-C\n\n\t\t\tChapter-4\n\n\t\t\tchapter Title: Managing Input And Output Operations\n\n\t\t\tPage No: 106\n\n\t\t\tProgram: Case Study-2");
                       printf("\n\n\n\t\t\t************");
       getch();
      }
