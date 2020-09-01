///Accepted
#include<bits/stdc++.h>
using namespace std;


char  mainar[1000001];
int passsz;
string ss,tmp;
map<string,int>mp;
map<string,int> :: iterator it;

int main()
{
    while(scanf("%d %s",&passsz,mainar)==2)
    {
        mp.clear();
        tmp=mainar;
        int l=strlen(mainar);
        for(int i=0; i<l-passsz+1; i++)
        {
            ss=tmp.substr(i,passsz);
            mp[ss]++;
        }
        int max=0;
       // printf("mp size %d\n",mp.size());
        for(it=mp.begin(); it!=mp.end(); it++)
        {
        //    cout<< it->first << " " << it->second << "\n";
            if(it->second>max)
            {
                max=it->second;
                ss=it->first;
            }

        }
      //  printf("%d ",max);
        cout<<ss<<"\n";

    }
    return 0;
}
