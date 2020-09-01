#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>
struct contact
{
long ph;
char name[20],add[20],email[30];
}list;
 
char query[20],name[20];
FILE *fp, *ft;
int i,n,z,l,found;
 
main()
{
 
main:
system("cls");
printf("\n\t **** Welcome to Comilla Medical College Official Software ****");
printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Add a new patient information\n\t\t[2] List of all patients\n\t\t[3] Search for any patient\n\t\t[4] Edit a patient information\n\t\t[5] Delete information of any patient\n\t\t[0] Exit\n\t\t=================\n\t\t");
printf("Enter the choice:");
scanf("%d",&z); 
switch(z)
{
case 0:
printf("\n\n\t\tAre you sure, you want to exit?");
break;
/* *********************add new pattent name************  */
case 1:
     system("cls");
     printf("\n\t **** Please Choose The Department ****");
printf("\n\n\t\t\t\n\t\tNames of department \n\t\t[1] Madicine\n\t\t[2] Orthopedics \n\t\t[3] Gayney\n\t\t[4] Heart\n\t\t[5] Emargency\n\t\t[0] Exit\n\t\t=================\n\t\t");
printf("Enter the choice:");
scanf("%d",&z); 
switch(z)
{
   case 1:
        system("cls");
fp=fopen("contact.txt","a");
for (;;){
    fflush(stdin);
printf("To exit enter blank space in the name input\nName (Use identical):");
scanf("%[^\n]",&list.name);
if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)//can't
break;
fflush(stdin);
printf("Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("address:");
scanf("%[^\n]",&list.add);
fflush(stdin);
printf("email address:");
gets(list.email);
printf("\n");
fwrite(&list,sizeof(list),1,fp);
printf("\n Successfully Added \n ");
}
fclose(fp);
break;
case 2:
     system("cls");
fp=fopen("contact.txt","a");
for (;;){
    fflush(stdin);
printf("To exit enter blank space in the name input\nName (Use identical):");
scanf("%[^\n]",&list.name);
if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)//can't
break;
fflush(stdin);
printf("Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("address:");
scanf("%[^\n]",&list.add);
fflush(stdin);
printf("email address:");
gets(list.email);
printf("\n");
fwrite(&list,sizeof(list),1,fp);
printf("\n Successfully Added \n ");
}
fclose(fp);
break;
case 3:
     system("cls");
fp=fopen("contact.txt","a");
for (;;){
    fflush(stdin);
printf("To exit enter blank space in the name input\nName (Use identical):");
scanf("%[^\n]",&list.name);
if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)//can't
break;
fflush(stdin);
printf("Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("address:");
scanf("%[^\n]",&list.add);
fflush(stdin);
printf("email address:");
gets(list.email);
printf("\n");
fwrite(&list,sizeof(list),1,fp);
printf("\n Successfully Added \n ");
}
fclose(fp);
break;
case 4:
     system("cls");
fp=fopen("contact.txt","a");
for (;;){
    fflush(stdin);
printf("To exit enter blank space in the name input\nName (Use identical):");
scanf("%[^\n]",&list.name);
if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)//can't
break;
fflush(stdin);
printf("Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("address:");
scanf("%[^\n]",&list.add);
fflush(stdin);
printf("email address:");
gets(list.email);
printf("\n");
fwrite(&list,sizeof(list),1,fp);
printf("\n Successfully Added \n ");
}
fclose(fp);
break;
case 5:
     system("cls");
fp=fopen("contact.txt","a");
for (;;){
    fflush(stdin);
printf("To exit enter blank space in the name input\nName (Use identical):");
scanf("%[^\n]",&list.name);
if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)//can't
break;
fflush(stdin);
printf("Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("address:");
scanf("%[^\n]",&list.add);
fflush(stdin);
printf("email address:");
gets(list.email);
printf("\n");
fwrite(&list,sizeof(list),1,fp);
printf("\n Successfully Added \n ");
}
fclose(fp);
break;
case 0:
printf("\n\n\t\tAre you sure, you want to exit?");
break;
              
        // ............
/*system("cls");
fp=fopen("contact.txt","a");
for (;;){
    fflush(stdin);
printf("To exit enter blank space in the name input\nName (Use identical):");
scanf("%[^\n]",&list.name);
if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)//can't
break;
fflush(stdin);
printf("Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("address:");
scanf("%[^\n]",&list.add);
fflush(stdin);
printf("email address:");
gets(list.email);
printf("\n");
fwrite(&list,sizeof(list),1,fp);
printf("\n Successfully Added \n ");
}
fclose(fp);
break;
 */
}
/* *********************list of contacts*************************  */
case 2:
system("cls");
printf("\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n\nName\t\tPhone No\t    Address\t\tE-mail ad.\n=================================================================\n\n");
 
for(i=97;i<=122;i=i+1)
{
fp=fopen("contact.txt","r");
fflush(stdin);
found=0;//can't
while(fread(&list,sizeof(list),1,fp)==1)
{
if(list.name[0]==i || list.name[0]==i-32)
{
printf("\nName\t: %s\nPhone\t: %ld\nAddress\t: %s\nEmail\t: %s\n",list.name, list.ph,list.add,list.email);
found++;
}
}
if(found!=0)
{printf("=========================================================== [%c]-(%d)\n\n",i-32,found);
getch();}
fclose(fp);
}
break;
 
 
 
/* *******************search contacts**********************  */
case 3:
system("cls");
do
{
found=0;
printf("\n\n\t..::CONTACT SEARCH\n\t===========================\n\t..::Name of contact to search: ");
fflush(stdin);
scanf("%[^\n]",&query);
l=strlen(query);
fp=fopen("contact.dll","r");
 
system("cls");
printf("\n\n..::Search result for '%s' \n===================================================\n",query);
while(fread(&list,sizeof(list),1,fp)==1)
{
for(i=0;i<=l;i++)
name[i]=list.name[i];
name[l]='\0';
if(stricmp(name,query)==0)
{
printf("\n..::Name\t: %s\n..::Phone\t: %ld\n..::Address\t: %s\n..::Email\t: %s\n",list.name,list.ph,list.add,list.email);
found++;
if (found%4==0)
{
printf("..::Press any key to continue...");
getch();
}
}
}
 
if(found==0)
printf("\n..::No match found!");
else
printf("\n..::%d match(s) found!",found);
fclose(fp);
printf("\n ..::Try again?\n\n\t[1] Yes\t\t[0] No\n\t");
scanf("%d",&z);
}while(z==1);
break;
 
 
/* *********************edit contacts************************/
case 4:
system("cls");
fp=fopen("contact.txt","r");
ft=fopen("temp.dat","w");
fflush(stdin);
printf("..::Edit contact\n===============================\n\n\t..::Enter the name of contact to edit:");
scanf("%[^\n]",name);
while(fread(&list,sizeof(list),1,fp)==1)
{
if(stricmp(name,list.name)!=0)
fwrite(&list,sizeof(list),1,ft);
}
fflush(stdin);
printf("\n\n..::Editing '%s'\n\n",name);
printf("..::Name(Use identical):");
scanf("%[^\n]",&list.name);
fflush(stdin);
printf("..::Phone:");
scanf("%ld",&list.ph);
fflush(stdin);
printf("..::address:");
scanf("%[^\n]",&list.add);
fflush(stdin);
printf("..::email address:");
gets(list.email);
printf("\n");
fwrite(&list,sizeof(list),1,ft);
fclose(fp);
fclose(ft);
remove("contact.txt");
rename("temp.dat","contact.dll");
break;
 
 
/* ********************delete contacts**********************/
case 5:
system("cls");
fflush(stdin);
printf("\n\n\t..::DELETE A CONTACT\n\t==========================\n\t..::Enter the name of contact to delete:");
scanf("%[^\n]",&name);
fp=fopen("contact.txt","r");
ft=fopen("temp.dat","w");
while(fread(&list,sizeof(list),1,fp)!=0)
if (stricmp(name,list.name)!=0)
fwrite(&list,sizeof(list),1,ft);
fclose(fp);
fclose(ft);
remove("contact.txt");
rename("temp.dat","contact.txt");
break;
default:
printf("Invalid choice");
break;
}
printf("\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");
scanf("%d",&z);
switch (z)
{
case 1:
goto main;
case 0:
break;
default:
printf("Invalid choice");
break;
}
getch();
}
