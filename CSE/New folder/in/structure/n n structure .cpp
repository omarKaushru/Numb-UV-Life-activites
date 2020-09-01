#include<stdio.h>
#include<conio.h>
struct student {
char name[50];
int roll;
float marks;
};
main(){
struct student s[22];
int i=0,n;
printf("enter the number of student  :");
scanf("%d",&n);
for(i=0; i<n; i++)
{
printf("\n >> Enter information of students: ");
printf("\n >> Enter Name: ");
scanf("%s",s[i].name);
printf("\n >> Enter roll number: ");
scanf("%d",&s[i].roll);
printf("\n >> Enter Marks: ");
scanf("%f",&s[i].marks);
}
for(i=0; i<n; i++)
{
printf("\n >> DIsplaying student Information: ");
printf("\n Name: %s",s[i].name);
printf("\n Roll: %d",s[i].roll);
printf("\n Marks: %.2f",s[i].marks);
}
getch();
}
       
