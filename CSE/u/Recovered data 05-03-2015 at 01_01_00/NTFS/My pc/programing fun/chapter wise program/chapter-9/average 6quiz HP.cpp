#include<stdio.h>
#include<conio.h>
float average(float a[i]);
int main(){
       float i,avg,m[20],sum;
       printf("enter i");
       scanf("%f",&i);
       //sum=0;
       for(i=0;i<6;i++)
       avg=average(m[i]);
       printf("\n average=%f",avg);
       return 0;
       }
       float average(float a[i]){
       float sum,average,i;
       //sum=0;
       //for(i=0;i<6;i++){
       sum=sum+a[i];
       }
       average=sum/6;
        return average;
        }
