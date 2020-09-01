#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double fu(double e,double f, double g, double h, double i, double j, double k)
{
    return f*e*e*e*e*e+g*e*e*e*e+h*e*e*e+i*e*e+j*e+k;
}

int main()
{
    double x, y =.000001,z,x1,x0,l,m,c,n,o,p,q,l1,m1,n1,o1,p1,q1;
    printf("\nEnter the value for x^5+x^4+x^3+x^2+x+q:\n\t\t    ");
    scanf("%lf %lf %lf %lf %lf %lf",&l,&m,&n,&o,&p,&q);
    printf("\nEnter two real number for x0 & x1:");
    scanf("%lf %lf", &x0, &x1);
    do
    {
        x=x1-((fu(x1,l,m,n,o,p,q)*(x1-x0))/(fu(x1,l,m,n,o,p,q)-fu(x0,l,m,n,o,p,q)));
        z=fu(x,l,m,n,o,p,q);
        if(z<0)
        x0=x;
        else
        x1=x;
    }while(fabs(z)>=y);
    printf("\nRoot for equation\n%.2lf*x^5 + %.2lf*x^4 + %.2lf*x^3 + %.2lf*x^2 + %.2lf*x + %.2lf  is: %lf\n\n",l,m,n,o,p,q,x);
    return 0;
}

///while(c!=.000000 || c!=(-.000000))
