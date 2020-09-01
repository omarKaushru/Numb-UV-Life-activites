#include <stdio.h>
#include <conio.h>
struct student{
char name[50];
int roll;
float marks;
};
main(){
struct student s[10];
int i;
printf("\n\n Enter information of students:\n");
for(i=1;i<=10;++i)
{
printf("\n Enter name: ");
scanf("%s",s[i].name);
printf("\n Enter roll number: ");
scanf("%d",&s[i].roll);
printf("\n Enter marks: ");
scanf("%f",&s[i].marks);
printf("\n\n");
}
for(i=1;i<=10;++i)
{
printf("\n Student Name: %s\n",s[i].name);
printf("\n Student Roll: %d\n",s[i].roll);
printf("\n Student Marks: %.2f\n",s[i].marks);
printf("\n\n");
}
getch();
}
