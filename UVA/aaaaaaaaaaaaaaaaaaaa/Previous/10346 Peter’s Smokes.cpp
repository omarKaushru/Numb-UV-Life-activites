#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum,a,k;
    while(cin>>n>>k)
    {
        sum=n;
        while(n>=k)
        {
            a=n/k;
            sum=sum+a;
            n=(n%k)+a;
        }
        cout<<sum<<endl;
    }
}
