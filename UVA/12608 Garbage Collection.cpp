///Accepted

#include <cstdio>
#include <bits/stdc++.h>
int main()
{
  int T;
  scanf("%d", &T);
  while (T--) {
    int W, N;
    scanf("%d %d", &W, &N);
    int d = 0, w = 0, wi, pxi = 0, xi;
    while (N--) {
      scanf("%d %d", &xi, &wi);
      d += xi - pxi;
      w += wi;
      if (w > W)
      {
        d += xi * 2;
        if (wi == W)
        {
          if (N)
            d += xi * 2;
          w = 0;
        }
        else
          w = wi;
      }
      else if (w == W)
      {
        if (N)
          d += xi * 2;
        w = 0;
      }
      pxi = xi;
#ifdef DEBUG
      printf("   %d %d\n", d, w);
#endif
    }
    d += pxi;
    printf("%d\n", d);
  }
  return 0;
}
