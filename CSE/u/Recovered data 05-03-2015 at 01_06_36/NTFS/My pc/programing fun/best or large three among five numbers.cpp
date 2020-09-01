#include<stdio.h>
#include<conio.h>
main(){
       float a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,q1,q2,q3,q4,q5,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
       printf("Enter q1=");
       scanf("%f",&q1);
       printf("Enter q2=");
       scanf("%f",&q2);
       printf("Enter q3=");
       scanf("%f",&q3);
       printf("Enter q4=");
       scanf("%f",&q4);
       printf("Enter q5=");
       scanf("%f",&q5);
       if(q1>q4 && q1>q5 && q2>q4 && q2>q5 && q3>q4 && q3>q5)
       {
       s1=(q1+q2+q3);
       a1=s1/3;
       printf("\nAddition of best three number(s1)=%.2f,And\nAverage is(a1)=%.2f",s1,a1); 
       }   
       else if(q1>q2 && q1>q5 && q3>q2 && q3>q5 && q4>q2 && q4>q5)
       {
       s2=(q1+q3+q4);
       a2=s2/3;
       printf("\nAddition of best three number(s2)=%.2f,And\nAverage os(a2)=%.2f",s2,a2);
       }         
       else if(q1>q2 && q1>q3 && q4>q2 && q4>q3 && q5>q2 && q5>q3)
        {
       s3=(q1+q4+q5);
       a3=s3/3;
       printf("\nAddition of best three number(s3)=%.2f,And\nAverage is(a3)=%.2f",s3,a3);
       }         
       else if(q2>q1&& q2>q3 && q4>q1 && q4>q3 && q5>q1 && q5>q3)
       {
       s4=(q2+q4+q5);
       a4=s4/3;
       printf("\nAddition of best three number(s4)=%.2f,And\nAverage is(a4)=%.2f",s4,a4);
       }         
       else if(q3>q1 && q3>q2 && q4>q1 && q4>q2 && q5>q1 && q5>q2)
       {
       s5=(q3+q4+q5);
       a5=s5/3;
       printf("\nAddition of best three number(s5)=%.2f,And\nAverage is(a5)=%.2f",s5,a5);
       }         
       else if(q2>q1 && q2>q5 && q3>q1 && q3>q5 && q4>q1 && q4>q5)
        {
       s6=(q2+q3+q4);
       a6=s6/3;
       printf("\nAdditionof best three number(s6)=%.2f,And\nAverage is(a6)=%.2f",s6,a6);
       }         
       else if(q1>q3 && q1>q4 && q2>q3 && q2>q4 && q5>q3 && q5>q4)
       {
       s7=(q1+q2+q5);
       a7=s7/3;
       printf("\nAddition of best three number(s7)=%.2f,And\nAverage is(a7)=%.2f",s7,a7);
       }         
       else if(q1>q2 && q1>q4 && q3>q2 && q3>q4 && q5>q2 && q5>q4)
       {
       s8=(q1+q3+q5);
       a8=s8/3;
       printf("\nAddition is(s8)=%.2f,Average is(a8)=%.2f",s8,a8);
       }         
       else if(q2>q1 && q2>q4 && q3>q1 && q3>q4 && q5>q1 && q5>q4)
       {
       s9=(q2+q3+q5);
       a9=s9/3;
       printf("\nAddition is(s9)=%.2f,Average is(a9)=%.2f",s9,a9);
       }
       else if(q1=q2=q3=q4=q5)
       {
       s10=(q1+q2+q3+q4+q4+q5);
       a10=s10/3;
       printf("\nAddition is(s10)=%.2f,Average is(a10)=%.2f",s10,a10);
       } 
       getch();
       }
       
