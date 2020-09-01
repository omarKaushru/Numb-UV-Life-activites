///Accepted
#include <bits/stdc++.h>
using namespace std;
long long H(int n)
{
    int root = int(sqrt(n)) + 1;
    long long res = 0;
    for(int i=1; i < root; i++)
    {
        res += n/i;
    }
    root--;
    res = 2*res - root*root;
    return res;
}
int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        printf("%lld\n", H(n));
    }
    return 0;
}
