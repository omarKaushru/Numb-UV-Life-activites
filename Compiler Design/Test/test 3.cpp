# include <stdio.h>
# include <string.h>
char  grammer[3][10]={"SS+","SS*" ,"S"};

int main()
{
    char stack[100],a[100],temp1[10],temp2[10],temp3[10],temp4[50], flag1=0,flag2=1;
    int length,i,j,x,y,fx,fy;
    while(gets(a))
    {
        fx=0,fy=0;
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
                    stack[0]='S';
                    for(i=lg0; i<length; i++)
                    {
                        //temp4[j]=stack[i];
                        stack[j]=stack[i];
                        j++;
                    }
                    stack[j]='\0';
                    //temp4[j]='\0';
                   // printf("\nhi stack\n");
                    puts(stack);
                    //puts(temp4);
                }
                else if(strcmp(grammer[0],temp2)==0 || strcmp(grammer[1],temp2)==0)
                {
                    flag1=1;
                    j=1;
                    stack[0]='S';
                    for(i=lg1; i<length; i++)
                    {
                        //temp4[j]=stack[i];
                        stack[j]=stack[i];
                        j++;
                    }
                    stack[j]='\0';
                    //temp4[j]='\0';
                    puts(stack);
                }
                else if(length>1)
                {
                    fx=0,fy=0;
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
            }
            else if(length==1)
            {
                if(strcmp(stack,grammer[2])==0)
                {
                    strcpy(temp4,stack);
                    //puts(temp4);
                    //printf("\nvalid_2");
                    break;
                }
            }
        }
    }
}

