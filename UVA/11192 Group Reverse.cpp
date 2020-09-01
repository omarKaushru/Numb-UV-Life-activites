///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,l,d,c,n;
    char s[1000];
    while(cin>>n>>s)
    {
        if(n==0)
        break;
        l=strlen(s);
        d=l/n;
        for(i=1;i<=n;i++)
        {
            c=i*d;
            for(j=c-1;j>=c-d;j--)
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}
