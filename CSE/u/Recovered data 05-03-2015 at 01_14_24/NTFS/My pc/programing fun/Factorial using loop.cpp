#include <stdio.h>
#include <conio.h>
main(){
       int sum=1,f,i;
       printf("Enter a value for find Factorial: ");
       scanf("%d",&f);
       if(f==1||f==0){
       sum=1;
       printf("\nFactorial of [%d] is: %d",f,sum);
       }
       else {
       for(i=1; i<=f; i++){
       sum=sum*i;
       }
       printf("\nFactorial of [%d] is: %d",f,sum);
       }
       getch();
       }
