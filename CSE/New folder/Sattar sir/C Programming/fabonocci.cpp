#include<stdio.h>
#include<conio.h>
main(){
int a,b,c,i,j,k,n;

    printf("enter the value of n:\n");
    scanf("%d",&n);
    
    for(i=n;i>0;i--) {
                     
        for(j=1;j<i;j++) 
        {

            printf(" "); 
            }

            for(k=j-1;k<n;k++) 
            {

                printf("*");
                 printf(" ");
        }

        printf("\n");
}

getch();      
}
