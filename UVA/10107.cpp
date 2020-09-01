#include <iostream>
using namespace std;
int main()
{
    int x,y,a[1000],i=1,temp,k,j,z,r;
    while(cin>>x)
    {
        a[i]=x;
        if(i==1)
        cout<<a[i]<<endl;
        else
        {
            for(j=1; j<=i; j++)
            {
                for(k=j+1; k<=i; k++)
                {
                    if(a[k]<a[j])
                    {
                        temp=a[k];
                        a[k]=a[j];
                        a[j]=temp;
                    }
                }
            }
            if((i%2)!=0)
            {
                z=i/2;
                cout<<a[z+1]<<endl;
            }
            else
            {
                z=i/2;
                cout<<((a[z]+a[z+1])/2)<<endl;
            }

        }
        i++;
    }
    return 0;
}
