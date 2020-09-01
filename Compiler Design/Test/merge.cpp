#include <iostream>
using namespace std;
int a[30],p,q,r;

void merge_sort(int a,int p, int r)
{
    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        void merge(a,p,q,r);
    }
}
void merge(int a,int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-p;
    int l[121],r[121];
    for(int i=1; i<=n1; i++)
    l[i]=a[p+i-1];
    for(int j=1; j<=n2; j++)
    r[j]=a[q+j];
    l[n1+1]=99999999;
    r[n2+1]=99999999;
    int i=1,j=1;
    for(k=p; k<=r; k++)
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r[j];
            j++;
        }
    }
}
int main()
{
    int i,n;
    cin>>n;
    p=1; r=n;
    for(i=1; i<=n; i++)
    cin>>a[i];
    merge_sort(a,p,r)
    for(i=1; i<=n; i++)
    cou<<a[i]<<" ";
    return 0;
}
