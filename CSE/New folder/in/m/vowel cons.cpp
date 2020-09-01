#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
       char str[99];
       int vow=0,cons=0,i=0;
       printf(" Please enter a line: ");
       gets(str);
       while(str[i]!='\0')
       {
                          if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                          vow++;
                          else
                          cons++;
                         
                          i++;
                          }
                          printf("\nnumber of vowel =%d",vow);
                          printf("\nnumber of consonants =%d",cons);
                      
                            getch();
              }
