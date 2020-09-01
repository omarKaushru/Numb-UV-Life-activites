///Accepted

#include<bits/stdc++.h>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

int main()
{
    int kk=1, tc, n, mem[105];
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>s;
        int sl=s.size();
        CLR(mem);
        int p=0;
        for(int i=0;i<sl;i++)
        {
            if(s[i]=='>')
            p=(p+1)%100;

            else if(s[i]=='<')
            p=(p-1+100)%100;

            else if(s[i]=='+')
            mem[p]=(mem[p]+1)%256;

            else if(s[i]=='-')
            mem[p]=(mem[p]-1+256)%256;

        }
        cout<<"Case "<<kk++<<":";
        for(int i=0;i<100;i++)
            printf(" %02X", mem[i]);
        cout<<'\n';
    }

    return 0;
}
