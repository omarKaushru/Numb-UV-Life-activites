#include <stdio.h>
#include <math.h>
int main()
{

    int tc, i, j, k, m, n, ans;
    scanf("%d", &tc);
    for(i = 0; i < tc; i++)
    {
        scanf("%d %d", &m, &n);
        if(m == 1)
            ans = n;
        else if(n == 1)
            ans = m;
        else if(n == 2)
        {
            ans = (m / 4) * 4;
            if(m % 4 == 1)
                ans =ans+ 2;
            else if(m % 4 > 1)
                ans =ans+ 4;
        }
        else if(m == 2)
        {
            ans = (n / 4) * 4;
            if(n % 4 == 1)
                ans =ans+ 2;
            else if(n % 4 > 1)
                ans += 4;
        }
        else
            ans = ((m * n) + 1) / 2;
        printf("Case %d: %d\n", i + 1, ans);
    }
    return 0;
}
