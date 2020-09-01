///Very poor algorithm
#include <bits/stdc++.h>
using namespace std;
main()
{
    int i,j,r,s;
    char p[30],t[90];
        gets(p);
        gets(t);
        r=strlen(p);
        s=strlen(t);
        int k, max,flag,index;
        max=s-r+1;
        k=1;
        while(k<=max)
        {
            for(int l=1; l<=r; l++)
            {
            if(p[l]!=t[k+l-1])
            goto step_5;
            else
            {
                 index=k;
                 flag=1; ///here the variable flag is to check the fact ture or false;
            }

            step_5:
            k++;
        }
    }
    if(flag==1)
        cout<<index;
        else
        cout<<"Invalid\n";
    return 0;
}
