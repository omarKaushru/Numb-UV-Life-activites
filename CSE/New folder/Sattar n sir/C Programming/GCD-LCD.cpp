

#include<stdio.h>
#include<conio.h>

int main()
{
  int a[20],n,i,j,c,max,min;
  unsigned long prod;
  
  printf("Enter the no. of entries: ");
  scanf("%d",&n);
  printf("Enter the entries: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&c);
    if(c>0)
      a[i]=c;
    else
    {
      printf("Invalid Entry");
    }
  }

  max=a[0];
  for(i=0;i<n;i++)
    if(a[i]>=max)
      max=a[i];
  min=a[0];
  for(i=0;i<n;i++)
    if(a[i]<min)
      min=a[i];

  for(i=0,prod=1;i<n;i++)
    prod=prod*a[i];

  for(i=max;i<=prod;i+=max)
  {

    c=0;
    for(j=0;j<n;j++)
      if(i%a[j]==0)
		 c+=1;
    if(c==n)
    {
      printf("The LCM of the nos: %d",i);
      break;
    }
  }

  for(i=min;i>0;i--)
  {
    if (min%i==0)
    {
      c=0;
      for(j=0;j<n;j++)
		 if(a[j]%i==0)
		   c+=1;
    }
    if(c==n)
    {
      printf("\n The GCD of the nos: %d",i);
      break;
    }
  }
  getch();
}
