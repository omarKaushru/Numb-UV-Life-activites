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
                          if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                           vow++;
                         else  if(str[i]=='b'||str[i]=='c'||str[i]=='d'||str[i]=='f'||str[i]=='g'||str[i]=='h'||str[i]=='j'||str[i]=='l'||str[i]=='k'||str[i]=='m'||str[i]=='n'||str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s'||str[i]=='t'||str[i]=='v'||str[i]=='w'||str[i]=='x'||str[i]=='z'||str[i]=='y'||str[i]=='B'||str[i]=='C'||str[i]=='D'||str[i]=='F'||str[i]=='G'||str[i]=='H'||str[i]=='K'||str[i]=='J'||str[i]=='L'||str[i]=='M'||str[i]=='N'||str[i]=='P'||str[i]=='Q'||str[i]=='R'||str[i]=='S'||str[i]=='T'||str[i]=='V'||str[i]=='W'||str[i]=='X'||str[i]=='Y'||str[i]=='Z')
                          cons++;
                          if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
                          dig++;
                            else   if(str[i]==' ')
                          spa++;
                             else  if(str[i]=='.')
                          dot++;
                          else if(str[i]==',')
                          com++;
                          i++;
                         }
                       printf("\nnumber of vowel =%d",vow);
                          printf("\nnumber of consonants =%d",cons);
                          printf("\nnumber of digits =%d",dig);
                          printf("\nnumber of space =%d",spa);
                          printf("\nnumber of dots =%d",dot);
                            printf("\nnumber of comma =%d",com);
                            printf("\n\n\n\t\t\t<<<<<<<<kaushru>>>>>>>");
                            getch();
              }
