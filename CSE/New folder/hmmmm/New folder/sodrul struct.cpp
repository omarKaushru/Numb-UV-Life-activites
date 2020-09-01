#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
       char name[50];
       int roll;
       float marks;
       };
       main(){
              struct student s[100];
              int i,n;
              printf("n=");
              scanf("%d",&n);
              
              for(i=0; i<n; i++)
              {
              printf("\n # Enter information of stduents\n");
              printf("\n # Enter name: ");
              scanf("%s",s[i].name);
              printf(" # Enter roll number: ");
              scanf("%d",&s[i].roll);
              printf(" # Enter marks: ");
                scanf("%f",&s[i].marks);
                }
              for(i=0; i<n ; i++)
              {
                  printf("\n # Displaying student Information \n");
                    printf("\n # Name:%s",s[i].name);
                   printf("\n # Roll:%d",s[i].roll);
                    printf("\n # Marks:%.2f",s[i].marks);
                    } 
                  //printf("\n");
                    getch();
                    }
              
