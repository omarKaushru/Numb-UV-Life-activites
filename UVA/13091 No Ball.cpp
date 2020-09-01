///Accepted
#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,flag=0,pos1=-1,pos2=-1,pos3=-1,pos4=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char a[5][5];
        for(int j=0;j<5;j++)
        {
            for(int k=0;k<5;k++)
            {
                cin>>a[j][k];
            }
        }
        for(int j=0;j<=0;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(a[j][k]=='>')
                {
                    pos1=k;
                }
                if(a[j][k]=='|')
                {
                    pos2=k;
                }
            }
        }
        for(int j=1;j<=1;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(a[j][k]=='>')
                {
                    pos1=k;
                }
                if(a[j][k]=='|')
                {
                    pos2=k;
                }
            }
        }
        for(int j=2;j<=2;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(a[j][k]=='>')
                {
                    pos1=k;
                }
                if(a[j][k]=='|')
                {
                    pos2=k;
                }
            }
        }
        for(int j=3;j<=3;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(a[j][k]=='>')
                {
                    pos1=k;
                }
                if(a[j][k]=='|')
                {
                    pos2=k;
                }
            }
        }
        for(int j=4;j<=4;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(a[j][k]=='>')
                {
                    pos1=k;
                }
                if(a[j][k]=='|')
                {
                    pos2=k;
                }
            }
        }
        ///End of '>' term and starting '<' term
        for(int j=0;j<=0;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(a[j][k]=='<')
                {
                    pos3=k;
                }
                if(a[j][k]=='|')
                {
                    pos4=k;
                }
            }
        }
        for(int j=1;j<=1;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(a[j][k]=='<')
                {
                    pos3=k;
                }
                if(a[j][k]=='|')
                {
                    pos4=k;
                }
            }
        }
        for(int j=2;j<=2;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(a[j][k]=='<')
                {
                    pos3=k;
                }
                if(a[j][k]=='|')
                {
                    pos4=k;
                }
            }
        }
        for(int j=3;j<=3;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(a[j][k]=='<')
                {
                    pos3=k;
                }
                if(a[j][k]=='|')
                {
                    pos4=k;
                }
            }
        }
        for(int j=4;j<=4;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(a[j][k]=='<')
                {
                    pos3=k;
                }
                if(a[j][k]=='|')
                {
                    pos4=k;
                }
            }
        }
        if(pos1>-1&&pos2>-1)
        {
            if(pos1<pos2)
            {
                printf("Case %d: Thik Ball\n",i);
            }
            else if(pos1>pos2)
            {
                printf("Case %d: No Ball\n",i);
            }
        }
        pos1=-1;
        pos2=-1;
        if(pos3>-1&&pos4>-1)
        {
            if(pos3>pos4)
            {
                printf("Case %d: Thik Ball\n",i);
            }
            else if(pos3<pos4)
            {
                printf("Case %d: No Ball\n",i);
            }
        }
        pos3=-1;
        pos4=-1;
    }
    return 0;
}
