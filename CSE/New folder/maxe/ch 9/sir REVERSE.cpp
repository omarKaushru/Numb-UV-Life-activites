#include<conio.h>
#include<stdio.h>
#include<string.h>
char CHANGE(char str[]);
int main(){
    char str[102];
    printf("Enter a string to reverse:");
    gets(str);
    CHANGE(str);
    printf("Reversed string:");
    puts(str);
 getch();
}
char CHANGE(char str[]){
    int i,j;
    char p[102];
    for(i=strlen(str)-1,j=0; i+1!=0; --i,++j)
    {
        p[j]=str[i];
    }
    p[j]='\0';
    strcpy(str,p);
}
