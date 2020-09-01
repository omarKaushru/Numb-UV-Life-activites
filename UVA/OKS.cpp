#include <stdio.h>
int main()
{
    char mn[30],s[10],sn[10];
    int i,j,n;
    while(scanf("%s",&mn))
    {
        n=0;
        for(i=0; mn[i]!='\0'; i++)
        {
            if(i==0 && mn[i]!=32)
            sn[n]=mn[i];
            else if(mn[i]==32 && mn[i]!=32)
            sn[n]=mn[i+1];
            n++;
        }
        printf("%s", sn);
    }
    return 0;
}
