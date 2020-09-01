#include<stdio.h>
#include<conio.h>
int main(){
           int a[1000],i,j,temp,n;
           printf("N=");
           scanf("%d",&n);
           printf("Enter integer number  :\n");
           for(j=0;j<n;j++)
           scanf("%d",&a[j]);
           for(j=0;j<n;j++)
           {
           for(i=0;i<n;i++)
           {
           if(a[i]>a[i+1])
           {
           temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
           }
           }
           }
           printf("\n\narray after sorting\n");
           for(i=0;i<n;i++)
           printf("%d\t",a[i]);
           printf("\n\n\n\n\t\t\tWish you good luck!");
           getch();
           }
