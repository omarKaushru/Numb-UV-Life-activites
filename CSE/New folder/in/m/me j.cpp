#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
       char str[99];
       int vow=0,cons=0,dig=0,com=0,dot=0,spa=0,i=0;
       printf(" Please enter a line: ");
       gets(str);
       while(str[i]!='\0')
       {
                          if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='.'||str[i]==','||str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]==' ')
                          vow++;
                          else
                          cons++;
                          else
                          dig++;
                          else
                          spa++;
                          else
                          dot++;
                          else
                          com++;
                          i++;
                          }
                          printf("\nnumber of vowel =%d",vow);
                          printf("\nnumber of consonants =%d",cons);
                          printf("\nnumber of digits =%d",dig);
                          printf("\nnumber of space =%d",spa);
                          printf("\nnumber of dots =%d",dot);
                            printf("\nnumber of comma =%d",com);
                            getch();
              }
