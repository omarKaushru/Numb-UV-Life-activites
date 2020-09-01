#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2,counter=0,t,p;
    char c,s[100];
    while(scanf("%d%c%d=%s",&num1,&c,&num2,s)==4)
    {
        //cout<<num1<<" "<<c<<" "<<num2<<"="<<s<<endl;
        if(c=='+')
        {
            t=num1+num2;
            p=atoi(s);
            if(p==t)
            counter++;
        }
        else if(c=='-')
        {
            t=num1-num2;
            p=atoi(s);
            if(p==t)
            counter++;
        }
    }
    cout<<counter<<endl;
}
