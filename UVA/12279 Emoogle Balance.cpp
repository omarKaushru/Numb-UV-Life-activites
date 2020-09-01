///Accepted

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1,c1,c2,temp;
    while(cin>>n &&n)
    {
        c1=0,c2=0;
        for(int j=1; j<=n; j++)
        {
            cin>>temp;
            if(temp==0)
            c1++;
            else
            c2++;
        }
        cout<<"Case "<<i<<": "<<c2-c1<<endl;
        i++;
    }
    return 0;
}
