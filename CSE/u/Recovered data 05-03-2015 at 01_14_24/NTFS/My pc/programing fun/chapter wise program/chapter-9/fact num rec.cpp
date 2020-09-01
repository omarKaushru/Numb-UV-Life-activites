#include<stdio.h>
#include<conio.h>
int fact(int x);
main(){
       int n,f;
       printf("Enter n=");
        scanf("%d",&n);
         f=fact(n);
           printf("%d",f);
            getch();
            }
            int fact(int x)
            {
            if(x==1)
            return 1;
            else
            return(x*fact(x-1));
            }
