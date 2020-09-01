///Time limit
#include <bits/stdc++.h>
using namespace std;
int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool is_leap(int year)
{
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}
int main()
{
    int tc,yy,dd,mm,add,i,j,l,y,cs=0;
    bool done;
    while(cin>>add>>dd>>mm>>yy)
    {
        if(add==0 && dd==0 && mm==0 && yy==0)
        break;
        done=false;

        for(y=yy; ; y++)
        {
            for(i=mm; i<=12; i++)
            {
                l=days[i-1];
                if(is_leap(y) && i==2)
                    l++;
                for(j=dd+1; j<=l; j++)
                {
                    add--;
                    if(add==0)
                    {
                        done=true;
                        cout<<j<<" "<<i<<" "<<y<<endl;
                    }
                }
                if(done)
                    break;
                dd=0;
            }
            if(done)
                break;
            mm=1;
        }
    }
    return 0;
}
