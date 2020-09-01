///Accepted
#include <stdio.h>
int p[101];
int main()
{
    int i, j, t, n, x, c;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        scanf("%d",&x);
        for (i=0 ; i<x ; i++)
        {
            scanf("%d",&p[i]);
        }
        for (i=1, c=0 ; i<=n ; i++)
        {
            if ((i%7)!=6 && (i%7)!=0)
            {
                for (j=0 ; j<x ; j++)
                {
                    if (!(i%p[j]))
                    {
                        c++;
                        break;
                    }
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
