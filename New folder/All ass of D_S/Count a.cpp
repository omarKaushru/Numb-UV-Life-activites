#include<stdio.h>
int main(){
char name[21];
int i,num=0;
printf("please enter your Name: ");
gets(name);
for(i=0; name[i]!='\0'; i++)
{
if(name[i]=='a' || name[i]=='A')
{
num=num+1;
}
}
printf("\nNumber of A in your name: %d",num);
return 0;
}
