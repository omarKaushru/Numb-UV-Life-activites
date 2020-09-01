///Accepted

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int c1=0,c2=0;
        cin>>n;
        char b1[1000], b2[1000];
        int temp1=n;
        int temp2=n;
        int i=0;
        while(1)
        {
            b1[i]=temp1%2+'0';
            temp1=temp1/2;
            i++;
            if(temp1==0)
            break;
        }
        b1[i]='\0';

        i=0;
        while(1)
        {
            int temp3;
            temp3=temp2%10;
            temp2=temp2/10;
            while(1)
            {
                b2[i]=temp3%2+'0';
                temp3=temp3/2;
                i++;
                if(temp3==0)
                break;
            }
            if(temp2==0)
            break;
        }
        b2[i]='\0';

        for(i=0; b1[i]!='\0'; i++)
        {
            if(b1[i]=='1')
            c1++;
        }

        for(i=0; b2[i]!='\0'; i++)
        {
            if(b2[i]=='1')
            c2++;
        }

        cout<<c1<<" "<<c2<<endl;
    }
    return 0;
}
