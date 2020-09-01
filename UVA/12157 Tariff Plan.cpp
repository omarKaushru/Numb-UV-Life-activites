///Accepted
#include<cstdio>
int main()
{
    int T,N,t[100],i,caseno=0,mi,ju;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d",&N);
    int mi=0,ju=0;
    for(i=0;i<N;++i)
    {
        scanf("%d",&t[i]);
        mi=mi+((t[i]/30)+1);
        ju=ju+((t[i]/60+1));
    }

    mi=mi*10;
    ju=ju*15;
    if(mi<ju)
    printf("Case %d: Mile %d\n",++caseno,mi);
    else if(mi>ju)
    printf("Case %d: Juice %d\n",++caseno,ju);
    else printf("Case %d: Mile Juice %d\n",++caseno,ju);
 }
 return 0;
}
