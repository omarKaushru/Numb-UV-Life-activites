#include <bits/stdc++.h>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
    int t,freq[30],l,i,j,max,c=0;
    char a[1000],letter[30];
    cin>>t;
   // getchar();
    while(c<=t)
    {
        gets(a);
        l=strlen(a);
        if(l==0)
        continue;
        for(i=0; i<26;i++)
        freq[i]=0;
        for(i=0; i<26; i++)
        letter[i]=i+97;

        for(i=0;i<l; i++)
        {
            a[i]=tolower(a[i]);
            for(j=0; j<26; j++)
            {
                if(a[i]==letter[j])
                freq[j]++;
            }
        }
        max=-1;
        for(i=0; i<26; i++)
        {
            if(freq[i]>max)
            max=freq[i];
        }
        for(i=0; i<26; i++)
        {
            if(freq[i]==max)
            cout<<letter[i];
        }

        cout<<endl;
        c++;
    }
}
