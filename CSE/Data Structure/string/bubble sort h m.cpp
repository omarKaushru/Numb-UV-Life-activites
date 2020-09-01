#include<stdio.h>
#include<conio.h>
main()
{
int a[100],i,n,p,j,temp;
printf("\n............ Bubble Sort ............ \n\n");
printf("Enter No of Elements you wanna Sort : ");
scanf("%d",&n);
printf("\n\t\t......Enter Elements......\n");
for(i=1;i<=n;i++){
printf("\nEnter element for N [%d] : ", i);
scanf("%d", &a[i]);
}
for(p=1;p<=n-1;p++)             // Loop for Pass
{
for(j=1;j<=n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];                      // Interchange Values
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nAfter Sorting : \n");
for(i=1;i<=n;i++)
{
printf("%d",a[i]);
printf(" ");
}
getch();
}
