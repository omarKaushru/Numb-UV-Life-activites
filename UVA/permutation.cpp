#include <bits/stdc++.h>
using namespace std;
int used[33],number[33];
int n;
void permutation(int at, int n)
{
    if(at==n+1)
    {
        for(int i=1; i<=n; i++)
        cout<<number[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i=1; i<=n; i++)
    if(!used[i])
    {
        used[i]=1;
        number[at]=i;
        permutation(at+1,n);
        used[i]=0;
    }
}

int main()
{
    cin>>n;
    permutation(2,n);
    return 0;
}
