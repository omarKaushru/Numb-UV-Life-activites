#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,pi= 3.14159,rectangled,circle,trapezium,square,rectangle;
    while(cin>>a>>b>>c)
    {
        rectangled=(1.00/2.00)*a*c;
        circle=pi*c*c;
        trapezium=((a+b)/2.0)*c;
        square=b*b;
        rectangle=a*b;
        printf("TRIANGULO: %.3lf\n",rectangled);
        printf("CIRCULO: %.3lf\n",circle);
        printf("TRAPEZIO: %.3lf\n",trapezium);
        printf("QUADRADO: %.3lf\n",square);
        printf("RETANGULO: %.3lf\n",rectangle);
    }
    return 0;
}
