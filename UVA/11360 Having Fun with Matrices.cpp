///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,i,j,k,temp;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        string op;
        cin>>n;
        int ar[n][n],tempr[n][n];
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            scanf("%1d",&ar[j][k]);
        }
        cin>>m;

        for(int l=1; l<=m; l++)
        {
            int a,b;
            cin>>op;
            if(op=="row")
            {
                cin>>a>>b;
                for(j=0; j<n; j++ )
                {
                    temp=ar[a-1][j];
                    ar[a-1][j]=ar[b-1][j];
                    ar[b-1][j]=temp;
                }

            }
            else if(op=="col")
            {
                cin>>a>>b;
                for(j=0; j<n; j++ )
                {
                    temp=ar[j][a-1];
                    ar[j][a-1]=ar[j][b-1];
                    ar[j][b-1]=temp;
                }
            }
            else if(op=="inc")
            {
                for(j=0; j<n; j++)
                {
                    for(k=0; k<n; k++)
                    {
                        ar[j][k]=(ar[j][k]+1)%10;
                    }
                }
            }
            else if(op=="dec")
            {
                for(j=0; j<n; j++)
                {
                    for(k=0; k<n; k++)
                    {
                        temp=(ar[j][k]-1)%10;
                        if(temp<0)
                        ar[j][k]=9;
                        else
                        ar[j][k]=temp;
                    }
                }
            }
            else if(op=="transpose")
            {
                for(j=0; j<n; j++)
                {
                    for(k=0; k<n; k++)
                    {
                        tempr[j][k]=ar[j][k];
                    }
                }
                for(j=0; j<n; j++)
                {
                    for(k=0; k<n; k++)
                    {
                        ar[j][k]=tempr[k][j];
                    }
                }
            }
        }
        cout<<"Case #"<<i<<endl;
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            cout<<ar[j][k];
            cout<<endl;
        }
        cout<<endl;
    }
}
