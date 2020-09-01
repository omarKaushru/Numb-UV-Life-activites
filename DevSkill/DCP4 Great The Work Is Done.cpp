///Accepted
#include<cstdio>
#include<cmath>
#define sf scanf
#define pf printf
#define tc(n) for(int i=1;i<=n;i++)
#define loop(i,n) for(i;i<n;i++)
#define sq(a) (a)*(a)
#define pi acos(-1)
#define pb push_back
typedef long long int ll;
typedef double dl;
typedef float fl;
#define array(n) for(int ar=0;ar<n;ar++)

using namespace std;
int main()
{
    double h,a;
    int n;
    while(~sf("%lf %d",&h,&n))
    {
        dl sum=0.0;
        array(n)
        {
            sf("%lf",&a);sum+=a;
        }
        dl m=ceil(h/sum);
        if(m==1)
            pf("Project will finish within 1 day.\n");
        else
            pf("Project will finish within %.0lf days.\n",m);
    }
}
