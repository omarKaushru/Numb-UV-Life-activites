#include<stdio.h>
#include<conio.h>
#include<string.h>
union books{
       char title[50];
        char author[50];
         char subject[100];
          int id;
       }u;
int main()
       union Book u;
       {
         //printf("enter n=");
          //scanf("%d",&n);
       //for(i=1;i<=10;i++){
       //printf("enter information of students");                 
        printf("\n title=");
         scanf("%s",&u.title);
          printf("\nenter author=");
           scanf("%s",&u.author);
            printf("\nenter subject=");
             scanf("%s",&u.subject);
              printf("\nenter id=");
               scanf("%d",&u.id);
                //printf("\nenter grade=");
                 //scanf("%s",&u.grade);
        }
        //for(i=1;i<=10;i++){
         //printf("\n displaying information of students");
          printf("\n title is=%s",u.title);
           printf("\n author is=%s",u.suthor);
            printf("\n subject is=%s",u.subject);
             printf("\n dept is=%d",u.id);
              //printf("\n grade is=%c",u.grade);
        }
        getch();
        }
       
