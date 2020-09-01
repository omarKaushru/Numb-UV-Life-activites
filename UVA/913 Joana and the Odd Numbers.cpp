///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum;
    while(cin>>n)
    {
        sum=0;
        sum=3*(((n+1)*(n+1))/2-3);
        cout<<sum<<endl;
    }
    return 0;
}
