# include <stdio.h>
# include <string.h>
char  grammer[3][10]={"SS+","SS*" ,"id"};
char stack[100];
int main()
{
    char a[100],temp1[10],temp2[10];
    int length,i,j,x,flag;
    while(gets(a))
    {
        printf("\n");
        flag=1;
        int length=strlen(a);
        for(i=0; i<length; i++)
        {
            x=0;
            if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
            {
                stack[i]='S';
                stack[i+1]='\0';
            }
            else if(a[i]=='+' && i>1) ///i>1 this condition to check a*aa+ such case
            {
                stack[i]='+';
                stack[i+1]='\0';
            }
            else if(a[i]=='*' && i>1)
            {
                stack[i]='*';
                stack[i+1]='\0';
            }
            else
            {
                flag=0;
                break;
            }
            puts(stack);
        }
        while(flag!=0)
        {
                j=0;
                length=strlen(stack);
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
                    j=1;
                    stack[0]='S';
                    for(i=lg0; i<length; i++)
                    {
                        stack[j]=stack[i];
                        j++;
                    }
                    stack[j]='\0';
                    puts(stack);
                }
                else if(strcmp(grammer[0],temp2)==0 || strcmp(grammer[1],temp2)==0)
                {
                    j=1;
                    stack[0]='S';
                    for(i=lg1; i<length; i++)
                    {
                        stack[j]=stack[i];
                        j++;
                    }
                    stack[j]='\0';
                    puts(stack);
                }
                else
                {
                    for(i=0; i<length; i++)
                    {
                        if(stack[i]=='+' || stack[i]=='*')
                        {
                            x=i;
                            break;
                        }
                    }
                    stack[0]='S';
                    j=1;
                    for(i=(x-1); i<length; i++)
                    {
                        stack[j]=stack[i];
                        j++;
                    }
                    stack[j]='\0';
                    puts(stack);
            }
            if(length==1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
        printf("\n the expression : ");
        puts(a);
        printf("is valid.\n");
        }
        else if(flag==0)
        {
            printf("\n the expression : ");
            puts(a);
            printf("is not a valid expression.\n");
        }
    }
    return 0;
}

