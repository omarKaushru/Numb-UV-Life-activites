#include<stdio.h>
#include<conio.h>
struct student {
       char name[50];
       int roll;
       float marks;
       };
       main(){
              struct student s;
              printf("\n Enter information of students: ");
              printf("\n Enter Name: ");
              scanf("%s",s.name);
              printf("Enter roll number: ");
              scanf("%d",&s.roll);
              printf("\n Enter Marks: ");
              scanf("%d",&s.marks);
              printf("\n DIsplaying student Information: ");
              scanf("\n Name: %s",s.name);
              printf("\n Roll: %d",s.roll);
              printf("\n Marks: %2f",s.name);
              getch();
              }
       
