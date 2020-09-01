///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,iarray[101],i,j,previous,p;
    cin>>t;
    string ins,te;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ins;
            if(ins=="LEFT")
            {
                p--;
                iarray[i]=-1;
            }
            else if(ins=="RIGHT")
            {
                p++;
                iarray[i]=1;
            }
            else if(ins=="SAME")
            {
                cin>>te>>previous;
                p=p+iarray[previous-1];
                iarray[i]=iarray[previous-1];
            }
        }
        cout<<p<<endl;
    }///end of wile
    return 0;
}
