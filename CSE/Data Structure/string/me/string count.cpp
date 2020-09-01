#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
       char ch[]="sajal ach";
       int i=0,c,n;
       //printf("Enter string:");
       //scanf("%s",&ch);
       /*while(ch[i]!='\0')
       i++;
       //for(i=0;ch[i]!='\0';i++)
       //ch[i]++;*/
       printf("%d",i);
       //ch[i]++;
       getch();
       return 0;
       }
       size_t strlen(const char *s){
            int n=0;
            while(s[n])
            n++;
            return n;
            }
