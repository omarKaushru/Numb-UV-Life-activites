#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x,y;

    while(cin>>x>>y)
    {
        if (x == 0.0 && y == 0.0)
        {
            printf("Origem\n");
        }
        else if (x == 0.0 && y != 0.0)
        {
            printf("Eixo Y\n");
        }
        else if (y == 0.0 && x != 0.0)
        {
            printf("Eixo X\n");
        }
        else if (x > 0.0)
        {
            if (y > 0.0)
            {
                printf("Q1\n");
            }
            else
            printf("Q4\n");
        }
        else if (y > 0.0)
        {
            printf("Q2\n");
        }
        else printf("Q3\n");
    }
    return 0;
}
