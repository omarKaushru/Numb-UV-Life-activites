///Accepted

#include <iostream>
#include <string>
#include <cstdio>
#include <string>
using namespace std;
int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

int find_month(const string &m)
{
    for (int i = 0; i < 12; i++)
    {
        if (m == months[i])
            return i+1;
    }
}
bool is_leap(int year)
{
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}
int main()
{
    //freopen("input.txt","r",stdin);
    int tc,yy,dd,mm,add,i,j,l,y,cs=0;
    bool done;
    string s;
    scanf("%d",&tc);
    while(tc--)
    {
        done=false;
        cin>>yy;
        cin.ignore();
        getline(cin,s, '-');
        cin>>dd>>add;
        mm=find_month(s);
        //printf("%d %d %d\n",yy,mm,dd);
        for(y=yy;; y++)
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
                        cout<<"Case "<<++cs<<": "<<y<<"-"<<months[i-1]<<"-";
                        printf("%.2d\n",j);
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
