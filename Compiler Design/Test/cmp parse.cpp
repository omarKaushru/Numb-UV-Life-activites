# include <stdio.h>
# include <string.h>
char  grammer[3][10]={"SS+","SS*" ,"S"};

int main()
{
    char stack[100],a[100],temp1[10],temp2[10],temp3[10],temp4[50], flag1=0,flag2=1;
    int length,i,j;
    while(gets(a))
    {
        puts(a);
        flag1=0,flag2=1;
        int length=strlen(a);
        for(i=0; i<length; i++)
        {
            if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
            {
                stack[i]='S';
                stack[i+1]='\0';
            }
            if(a[i]=='+')
            {
                stack[i]='+';
                stack[i+1]='\0';
            }
            if(a[i]=='*')
            {
                stack[i]='*';
                stack[i+1]='\0';
            }
            puts(stack);
        }
        int k=0;
        while(k<10)
        {
            k++;
            j=0;
            length=strlen(stack);
            if(length>1)
            {
                int lg0=strlen(grammer[0]);
                int lg1=strlen(grammer[1]);
                for(i=0; i<lg0; i++)
                {
                    temp1[i]=stack[i];
                }
                temp1[i]='\0';
                for(i=0; i<lg1; i++)
                {
                    temp2[i]=stack[i];
                }
                temp2[i]='\0';
                if(strcmp(grammer[0],temp1)==0 || strcmp(grammer[1],temp1)==0)
                {
                    flag1=1;
                    j=1;
                    temp4[0]='S';
                    for(i=lg0; i<length; i++)
                    {
                        temp4[j]=stack[i];
                        stack[j-1]=stack[i];
                        j++;
                    }
                    stack[j-1]='\0';
                    temp4[j]='\0';
                    printf("\nhi\n");
                    puts(temp4);
                }
                else if(strcmp(grammer[0],temp2)==0 || strcmp(grammer[1],temp2)==0)
                {
                    flag1=1;
                    j=1;
                    temp4[0]='S';
                    for(i=lg1; i<length; i++)
                    {
                        temp4[j]=stack[i];
                        stack[j-1]=stack[i];
                        j++;
                    }
                    stack[j-1]='\0';
                    temp4[j]='\0';
                    puts(temp4);
                }
                else
                {
                    printf("\nInvalid_1");
                    flag2=0;
                }
            }
            else if(length==1)
            {
                if(strcmp(stack,grammer[2])==0)
                {
                    puts(stack);
                    printf("\nvalid_2");
                    flag1=1;
                    break;
                }
                else
                {
                    printf("\nInvalid_3");
                    flag2=0;
                }
            }
        }
    }
}

