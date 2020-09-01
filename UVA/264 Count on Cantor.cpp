///Accepted

#include<bits/stdc++.h>
using namespace std;
int main()
{
int count=1,n,i,x=1,y=1;
vector<int>a;
vector<int>b;
a.push_back(x);
b.push_back(y);
while(1)
    {
    x=1;
    y++;
    a.push_back(x);
    b.push_back(y);
    for(i=0;i<count;i++)
        {
        x++;
        y--;
        a.push_back(x);
        b.push_back(y);
        if(a.size()>10000000) break;
        }
    if(a.size()>10000000) break;
    count++;
    y=1;
    x++;
    a.push_back(x);
    b.push_back(y);
    for(i=0;i<count;i++)
            {
            x--;
            y++;
            a.push_back(x);
            b.push_back(y);
            if(a.size()>10000000) break;
            }
    if(a.size()>10000000) break;
    count++;
    }
while(cin>>n)
    {
    cout<<"TERM "<<n<<" IS "<<a[n-1]<<"/"<<b[n-1]<<endl;
    }
return 0;
}
