///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f,height;
    int i;
    while(cin>>h>>u>>d>>f)
    {
        if((h+u+d+f)==0)
        break;
        f=f*(u/100);
        height=0.0;
        i=0;
        while(1)
        {
            i++;
            if(u>0)
            height=height+u;
            u=u-f;
            if(height>h)
            break;
            height=height-d;
            if(height<0)
            break;
        }
        if(height>=0)
        cout<<"success on day "<<i<<endl;
        else
        cout<<"failure on day "<<i<<endl;
    }
    return 0;
}
