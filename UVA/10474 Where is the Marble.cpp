///Accepted
#include <iostream>
using namespace std;
int main()
{
    int a[10001],n,q,i,b[10001],c,x=0,j,temp;
    while(cin>>n>>q)
    {
        x++;
        if((n+q)==0)
        break;
        for(i=1; i<=n; i++)
        cin>>a[i];
        for(i=1; i<=q; i++)
        cin>>b[i];
        for (i = 1; i <=n; i++)
        {
        for(j = i+1; j <=n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i]   = a[j];
                a[j] = temp;
            }
        }
    }
        cout<<"CASE# "<<x<<":"<<endl;
        for(j=1; j<=q; j++)
        {
            c=0;
            for(i=1; i<=n; i++)
            {
                if(b[j]==a[i])
                {
                    c=i;
                    break;
                }
            }
            if(c==0)
            cout<<b[j]<<" not found"<<endl;
            else
            cout<<b[j]<<" found at "<<c<<endl;
        }
    }
    return 0;
}
