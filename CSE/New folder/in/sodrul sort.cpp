#include<stdio.h>
#include<conio.h>
#include<string.h>
#define ITEMS 8
#define MAXCHAR 20
main(){
       char string[ITEMS][MAXCHAR],dummy[MAXCHAR];
       int i,j;
       printf("enter names of %d items\n", ITEMS);
       for(i=0; i<ITEMS; i++)
        scanf("%s",string[i]);
       for(i=1; i<ITEMS; i++)
       {
       for(j=1; j<=ITEMS-i; j++)
       {
       if(strcmp(string[j-1],string[j])>0)
                         {
                           strcpy(dummy,string[j-1]);                          
                           strcpy(string[j-1],string[j]);
                           strcpy(string[j],dummy);
                             }
                             }
                             }
                             printf("\nAlphabetical list\n\n");
                             for(i=0; i<ITEMS; i++)
                             printf("%s\n",string[i]);
                             getch();
                             }
