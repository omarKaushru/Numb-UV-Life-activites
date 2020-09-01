
#include <string.h>
#include <stdio.h>
int main()
{
    int t, y1,y2,d1,d2,i,j,k,c,my1,my2;
    char m1[15],m2[15];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        c=0;
        scanf("%s %d,%d",&m1,&d1,&y1);
        scanf("%s %d,%d",&m2,&d2,&y2);
        if((strcmp(m1,"January")==0) || (strcmp(m1,"February")==0))
        my1=y1;
        else
        my1=y1+1;
        if((strcmp(m2,"January")==0) || ((strcmp(m2,"February")==0) && d2<=28))
        my2=y2-1;
        else
        my2=y2;
        for(j=my1; j<=my2; j++)
        {
            if(((j%4==0) && (j%100)!=0) || (j%400)==0)
            {
                c++;
            }
        }
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}
