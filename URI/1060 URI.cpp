#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n,c=0;
    for(int i=1; i<=6; i++)
    {
        cin>>n;
        if(n>0)
        c++;
    }
    cout<<c<<" valores positivos\n";
    return 0;
}
