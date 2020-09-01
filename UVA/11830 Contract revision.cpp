#include<stdio.h>
#include<string.h>
int main()
{
long i,j,k,l;
char s[10000],n;
while(scanf("%c",&n)==1)
{
scanf(" ");
gets(s);
l=strlen(s);
if(n=='0' && s[0]=='0')
break;
 if(s[0]==n)
  {
  if(l==1)
   {
   printf("0\n");
   continue;
   }
  for(j=1;j<l;j++)
   {
   if(s[j]!='0' && s[j]!=n)
   break;
   }
  if(j==l)
   {
   if(s[l-1]!='0' && s[l-1]!=n)
   printf("%c",s[l-1]);
   else
   printf("0");
   }
  else
   {
   for(k=j;k<l;k++)
    {
    if(s[k]!=n)
    printf("%c",s[k]);
    }
   }
  }
 else
  {
  for(i=0;i<l;i++)
   {
   if(s[i]!=n)
   printf("%c",s[i]);
   }
  }
 printf("\n");
}
}
