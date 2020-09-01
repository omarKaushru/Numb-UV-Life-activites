#include<stdio.h>
#include<conio.h>
int sum(int x);
main(){
       int n,add;
       printf("Enter n=");
        scanf("%d",&n);
         add=sum(n);
           printf("%d",add);
            getch();
            }
            int sum(int x)
            {
            if(x!=0)
            return x+sum(x-1);
            else
            return x;
            }
