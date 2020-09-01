///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, a[11],c1,c2,t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--)
    {
        for(i=0; i<10; i++)
        cin>>a[i];
        c1=0,c2=0;
        for(i=0; i<9; i++)
        {
            if(a[i]<=a[i+1])
            c1++;
            if(a[i]>=a[i+1])
            c2++;
        }
        if(c1==9 || c2==9)
        cout<<"Ordered"<<endl;
        else
        cout<<"Unordered"<<endl;
    }
}
