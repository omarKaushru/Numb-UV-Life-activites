///Accpted

#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<map>
using namespace std;
int main()
{
    string n,a;
long long s,b,c,d,l;
while(cin>>n)
{
    sort(n.begin(),n.end());
    a=n;
     if(a[0]=='0')
        {
            for(int i=1;i<n.size();i++)
            {
                if(a[i]!='0')
                {
                    swap(a[0],a[i]);
                    break;
                }
            }
        }
    reverse(n.begin(),n.end());
    b=atoll(n.c_str());
    c=atoll(a.c_str());
    if(b<c)
    swap(b,c);
    s=b-c;
    d=s/9;
    cout<<b<<" - "<<c<<" = "<<s<<" = 9 * "<<d<<endl;
}
return 0;
}
