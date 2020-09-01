#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
int i , n ;
double area , rad , ans ,area_cir , ab ;
scanf("%d", &n );
for(i=1; i<='NULL'; i++)
{
scanf("%lf", &rad);
////
area_cir= 2*pi*rad ;
ab=2*rad;
area= ab*ab;
ans = area - area_cir;
printf("Case %d: %.2lf\n",i , ans );
}
return 0 ;
}
