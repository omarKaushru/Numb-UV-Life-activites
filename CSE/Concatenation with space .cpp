#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
char  str1[11],str2[11],s[11];
printf("Enter a string :");
gets(str1);
printf("\nEnter another string  :");
gets(str2);
printf("\nEnter a Space  :");
gets(s);
strcat(str1,s);
strcat(str1,str2);
printf("\nAfter contenation:%s",str1);
getch();
} 
