#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main(){
       float Q1,Q2,Q3,Q4,A,mid,att,ass,final,T;
       printf("Please enter the marks of quiz1 (out of 15) =");
       scanf("%f",&Q1);
       printf("Please enter the marks of quiz2 (out of 15) =");
       scanf("%f",&Q2);
       printf("Please enter the marks of quiz3 (out of 15) =");
       scanf("%f",&Q3);
       printf("Please enter the marks of quiz4 (out of 15) =");
       scanf("%f",&Q4);
       A=((Q1+Q2+Q3+Q4)/4);
       printf("\nPlease enter the marks of Midterm (out of 30) =");
       scanf("%f",&mid);
       printf("\nPlease enter the marks of Class Attendance (out of 10) =");
       scanf("%f",&att);
       printf("\nPlease enter the marks of Assignment (out of 5) =");
       scanf("%f",&ass);
       printf("\nPlease enter the marks of Final Examination (out of 40) =");
       scanf("%f",&final);
       T=(A+mid+att+ass+final);
       printf("\n\nQuiz Average is=%4.2f", A);
       printf("\nYour Total Marks is =%5.2f",T);
       if(T>=80)
       printf("\nYour Grade is A+");
       else
       if(T>=75)
       printf("\nYour Grade is A");
       else
       if(T>=70)
       printf("\nYour Grade is A-");
       else
       if(T>=65)
       printf("\nYour Grade is B+");
       else
       if(T>=60)
       printf("\nYour Grade is B");
       else
       if(T>=55)
       printf("\nYour Grade is B-");
       else
       if(T>=50)
       printf("\nYour Grade is C+");
       else
       if(T>=45)
       printf("\nYour Grade is C");
       else
       if(T>=40)
       printf("\nYour Grade is C-");
       else
       if(T>=00)
       printf("\nYour Grade is F");
       getch();
       }
