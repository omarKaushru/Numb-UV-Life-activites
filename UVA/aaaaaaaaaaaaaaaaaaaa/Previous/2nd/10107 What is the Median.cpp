#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  i=0,a[100000],n,te,s;
    while(cin>>n)
    {
        a[i]=n;
        s=i+1;
        sort(a,a+s);
        if(i%2==0)
        cout<<a[i/2]<<endl;
        else
        {
            //te=a[i/2]+a[(i/2)+1];
            //te=a[i/2]+a[(i/2)+1];
           // cout<<te/2<<endl;
            te=a[i/2]+a[(i/2)+1];
            cout<<te/2<<endl;
        }
        i++;
    }
}
