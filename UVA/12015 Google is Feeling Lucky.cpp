///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a[20],l0,l1,l2,l3,l4,l5,l6,l7,l8,l9,t,max;
    char s0[120],s1[120],s2[120],s3[120],s4[120],s5[120],s6[120],s7[120],s8[120],s9[120];
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            for(j=0;j<120;j++)
            {
                scanf("%c",&s0[j]);
 if(s0[j]==' ')
 break;
 }
 l0=j;
 scanf("%d\r",&a[0]);

 for(j=0;j<120;j++)
 {
 scanf("%c",&s1[j]);
 if(s1[j]==' ')
 break;
 }
 l1=j;
 scanf("%d\r",&a[1]);

 for(j=0;j<120;j++)
 {
 scanf("%c",&s2[j]);
 if(s2[j]==' ')
 break;
 }
 l2=j;
 scanf("%d\r",&a[2]);

 for(j=0;j<120;j++)
 {
 scanf("%c",&s3[j]);
 if(s3[j]==' ')
 break;
 }
 l3=j;
 scanf("%d\r",&a[3]);

 for(j=0;j<120;j++)
 {
 scanf("%c",&s4[j]);
 if(s4[j]==' ')
 break;
 }
 l4=j;
 scanf("%d\r",&a[4]);

 for(j=0;j<120;j++)
 {
 scanf("%c",&s5[j]);
 if(s5[j]==' ')
 break;
 }
 l5=j;
 scanf("%d\r",&a[5]);

 for(j=0;j<120;j++)
 {
 scanf("%c",&s6[j]);
 if(s6[j]==' ')
 break;
 }
 l6=j;
 scanf("%d\r",&a[6]);

 for(j=0;j<120;j++)
 {
 scanf("%c",&s7[j]);
 if(s7[j]==' ')
 break;
 }
 l7=j;
 scanf("%d\r",&a[7]);

 for(j=0;j<120;j++)
 {
 scanf("%c",&s8[j]);
 if(s8[j]==' ')
 break;
 }
 l8=j;
 scanf("%d\r",&a[8]);

 for(j=0;j<120;j++)
 {
 scanf("%c",&s9[j]);
 if(s9[j]==' ')
 break;
 }
 l9=j;
 scanf("%d",&a[9]);
 max=0;
 for(k=0;k<=9;k++)
  {
  if(a[k]>max)
  max=a[k];
  }

 printf("Case #%d:\n",i);

 if(a[0]==max)
  {
  for(j=0;j<l0;j++)
  printf("%c",s0[j]);
  printf("\n");
  }

 if(a[1]==max)
  {
  for(j=0;j<l1;j++)
  printf("%c",s1[j]);
  printf("\n");
  }


 if(a[2]==max)
  {
  for(j=0;j<l2;j++)
  printf("%c",s2[j]);
  printf("\n");
  }

 if(a[3]==max)
  {
  for(j=0;j<l3;j++)
  printf("%c",s3[j]);
  printf("\n");
  }

 if(a[4]==max)
  {
  for(j=0;j<l4;j++)
  printf("%c",s4[j]);
  printf("\n");
  }

 if(a[5]==max)
  {
  for(j=0;j<l5;j++)
  printf("%c",s5[j]);
  printf("\n");
  }

 if(a[6]==max)
  {
  for(j=0;j<l6;j++)
  printf("%c",s6[j]);
  printf("\n");
  }

 if(a[7]==max)
  {
  for(j=0;j<l7;j++)
  printf("%c",s7[j]);
  printf("\n");
  }

 if(a[8]==max)
  {
  for(j=0;j<l8;j++)
  printf("%c",s8[j]);
  printf("\n");
  }

 if(a[9]==max)
  {
  for(j=0;j<l9;j++)
  printf("%c",s9[j]);
  printf("\n");
  }
 }
}
return 0;
}
