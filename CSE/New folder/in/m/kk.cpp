# include<stdio.h>
# include<conio.h>
main()
{
int a[5],i,max;
for(i=0;i<5;i++)
{
printf("Enter five number: ");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=0;i<5;i++)
{
if(a[i]>max)
max=a[i];
}
printf("\nBig:%d",max);
getch();
return 0;
}                                                     }

