#include<stdio.h>
#include<conio.h>
struct student{
       char name[50];
        int roll;
         float marks;
          char dept;
           char grade;
       };
main(){
       int i,n;
        struct student s[50];
         //printf("enter n=");
          //scanf("%d",&n);
       for(i=1;i<=10;i++){
       printf("enter information of students");                 
        printf("\nenter name=");
         scanf("%s",&s[i].name);
          printf("\nenter roll=");
           scanf("%d",&s[i].roll);
            printf("\nenter marks=");
             scanf("%f",&s[i].marks);
              printf("\nenter dept=");
               scanf("%s",&s[i].dept);
                printf("\nenter grade=");
                 scanf("%s",&s[i].grade);
        }
        for(i=1;i<=10;i++){
         printf("\n displaying information of students");
          printf("\n nname is=%s",s[i].name);
           printf("\n roll is=%d",s[i].roll);
            printf("\n marks is=%f",s[i].marks);
             printf("\n dept is=%c",s[i].dept);
              printf("\n grade is=%c",s[i].grade);
        }
        getch();
        }
       
