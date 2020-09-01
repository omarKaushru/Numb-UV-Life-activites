///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int channel_1,channel_2,temp1,temp2,temp3;
    while(cin>>channel_1>>channel_2)
    {
        if(channel_1<0 && channel_2<0)
        break;

        temp1=abs(channel_1-channel_2);
        temp2=abs(100-channel_1)+channel_2;
        temp3=abs(100-channel_2)+channel_1;

        if(temp1<temp2 && temp1<temp3)
        cout<<temp1<<endl;
        else if(temp2<temp3)
        cout<<temp2<<endl;
        else
        cout<<temp3<<endl;
    }
    return 0;
}
