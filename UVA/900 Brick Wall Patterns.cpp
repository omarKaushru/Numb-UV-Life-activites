///Accepted
#include <bits/stdc++.h>
using namespace std;

long long int a[60];

void generate(long long int n)
{
    long long int i;
    long long int te;
    for(i=1; i<=n; i++)
    {
        if(i<3)
        a[i]=i;
        else
        {
            te=a[i-1]+a[i-2];
            a[i]=te;
        }
    }
  //  for(i=1; i<=n; i++)
    //cout<<a[i]<<" ";
}

int main()
{
    long long int n,c=50;
    generate(c);
    while(cin>>n && n)
    {
        cout<<a[n]<<endl;
    }
}
