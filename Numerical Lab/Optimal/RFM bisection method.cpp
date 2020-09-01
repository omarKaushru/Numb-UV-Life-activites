#include <stdio.h>
#include <math.h>

double fu(double e,double f, double g, double h, double i, double j, double k)
{
    return f*e*e*e*e*e+g*e*e*e*e+h*e*e*e+i*e*e+j*e+k;
}

int main()
{
    double x, y =.000001,z,a,b,l,m,n,c,o,p,q;
    printf("\nEnter the value for x^5+x^4+x^3+x^2+x+q:\n\t\t    ");
    scanf("%lf %lf %lf %lf %lf %lf",&l,&m,&n,&o,&p,&q);
    printf("\n Enter two real number for a & b: ");
    scanf("%lf %lf", &a,&b);
    do
    {
        x=(a+b)/2;
        z=fu(x,l,m,n,o,p,q);
        if(z<0)
        b=x;
        else
        a=x;
    }while(fabs(z)>=y);
    printf("\n Root for equation \n %.2lf*x^5 + %.2lf*x^4 + %.2lf*x^3 + %.2lf*x^2 + %.2lf*x + %.2lf  is: %lf",l,m,n,o,p,q,x);
    return 0;
}
