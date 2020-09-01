///Md. Omar Kaushru
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct patient
{
long int ph,age;
char name[20],add[50],sex[30],con[50],date[22],dep[40];
}list;

int main()
{
FILE *fp;
int i,n,z,l,found;
char m;
 int pass=12345, p;
 printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\vEnter the password\n\t\t\t\t");
    scanf("%d",&p);
    if(p==pass)
    {
main:
system("cls");
printf("\n\t\t  *\v*\v*\v* Razapur medical college & Hospital \v*\v*\v*\v*");
printf("\n\n\n\t\t\t\tMAIN MENU\n\t\t.......................................\n\t\t[1] Add a new patient information\n\t\t[2] Display all patients information\n\t\t[0] Exit\n\t\t.......................................\n\t\t");
printf("\tEnter the choice:");
scanf("%d",&z);
switch(z)
{
/* *********************add ************  */
case 1:
fp=fopen("patient.txt","a");
for (  ;  ;  )  //Run forever
{
system("cls");
fflush(stdin);
printf("Enter space to stop or \nEnter the name :");
gets(list.name);
if(stricmp(list.name," ")==0) //when its become true for loop will stop
break;
fflush(stdin);
printf("Age:");
scanf("%ld",&list.age);
fflush(stdin);
printf("Sex:");
gets(list.sex);
fflush(stdin);
printf("Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("Address:");
gets(list.add);
fflush(stdin);
printf("Name of Consultant:");
gets(list.con);
fflush(stdin);
printf("Current Date:");
gets(list.date);
fflush(stdin);
printf("Enter the department name:");
gets(list.dep);
printf("\n");
fwrite(&list,sizeof(list),1,fp);
}
fclose(fp);
printf("\nFor Main menu press y: ");
scanf("%s",&m);
if (m=='y' || m=='Y')
{
goto main;
}
else
break;
/* *********************list*************************  */
case 2:
system("cls");
printf("\n\t\t--------------------------------\n\t\t\t  PATIENT LIST\n\t\t--------------------------------\n\n");
for(i=97;i<=122;i++)
{
fp=fopen("patient.txt","r");
fflush(stdin);
found=0;
while(fread(&list,sizeof(list),1,fp)==1)
{
if(list.name[0]==i || list.name[0]==i-32)
{
printf("\nName\t  : %s\nAge\t  : %ld\nSex\t  : %s\nPhone\t  : %ld\nAddress\t  : %s\nConsultant: %s\nDate\t  : %s\nDepartment: %s\n",list.name,list.age,list.sex,list.ph,list.add,list.con,list.date,list.dep);
found++;
}
}
fclose(fp);
}
printf("\nFor Main menu press y: ");
scanf("%s",&m);
if (m=='y' || m=='Y')
{
goto main;
}
else
break;
case 0:
break;
default:
printf("Invalid choice");
break;
}
}
else
{
system("cls");
printf("\n\n\n\n\n\n\n\n\n\t\t\t\tWrong password?");
}
getch();
}
