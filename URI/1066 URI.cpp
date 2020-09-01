#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c1=0,c2=0,c3=0,c4=0,n;
    for(int i=1; i<=5; i++)
    {
        cin>>n;
        if(n%2==0)
        c1++;
        else
        c2++;
        if(n<0)
        c4++;
        else if(n>0)
        c3++;
    }
    cout<<c1<<" valor(es) par(es)"<<endl;
    cout<<c2<<" valor(es) impar(es)"<<endl;
    cout<<c3<<" valor(es) positivo(s)"<<endl;
    cout<<c4<<" valor(es) negativo(s)"<<endl;
    return 0;
}
