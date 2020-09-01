///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,b,c,new_cigarette;
    while(cin>>n>>k)
    {
        a=n,new_cigarette=0;
        while(a>=k)
        {
            b=a/k;
            c=a%k;
            a=b+c;
            new_cigarette=new_cigarette+b;
        }
        cout<<(n+new_cigarette)<<endl;
    }
}
