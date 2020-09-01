#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<conio.h>
main()
{
FILE *fp1,*fp2;
char a;
fp1=fopen("program.txt","r");
if(fp1==NULL)
    {
    puts("cannot open this file");
    exit(1);
    }

fp2=fopen("Program2.txt","w+");
if(fp2==NULL)
    {
    puts("Not able to open this file");
    fclose(fp1);
    exit(1);
    }

   do
    {
    a=fgetc(fp1);
    fputc(a,fp2);
    }while(a!=EOF);

fclose(fp1);
fclose(fp2);
getch();
}
