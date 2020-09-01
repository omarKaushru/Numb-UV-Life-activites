/* atan example */
#include <stdio.h>      /* printf */
#include <math.h>       /* atan */
#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265

int main ()
{
  double param, result;
  double x1,y1,x2,y2;
  while(cin>>x1>>y1>>x2>>y2)
  {
      param = ((y2-y1)/(x2-x1));
      if(x2>x1 && y2>y1)
      result = atan (param) * 180 / PI;
      else if(x2<x1 && y2>y1)
      result=(atan (param) * 180 / PI)+180;
      else if(x2<x1 && y2<y1)
      result=(atan (param) * 180 / PI)+180;
      else if(x2>x1 && y2<y1)
      result=(atan (param) * 180 / PI)+360;
      printf ("%f degrees\n", result );
  }
  return 0;
}
