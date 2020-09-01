#include <bits/stdc++.h>
using namespace std;

int number[20];
int n,k,c=0;

void combination(int at, int left)
{
    if(left>n-at+1)
    return;
    if(at==n+1)
    {
        c++;
        for(int i=1; i<=k; i++)
        cout<<number[i]<<" ";
        cout<<endl;
        return;
    }
    if(left)
    {
        number[k-left+1]=at;
        combination(at+1,left-1);
    }
    combination(at+1,left);
}

int main()
{
    cin>>n>>k;
    combination(1,k);
    cout<<c;
    return 0;
}
