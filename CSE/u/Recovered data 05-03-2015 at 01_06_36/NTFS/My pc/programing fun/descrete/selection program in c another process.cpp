#include<stdio.h>
#include<conio.h>
main(){
       int a[1000],i,j,temp,n;
        printf("n=");
         scanf("%d",&n);
          printf("Enter integer number");
           for(j=0;j<n;j++)
            scanf("%d",&a[j]);
             for(i=0;i<n;i++)
             {
              for(j=i+1;j<n;j++)
              {
               if(a[i]>a[j])
               {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
               }
              }
          printf("\n\narray after sorting\n");
          for(i=0;i<n;i++)
          printf("%d\t",a[i]);
          getch();
         }
