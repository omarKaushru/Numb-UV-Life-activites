///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,c;
    string str;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>str;
        for(i=0; str[i]!='\0'; i++)
        {
            switch(str[i])
            {
                case'0':
                c=c+6;
                break;
                case'1':
                c=c+2;
                break;
                case'2':
                case'3':
                case'5':
                c=c+5;
                break;
                case'4':
                c=c+4;
                break;
                case'6':
                case'9':
                c=c+6;
                break;
                case'7':
                c=c+3;
                break;
                case'8':
                c=c+7;
                break;
            }
        }
        cout<<c<<" leds"<<endl;
    }
    return 0;
}
