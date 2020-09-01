#include<stdio.h>
#include<conio.h>
main(){
     int arr[3][3], i, j, sum=0;
     /*Accepts input from the user and stores it in 2-D array*/
     for(i=0;i<3;i++){ 
          for(j=0;j<3;j++){ 
               printf("\nEnter the value for A[%d][%d]: " i,j);
               scanf("%d",&arr[i][j]);
          }
     }
     /*Calculate sum of elements in 2-D array*/
     for(i=0;i<3;i++){
          for(j=0;j<3;j++){
               sum=sum+arr[i][j];
          }
     }
     /*Display the value of sum*/
     printf("\nThe sum of the elements of 2-D array is %d",sum);
     
     getch();
}
