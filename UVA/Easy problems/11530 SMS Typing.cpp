///Accepted
#include<stdio.h>
#include<string.h>
int main()
{
int t,i,j,c,l;
char ch,s[120];
scanf("%d",&t);
i=1;
while(i<=t)
 {
 gets(s);
 l=strlen(s);
 if(l==0)
 continue;
 c=0;
 for(j=0;j<l;j++)
  {
  switch(s[j])
   {
   case 'a':
   case 'd':
   case 'g':
   case 'j':
   case 'm':
   case 'p':
   case 't':
   case 'w':
   case ' ':
   c=c+1;
   break;
   case 'b':
   case 'e':
   case 'h':
   case 'k':
   case 'n':
   case 'q':
   case 'u':
   case 'x':
   c=c+2;
   break;
   case 'c':
   case 'f':
   case 'i':
   case 'l':
   case 'o':
   case 'r':
   case 'v':
   case 'y':
   c=c+3;
   break;
   case 's':
   case 'z':
   c=c+4;
   break;
   }
  }
 printf("Case #%d: %d\n",i,c);
 i++;
 }
return 0;
}
