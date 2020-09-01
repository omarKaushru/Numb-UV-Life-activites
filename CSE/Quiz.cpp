#include<stdio.h>
#include<conio.h>
main(){
       int quiz[5];
       int i,sum;
       sum=0;
       printf("Enter number of five quzes :");
       for(i=0;i<5;i=i+1)
       scanf("%d",&quiz[i]);
       for(i=0;i<5;i=i+1)
       {
        sum=sum+quiz[i];
       }
       printf("Total number of the quiz:%d ",sum);
       getch(); 
       }
 
