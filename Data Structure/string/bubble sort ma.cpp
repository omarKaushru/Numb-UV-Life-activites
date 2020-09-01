#include<stdio.h>
#include<conio.h>
main(){
     int i,n,k,temp;
     int data[55];
     printf("How many elements you want to sort: ");
     scanf("%d", &n);
     printf("Enter the elements  :\n");
     for(i=0; i<n; i++)
     scanf("%d", &data[i]);
     for(i=0;i<n;i++)
     for(k=0; k<n; k++)
     {
     i=0;
     while(i<n-1)
     {
     if(data[i]>data[i+1])
     {
     temp=data[i];
     data[i]=data[i+1];
     data[i+1]=temp;
     }
     i=i+1;
     }
     }
     printf("\n After sorting: ");
     for(i=0; i<n; i++)
     printf("%d  ", data[i]);
     getch();
     }
     
