///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hh,mm;
    float h,m,mh,cal,ans,t;
    while(scanf("%2d:%2d",&hh,&mm)==2)
    {
        if(!(hh+mm))
        break;

        h=float(hh*30+mm*.5);
        m=mm*6;
        ans=abs(h-m);
        if(ans>180)
        {
            ans=360-ans;
            //cout<<ans<<endl;
            printf("%.3f\n",ans);
        }
        else
        printf("%.3f\n",ans);
     //   cout<<hh<<":"<<mm<<endl;
    }
}
