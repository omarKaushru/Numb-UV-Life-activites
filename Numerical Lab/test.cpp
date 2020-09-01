#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
double fu(double e,double f, double g, double h, double i, double j, double k)
{
    return f*e*e*e*e*e+g*e*e*e*e+h*e*e*e+i*e*e+j*e+k;
}

int main()
{
    double x, y =.00001,z,a,b,l,m,n,o,p,q,c,d;
    printf("\n Enter the value for l m n o p q: ");
    scanf("%lf %lf %lf %lf %lf %lf",&l,&m,&n,&o,&p,&q);
    printf("\n Enter two real number for a & b: ");
    scanf("%lf %lf", &a,&b);
    for( ;  ; )
    {
        c=fu(a,l,m,n,o,p,q);
        d=fu(b,l,m,n,o,p,q);
        x=a-(c/(c-d))*(a-b);
        z=fu(x,l,m,n,o,p,q);
        if(z<0)
        b=x;
        else
        a=x;
        cout<<"x: "<<x<<"c:"<<c<<" d: "<<d<<" \na:"<<a<<" b: "<<b<<"\nz: "<<z;

    }
    printf("\n Root for equation \n %.2lf*x^5 + %.2lf*x^4 + %.2lf*x^3 + %.2lf*x^2 + %.2lf*x + %.2lf  is: %.4lf\n\n",l,m,n,o,p,q,x);
    printf("z:%ld\n\n",z);
    return 0;
}
