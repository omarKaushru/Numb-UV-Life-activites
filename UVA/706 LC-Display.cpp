///Accepted
#include <bits/stdc++.h>
using namespace std;

char a[1000][1000];

void one(int s, int pos){
                        int m,i,j,x,y,p,q;
                        x=s+2;
                        y=2*s+3;
                        m=(y+1)/2;
                        p=(x*(pos-1))+pos;
                        q=p+x-1;
                        for(i=2;i<y;i++)
                            if(i!=m) a[i][q]='|';
                        }
void two(int s, int pos){
                        int m,i,j,x,y,p,q;
                        x=s+2;
                        y=2*s+3;
                        m=(y+1)/2;
                        p=(x*(pos-1))+pos;
                        q=p+x-1;
                        for(i=2;i<m;i++)
                            a[i][q]='|';
                        for(i=m+1;i<y;i++)
                            a[i][p]='|';
                        for(j=p+1;j<q;j++)
                            {
                            a[1][j]='-';
                            a[m][j]='-';
                            a[y][j]='-';
                            }
                        }
void three(int s, int pos){
                        int m,i,j,x,y,p,q;
                        x=s+2;
                        y=2*s+3;
                        m=(y+1)/2;
                        p=(x*(pos-1))+pos;
                        q=p+x-1;
                        for(i=2;i<y;i++)
                            if(i!=m) a[i][q]='|';
                        for(j=p+1;j<q;j++)
                            {
                            a[1][j]='-';
                            a[m][j]='-';
                            a[y][j]='-';
                            }
                        }
void four(int s, int pos){
                        int m,i,j,x,y,p,q;
                        x=s+2;
                        y=2*s+3;
                        m=(y+1)/2;
                        p=(x*(pos-1))+pos;
                        q=p+x-1;
                        for(i=2;i<m;i++)
                            a[i][p]='|';
                        for(i=2;i<y;i++)
                            if(i!=m) a[i][q]='|';
                        for(j=p+1;j<q;j++)
                            a[m][j]='-';
                        }
void five(int s, int pos){
                        int m,i,j,x,y,p,q;
                        x=s+2;
                        y=2*s+3;
                        m=(y+1)/2;
                        p=(x*(pos-1))+pos;
                        q=p+x-1;
                        for(i=2;i<m;i++)
                            a[i][p]='|';
                        for(i=m+1;i<y;i++)
                            if(i!=m) a[i][q]='|';
                        for(j=p+1;j<q;j++)
                            {
                            a[1][j]='-';
                            a[m][j]='-';
                            a[y][j]='-';
                            }
                        }
void six(int s, int pos){
                        int m,i,j,x,y,p,q;
                        x=s+2;
                        y=2*s+3;
                        m=(y+1)/2;
                        p=(x*(pos-1))+pos;
                        q=p+x-1;
                        for(i=2;i<y;i++)
                            if(i!=m) a[i][p]='|';
                        for(i=m+1;i<y;i++)
                            a[i][q]='|';
                        for(j=p+1;j<q;j++)
                            {
                            a[1][j]='-';
                            a[m][j]='-';
                            a[y][j]='-';
                            }
                        }
void seven(int s, int pos){
                        int m,i,j,x,y,p,q;
                        x=s+2;
                        y=2*s+3;
                        m=(y+1)/2;
                        p=(x*(pos-1))+pos;
                        q=p+x-1;
                        for(i=2;i<y;i++)
                            if(i!=m) a[i][q]='|';
                        for(j=p+1;j<q;j++) a[1][j]='-';
                        }
void eight(int s, int pos){
                        int m,i,j,x,y,p,q;
                        x=s+2;
                        y=2*s+3;
                        m=(y+1)/2;
                        p=(x*(pos-1))+pos;
                        q=p+x-1;
                        for(i=2;i<y;i++)
                            if(i!=m){
                                    a[i][p]='|';
                                    a[i][q]='|';
                                    }
                        for(j=p+1;j<q;j++)
                            {
                            a[1][j]='-';
                            a[m][j]='-';
                            a[y][j]='-';
                            }
                        }
void nine(int s, int pos){
                        int m,i,j,x,y,p,q;
                        x=s+2;
                        y=2*s+3;
                        m=(y+1)/2;
                        p=(x*(pos-1))+pos;
                        q=p+x-1;
                        for(i=2;i<y;i++)
                            if(i!=m) a[i][q]='|';
                        for(i=2;i<m;i++)
                            a[i][p]='|';
                        for(j=p+1;j<q;j++)
                            {
                            a[1][j]='-';
                            a[m][j]='-';
                            a[y][j]='-'
                            ;
                            }
                        }
void zero(int s, int pos){
                        int m,i,j,x,y,p,q;
                        x=s+2;
                        y=2*s+3;
                        m=(y+1)/2;
                        p=(x*(pos-1))+pos;
                        q=p+x-1;
                        for(i=2;i<y;i++)
                            if(i!=m){
                                    a[i][p]='|';
                                    a[i][q]='|';
                                    }
                        for(j=p+1;j<q;j++)
                            {
                            a[1][j]='-';
                            a[y][j]='-';
                            }
                        }

int main()
{
int x,y,i,k,s,f,j,l;
string n;
while(cin>>s>>n)
    {
    stringstream nt(n);
    nt>>l;
    if(s==0 && l==0) return 0;
    x=s+2;
    y=2*s+3;
    f=(n.length()*x)+n.length()-1;
    for(i=1;i<=y;i++)
        for(j=1;j<=f;j++)
            a[i][j]=' ';
    for(k=0;k<n.length();k++)
        {
        if(n[k]-'0'==1) one(s,k+1);
        else if(n[k]-'0'==2) two(s,k+1);
        else if(n[k]-'0'==3) three(s,k+1);
        else if(n[k]-'0'==4) four(s,k+1);
        else if(n[k]-'0'==5) five(s,k+1);
        else if(n[k]-'0'==6) six(s,k+1);
        else if(n[k]-'0'==7) seven(s,k+1);
        else if(n[k]-'0'==8) eight(s,k+1);
        else if(n[k]-'0'==9) nine(s,k+1);
        else if(n[k]-'0'==0) zero(s,k+1);
        }
    for(i=1;i<=y;i++)
        {
        for(j=1;j<=f;j++)
            cout<<a[i][j];
        cout<<endl;
        }
    cout<<endl;
    }
return 0;
}
