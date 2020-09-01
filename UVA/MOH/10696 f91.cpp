///Accepted
#include<bits/stdc++.h>
using namespace std;

int f91(int n)
{
    if(n<=100)
    return f91(f91(n+11));
    else
    return (n-10);
}
int main()
{
    int n,ans;
    while(cin>>n &&n)
    {
        ans=f91(n);
        cout<<"f91("<<n<<") = "<<ans<<endl;
    }
}
