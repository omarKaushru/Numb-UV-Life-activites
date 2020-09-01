#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n,c=0,av,sum=0;
    for(int i=1; i<=6; i++)
    {
        cin>>n;
        if(n>0)
        {
            c++;
            sum=sum+n;
        }
        av=sum/c;
    }
    cout<<c<<" valores positivos\n";
    printf("%.1f\n",av);
    return 0;
}
