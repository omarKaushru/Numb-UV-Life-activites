/* 10050 Hartals */
#include <iostream>
using namespace std;
int main()
{
    int t,p,i,j,c=0,k,td,l,res[1000],r,n=0,q,d,w,x;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        c=n=d=0;
        cin>>td>>p;
        for(l=1; l<=p; l++)
        {
            cin>>i;
            for(j=1; i*j<=td; j++)
            {
                if((i*j)%7!=0 && (i*j)%7!=6)
                {
                res[n]=i*j;
                n++;
                }
            }
        }
        for(w=0; w<n-1; w++)
            {
                for(x=w+1; x<n; x++)  // Comparing to findout same value. If found then increment the counter..
                {
                    if(res[w]==res[x])
                    {
                        d++;
                    }
                }
            }
       cout<<n-d<<endl;
  }
return 0;
}
