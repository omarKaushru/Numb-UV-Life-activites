///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a,c=0;
    int b=0;
    while(cin>>a)
    {
        if(a>=0 && a<=10)
        {
            c=c+a;
            b++;
        }
        else
        cout<<"nota invalida\n";
        if(b==2)
        {
            printf("media = %.2f\n",(c/2));
            break;
        }
    }
}
