#include<stdio.h>
#include<conio.h>
main(){
       int A[5]={5,2,23,7,30};
       if(A[0]>A[1] && A[0]>A[2] && A[0]>A[3] && A[0]>A[4])
       printf("A[0] IS BEST");
       else if(A[1]>A[0] && A[1]>A[2] && A[1]>A[3] && A[1]>A[4])
       printf("A[1] IS BEST");
       else if(A[2]>A[0] && A[2]>A[1] && A[2]>A[3] && A[2]>A[4])
       printf("A[2] IS BEST");
       else if(A[3]>A[0] && A[3]>A[1] && A[3]>A[2] && A[3]>A[4])
       printf("A[3] IS BEST");
       else if(A[4]>A[0] && A[4]>A[1] && A[4]>A[2] && A[4]>A[3])
       printf("A[4] IS BEST");
       getch();
       }
