///Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[1050],c,t;
    while(cin>>n)
    {
        c=0;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=1;i<n;i++)
        for(j=n-1;j>=i;j--)
        if(a[j-1]>a[j])
        {
            t=a[j-1];
            a[j-1]=a[j];
            a[j]=t;
            c++;
        }
        cout<<"Minimum exchange operations : "<<c<<endl;
    }
    return 0;
}
