#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
       int coma,other,digit,dot,vowel,space,consonent,word,i;
        char s[65];
        printf("                         BRITANNIA UNIVERSITY\n                       Paduar Bazar,Bishwa road,Comilla\nHello! Sajal,\n             Please Enter a string=");
        gets(s);
        i=0;
        vowel=0;
        consonent=0;
        digit=0;
        word=0;
        space=0;
        coma=0;
        other=0;
        dot=0;
        while(s[i]!='\0')
        {
        if(s[i]=='a' or s[i]=='A' or s[i]=='e' or s[i]=='i' or s[i]=='I' or s[i]=='E' or s[i]=='o' or s[i]=='O' or s[i]=='u' or s[i]=='U')
        vowel++;
        else if(s[i]>'a' && s[i]<'e' or s[i]>'e' && s[i]<'i' or s[i]>'i' && s[i]<'o' or s[i]>'o' && s[i]<'u' or s[i]>'u')
        consonent++;
        else if(s[i]>'A' && s[i]<'E' or s[i]>'E' && s[i]<'I' or s[i]>'I' && s[i]<'O' or s[i]>'O' && s[i]<'U' or s[i]>'U')
        consonent++;
        else if(s[i]>='0'&& s[i]<='9')
        digit++;
        else if(s[i]==' ')
        {
        word++;
        space++;
        }
        else if(s[i]==',')
        coma++;
        else if(s[i]='.')
        dot++;
        else 
        other++;
        i++;
        }
        word++;
        printf("\n ********number of vowel %d",vowel);
        printf("\n ********number of consonent %d",consonent);
        printf("\n ********number of digit %d",digit);
        printf("\n ********number of word %d",word);
        printf("\n ********number of other characters %d",other);
        printf("\n ********number of coma %d",coma);
        printf("\n ********number of space %d",space);
        printf("\n ********number of dot %d",dot);
        printf("\n\n\n\n\n\n\n\n\n\n\n                              Created By SAJAL ACHARJEE JOY");
        getch();
        }
