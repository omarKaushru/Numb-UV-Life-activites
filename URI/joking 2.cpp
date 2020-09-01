#include <cstdio>
int main()
{
    int i,c=5;
    for(i=0; i<5; i++)
    {
        for(int j=0; j<i+1; j++)
        printf(" ");
        for(int k=1; k<=c; k++)
        printf("%d",k);
        printf("\n");
        c--;
    }
    c=2;
    int l=4;
    for(i=0; i<3; i++)
    {
        for(int j=1; j<l+1; j++)
        printf(" ");
        for(int k=1; k<=c; k++)
        printf("%d",k);
        printf("\n");
        c++;
        l--;
    }
    return 0;
}
