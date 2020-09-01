# include<stdio.h>
# include<conio.h>
main(){
       int first[10][10],second[10][10],sum[10][10];
       int m,n,i,j;
       printf("enter the number of year and column of matrix:");
       scanf("%d %d",&m,&n);
       printf("\n enter the value for first matrix:");
       for(i=0; i<m; i++)
       {
                for(j=0; j<n; j++)
                {
                         scanf("%d",&first[i][j]);
                         }
                        }
                         printf("\n enter the value for second matrix:");
       for(i=0; i<m; i++)
       {
                for(j=0; j<n; j++)
                {
                         scanf("%d",&second[i][j]);
                         }
                        }
                         for(i=0; i<m; i++)
       {
                for(j=0; j<n; j++)
                {
                         sum[i][j]=first[i][j]+second[i][j];
                         }
       }
        for(i=0; i<m; i++)
       {
                for(j=0; j<n; j++)
                {
                         printf("%d\t",sum[i][j]);
                         }
                         printf("\n");
                         }
                         getch();
                         }

