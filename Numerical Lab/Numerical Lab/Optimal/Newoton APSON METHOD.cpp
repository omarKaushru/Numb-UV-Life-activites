#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double fu(double e,double f, double g, double h, double i, double j, double k)
{
    return f*e*e*e*e*e+g*e*e*e*e+h*e*e*e+i*e*e+j*e+k;
}

double Derived_fu(double e,double f, double g, double h, double i, double j, double k)
{
    return f*e*e*e*e*e+g*e*e*e*e+h*e*e*e+i*e*e+j*e+k;
}
int main()
{
    double x, y =.000001,z1,z2,a,b,l,m,c,n,o,p,q,l1,m1,n1,o1,p1,q1;
    printf("\nEnter the value for x^5+x^4+x^3+x^2+x+q:\n\t\t    ");
    scanf("%lf %lf %lf %lf %lf %lf",&l,&m,&n,&o,&p,&q);
    printf("\nEnter the value for x^5+x^4+x^3+x^2+x+q of first derivative:\n\t\t    ");
    scanf("%lf %lf %lf %lf %lf %lf",&l1,& m1, &n1, &o1, &p1, &q1);
    printf("\n Enter a real number for a ");
    scanf(" %lf", &a);
    do
    {
        x=a-((fu(a,l,m,n,o,p,q))/(Derived_fu(a,l1,m1,n1,o1,p1,q1)));
        z1=fu(x,l,m,n,o,p,q);
        z2=Derived_fu(x,l1,m1,n1,o1,p1,q1);
        a=x;
    }while((fabs(z1)>=y) || (fabs(z1)>=y));
    printf("\n Root for equation \n %.2lf*x^5 + %.2lf*x^4 + %.2lf*x^3 + %.2lf*x^2 + %.2lf*x + %.2lf  is: %lf\n\n",l,m,n,o,p,q,x);
    return 0;
}
