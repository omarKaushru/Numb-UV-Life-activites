///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000];

    while(gets(str))
    {
        int i,c=0;
        for(i=0; str[i]!='\0'; i++)
        {
            if((str[i]==32 && ((str[i-1]>=65 && str[i-1]<=90) || (str[i-1]>=97 && str[i-1]<=122)))|| (str[i+1]=='\0' && ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))))
            c++;
            if((str[i+1]>=33 && str[i+1]<=64) && ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)))
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}


/*
//Shortcut method


    if(((name[i]>='a'&& name[i]<='z')||(name[i]>='A' && name[i]<='Z'))&&
          (name[i+1]<'a' || name[i+1]>'z') &&
           (name[i+1]<'A' || name[i+1]>'Z')
      )
          p++;
      printf("%d\n",p);



*/
