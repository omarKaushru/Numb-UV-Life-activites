///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    float n1,n2,n3,av;
    cin>>t;
    while(t--)
    {
        cin>>n1>>n2>>n3;
        av=n1*2+n2*3+n3*5;
        av=av/10.0;
        printf("%.1f\n",av);
    }
}
