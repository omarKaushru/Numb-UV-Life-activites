///Accepted
/*UVA 11933: Splitting numbers
Process:
I solved this problem using bit manipulation.
The premise is to split an integer n into two integers a and b based on a rule.
The rule is that for every other bit set to 1,
the corresponding bit in a or b is also set to 1,
where a’s sequence starts at 1 and b’s sequence starts at 2.
Just shift n by one bit to the right until it hits 0,
and build a and b by examining the first bit of n. */
#include <bits/stdc++.h>
using namespace std;
int n, a, b;

int main()
{
    for(;;)
    {
        scanf("%d", &n);
        if(n == 0) break;

        int i = 0, j = 0; // index, number of ones
        a = 0, b = 0;
        while(n > 0)
        {
            if(1 & n)
            {
                if(j % 2)
                {
                    b |= 1 << i;
                } else
                {
                    a |= 1 << i;
                }
                j++;
            }
            i++;
            n = n >> 1;
        }

        printf("%d %d\n", a, b);
    }
    return 0;
}
