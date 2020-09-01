#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
inline int in()
{
    int x;
    //scanf("%d",&x);
    cin>>x;
    return x;
}

int main()
{
    int t,i,flag,con,n,j,a[2000],o,m,temp;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        con=0;
        cin>>n;
        for(j=0;j<=n;j++)
        cin>>a[j];
        for(o=0;o<n;o++)
        {
            j=0;
            flag=0;
            for(m=0;m<n-1;m++)
            {
                if(a[m]>a[m+1])
                {
                    temp=a[0];
                    for(m=0;m<n-1;m++)
                    {
                        a[m]=a[m+1];
                    }
                    a[n-1]=temp;
                    con++;
                    flag=1;
                    break;
                }
                else
                    flag=2;
            }
            if(flag==2)
                break;
                if(flag==1)
                {
                    temp=a[0];
                    for(m=0;m<n-1;m++)
                    {
                        a[m]=a[m+1];
                    }
                    a[n-1]=temp;
                    con++;
                }
        }
        for(m=0;m<n-1;m++)
        {
            if(a[m]>a[m+1])
            {
                flag=1;
            }
        }
        if(flag==1)
            cout<<"Case"<<i<<": "<<"x"<<endl;
        else
            cout<<"Case"<<i<<": "<<con<<endl;
    }
}
