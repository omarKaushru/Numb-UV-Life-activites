///Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<double>v;
    double n,m,x,y;
    int i,l;
    while(scanf("%lf %lf",&n,&m)==2)
    {
        if(m>n || m<=1.0)
        {
            printf("Boring!\n");
            continue;
        }
        v.clear();
        v.push_back(n);
        while(n>=1.00)
        {
            n/=m;
            v.push_back(n);
        }
        l=v.size();
        if(v[l-2]==1.0 && l>2)
        {
            printf("%.0lf",v[0]);
            for(i=1; i<v.size()-1; i++)
                printf(" %.0lf",v[i]);
            printf("\n");
        }
        else printf("Boring!\n");

    }
    return 0;
}
