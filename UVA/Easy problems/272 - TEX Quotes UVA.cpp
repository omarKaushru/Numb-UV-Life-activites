///	Accepted
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int i,j,l,c;
    char str[10001];
    c=0;
    while(gets(str))
    {
        l=0;
        l=strlen(str);
        for(i=0; i<l; i++)
        {
            if(str[i]=='"')
            {
                c++;
                if(c%2==0)
                cout<<"''";
                else
                cout<<"``";
            }
            else cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
