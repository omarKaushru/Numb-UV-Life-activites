#include<stdio.h>
#include<conio.h>
main(){
       int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,q1,q2,q3,q4,q5,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
       printf("Enter q1=");
       scanf("%d",&q1);
       printf("Enter q2=");
       scanf("%d",&q2);
       printf("Enter q3=");
       scanf("%d",&q3);
       printf("Enter q4=");
       scanf("%d",&q4);
       printf("Enter q5=");
       scanf("%d",&q5);
       if(q1>q4 && q1>q5 && q2>q4 && q2>q5 && q3>q4 && q3>q5)
       {
       s1=(q1+q2+q3);
       a1=s1/3;
       printf("\ns1=%d,a1=%d",s1,a1); 
       }   
       else if(q1>q2 && q1>q5 && q3>q2 && q3>q5 && q4>q2 && q4>q5)
       {
       s2=(q1+q3+q4);
       a2=s2/3;
       printf("\ns2=%d,a2=%d",s2,a2);
       }         
       else if(q1>q2 && q1>q3 && q4>q2 && q4>q3 && q5>q2 && q5>q3)
        {
       s3=(q1+q4+q5);
       a3=s3/3;
       printf("\ns3=%d,a3=%d",s3,a3);
       }         
       else if(q2>q1 && q2>q3 && q4>q1 && q4>q3 && q5>q1 && q5>q3)
       {
       s4=(q2+q4+q5);
       a4=s4/3;
       printf("\ns4=%d,a4=%d",s4,a4);
       }         
       else if(q3>q1 && q3>q2 && q4>q1 && q4>q2 && q5>q1 && q5>q2)
       {
       s5=(q3+q4+q5);
       a5=s5/3;
       printf("\ns5=%d,a5=%d",s5,a5);
       }         
       else if(q2>q1 && q2>q5 && q3>q1 && q3>q5 && q4>q1 && q4>q5)
        {
       s6=(q2+q3+q4);
       a6=s6/3;
       printf("\ns6=%d,a6=%d",s6,a6);
       }         
       else if(q1>q3 && q1>q4 && q2>q3 && q2>q4 && q5>q3 && q5>q4)
       {
       s7=(q1+q2+q5);
       a7=s7/3;
       printf("\ns7=%d,a7=%d",s7,a7);
       }         
       else if(q1>q2 && q1>q4 && q3>q2 && q3>q4 && q5>q2 && q5>q4)
       {
       s8=(q1+q3+q5);
       a8=s8/3;
       printf("\ns8=%d,a8=%d",s8,a8);
       }         
       else if(q2>q1 && q2>q4 && q3>q1 && q3>q4 && q5>q1 && q5>q4)
       {
       s9=(q2+q3+q5);
       a9=s9/3;
       printf("\ns9=%d,a9=%d",s9,a9);
       }
       else if(q1=q2=q3=q4=q5)
       {
       s10=(q1+q2+q3+q4+q4+q5);
       a10=s10/3;
       printf("\ns10=%d,a10=%d",s10,a10);
       } 
       getch();
       }
       
