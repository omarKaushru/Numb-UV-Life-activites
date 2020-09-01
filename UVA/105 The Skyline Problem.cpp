///Accepted
#include<bits/stdc++.h>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)

#define MOD 1000000007
#define MX 10010

int arr[MX];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, tc, kk=1, a, b, h, mxb=0;
    string s;
    while(cin>>a>>h>>b)
    {
        for(int i=a;i<b;i++)
            arr[i]=max(arr[i], h);
        mxb=max(mxb, b);
    }
    int prev=0;
    for(int i=0;i<mxb;i++)
        if(arr[i]!=prev)
        {
            cout<<i<<" "<<arr[i]<<" ";
            prev=arr[i];
        }

    cout<<mxb<<" 0\n";
return 0;
}
