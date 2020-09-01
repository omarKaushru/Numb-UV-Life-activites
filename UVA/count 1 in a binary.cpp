#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, binary, rem, n,c,k;
    cin>>n;
    i=1,binary=0;
     while (n!=0)
    {
        rem=n%2;
        n=n/2;
        binary=binary+rem*i;
        i=i*10;
    }
    cout<<"Binary :"<<binary<<endl;
    c=rem=0;
    while (binary!=0)
    {
        rem=binary%10;
        binary=binary/10;
        if(rem==1)
        c++;
    }
    cout<<"Total one: "<<c;
    return 0;
}
