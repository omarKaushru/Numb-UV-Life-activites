#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,l;
    char a[22];
    cin>>t;
    for(i=0; i<t; i++)
    {
        gets(a);
        l=strlen(a);
        for(j=0; j<l; j++)
        {
            if(a[j]>='A' && a[j]<= 'Z')
            {
                a[j]=tolower(a[j]);
            }
            else
            a[j]=toupper(a[j]);
        }
        a[j]='\0';
        puts(a);
    }
}
