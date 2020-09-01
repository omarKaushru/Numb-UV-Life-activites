#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char c[150],ch;
    int i,count=0;
    printf("entr your string: ");
    gets(c);
    printf("enter a charecter to find frequency: ");
    scanf("%c",&ch);
    for(i=0;c[i]!='\0';++i)
    {
        if(ch==c[i])
            ++count;
    }
    printf("%c=%d",ch,count);
    getch();
}
