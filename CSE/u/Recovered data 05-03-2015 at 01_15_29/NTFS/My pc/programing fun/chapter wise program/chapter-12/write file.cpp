#include<stdio.h>
#include<conio.h>
int main(){
       FILE *fp;
       fp=fopen("E:\\father.txt","r");
      // char fp[50];
       if(fp==NULL)
       {
       printf("File not allocated");
       return 1;
       }
       fgets("\n this is test file",fp);
       fprintf(fp,"\n this is test file");
       fclose(fp);
       getch();
       }
