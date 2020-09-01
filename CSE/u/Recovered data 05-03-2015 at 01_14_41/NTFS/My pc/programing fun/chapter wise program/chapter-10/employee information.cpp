#include<stdio.h>
#include<conio.h>
struct employee{
       char name[50];
       int id;
       int salary;
       int bonus;
       };
main(){
       struct employee E[50];
       int i;
       for(i=1;i<=2;i++){
       printf("\nenter information");
       printf("\n enter name");
       scanf("%s",&E[i].name);
       printf("\n enter id");
       scanf("%d",&E[i].id);
       printf("\n enter salary");
       scanf("%d",&E[i].salary);
       printf("\n enter bonus");
       scanf("%d",&E[i].bonus);
       }
       for(i=1;i<=2;i++){
       printf("\n displays information");
       printf("\n name=%s",E[i].name);
       printf("\n id=%d",E[i].id);
       printf("\n salary=%d",E[i].salary);
       printf("\n bonus=%d",E[i].bonus);
       }
       getch();
       }
