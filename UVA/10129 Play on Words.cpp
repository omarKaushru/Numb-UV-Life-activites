///Not Accepted
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    char a[1000],temp[2];
    int t,n,j,l,i,c,k;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        k=c=0;
        cin>>n;
        for(k=1; k<=n; k++)
        {
            scanf("%s",a);
        if(k==1)
        {
            for(j=0; a[j]!='\0'; j++){}
           temp[0]=a[j-1];
        }
        if(k>=2)
        {
            if(temp[0]==a[0])
            {
                c++;
            }
        }
        }
        if((n-1)==c)
        cout<<"Ordering is possible."<<endl;
        else
        cout<<"The door cannot be opened."<<endl;
        c=0;
    }
    return 0;
}
