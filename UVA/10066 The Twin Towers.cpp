///Accepted
#include <bits/stdc++.h>
using namespace std;
int x[110],y[110],c[110][110];

int LCS(int m,int n)
{
    for(int i=0;i<=m;i++)
        c[i][0]=0;
    for(int i=0;i<=n;i++)
        c[0][i]=0;

    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            if(x[i]==y[j])
                c[i][j]=c[i-1][j-1]+1;
            else
                c[i][j]=max(c[i-1][j],c[i][j-1]);
    return c[m][n];

}

main()
{
    int n1,n2,kk=1;
    while(cin>>n1>>n2)
    {
        if(n1==0 && n2==0)
        break;
        for(int i=1;i<=n1;i++)
            cin>>x[i];
        for(int i=1;i<=n2;i++)
            cin>>y[i];
        int res=LCS(n1,n2);
        cout<<"Twin Towers #"<<kk++<<endl<<"Number of Tiles : ";
        cout<<res<<endl<<endl;
    }
    return 0;
}
