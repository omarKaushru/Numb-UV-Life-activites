///Accepted
#include <stdio.h>
int main()
{
    int freq[200], i, j, k,t, test_case;
    char ch[200];

    while(scanf("%d ", &test_case)==1)
    {
        for(t=1; t<=test_case; t++)
        {   k=0;
            while(scanf("%c", &ch[k])==1)
            {
                if(ch[k]=='\n')
                {
                     printf("Case %d: ", t);

                     for(i=0; i<k; i++)
                     {
                         for(j=0; j<freq[i]; j++)
                         {
                             printf("%c", ch[i]);
                         }
                     }
                     printf("\n");
                    break;
                }
                scanf("%d", &freq[k++]);
            }
        }
    }
    return 0;
}
