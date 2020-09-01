#include<stdio.h>
#include<conio.h>
main(){
       
        int first[10][10],second[10][10],sum[10][10];
        int m,n,i,j,k; 
       printf("Enter the main number of rows and column of metrix:=");
       scanf("%d %d",&m,&n);
       printf("\n Enter value for first matrix:");
       for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
       {
       scanf("%d",&first[i][j]);
       }
       }
       printf("\nEnter value for second matrix");
        for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
       {
       scanf("%d",&second[i][j]);
       }
       }
        for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
       {
       sum[i][j]=0;
       for(k=0;k<m;k++)
       {
       sum[i][j]=sum[i][j]+(first[i][k]*second[k][j]);
       }
       }
       }
        for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
       {
       printf("%d\t",sum[i][j]);
       }
       printf("\n");
       }
       getch();
       }
