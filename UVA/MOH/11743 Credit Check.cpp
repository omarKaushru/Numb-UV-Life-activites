///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[5],b[5],c[5],d[5];
    int t,i,j,k,x,y,z,val,sum1,sum2,sumt;
    while(cin>>t)
    {
        for(int count=1;count<=t;count++)
        {
            cin>>a>>b>>c>>d;
            sum1=sum2=sumt=0;
            sum1+=((a[0]-48)*2)/10+((a[0]-48)*2)%10+((a[2]-48)*2)/10+((a[2]-48)*2)%10;
            //cout<<sum1<<" ";
            sum1+=((b[0]-48)*2)/10+((b[0]-48)*2)%10+((b[2]-48)*2)/10+((b[2]-48)*2)%10;
            //cout<<sum1<<" ";
            sum1+=((c[0]-48)*2)/10+((c[0]-48)*2)%10+((c[2]-48)*2)/10+((c[2]-48)*2)%10;
          //  cout<<sum1<<" ";
            sum1+=((d[0]-48)*2)/10+((d[0]-48)*2)%10+((d[2]-48)*2)/10+((d[2]-48)*2)%10;
        //    cout<<sum1<<" ";
            sum2=a[1]-48+a[3]-48+b[1]-48+b[3]-48+c[1]-48+c[3]-48+d[1]-48+d[3]-48;
      //      cout<<"sum2 "<<sum2<<" ";
            sumt=sum1+sum2;
    //        cout<<"Smut"<<sumt<<endl;
            if(sumt%10==0)
            cout<<"Valid"<<endl;
            else
            cout<<"Invalid\n";
        }
    }
    return 0;
}
