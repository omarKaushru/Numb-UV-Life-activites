#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
inline int in()
{
    int x;
    scanf("%d",&x);
    return x;
}
inline ll lin()
{
    ll x;
    scanf("%lld",&x);
    return x;
}
const char* nam[]={"N","Bangladesh","Bir Srestho Mohiuddin Jahangir","Bir Srestho Hamidur Rahman",
                    "Bir Srestho Mostafa Kamal","Bir Srestho Mohammad Ruhul Amin","Bir Srestho Matiur Rahman",
                    "Bir Srestho Munshi Abdur Rouf","Bir Srestho Noor Mohammad Sheikh"};
int main()
{
    int n,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        cout<<"Case"<<i<<": "<<nam[n]<<endl;
    }
}
