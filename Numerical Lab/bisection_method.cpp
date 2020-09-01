/* This program computes root of function with bisector method  */
#include <stdio.h>
#include <conio.h>
#include <math.h>

double myFunction(double x, double a, double b, double c, double d, double e){
return a*x*x*x*x + b*x*x*x + c*x*x + d*x + e;
}

int main(){
double a,b,c,d,e;
double leftpt, rightpt, midpt, epsilon = .0000001;
double midvalue, rtvalue, root;
printf("\n Enter values for a,b,c,d and e:");
scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
printf("\n Enter values for starting left and right points:");
scanf("%lf %lf", &leftpt, &rightpt);
//printf(" Left and right starting points are: %lf , %lf\n", leftpt,rightpt);
do {
midpt = (leftpt + rightpt)/2;
rtvalue = myFunction(rightpt,a,b,c,d,e);
midvalue = myFunction(midpt,a,b,c,d,e);
if (rtvalue * midvalue >= 0)
rightpt = midpt;
else   leftpt  = midpt;
} while ((rightpt - leftpt) > epsilon);
root = (rightpt+leftpt)/2;
printf("\n Root for equation \n %5.2lf *x^4 + %5.2lf *x^3 + %5.2lf *x^2 + %5.2lf *x + %5.2lf  is:",a,b,c,d,e);
printf("  %15.10lf\n", root);
return 0;
}
