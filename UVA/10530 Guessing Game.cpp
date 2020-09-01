///Accepted
#include <stdio.h>
#include <string.h>
int main()
{
int n,a[12]={0},i;
char str[20];
while(scanf("%d",&n) && n)
{
getchar();
gets(str);

if(strcmp(str,"too low")==0)
{
    for(i=n;i>=1;i--)
    a[i]=-1;
}
else if(strcmp(str,"too high")==0)
{
    for(i=n;i<=10;i++)
    a[i]=-1;
}
else
{
    if(a[n]==0)
    printf("Stan may be honest\n");
else
    printf("Stan is dishonest\n");
    for(i=0;i<=10;i++)
    a[i]=0;
}

}
return 0;
}

/*

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Lower bound and upper bound.
    int L = 1, U = 10;
    int guess;
    while (cin >> guess, guess != 0)
    {
        string response;
        cin.ignore();
        getline(cin, response);
        if (response == "too high")
            U = min(U, guess - 1);
        else if (response == "too low")
            L = max(L, guess + 1);
        else if (response == "right on")
        {
            if (guess <= U && guess >= L)
                cout << "Stan may be honest" << endl;
            else
                cout << "Stan is dishonest" << endl;
            L = 1;
            U = 10;
        }
    }
    return 0;
}

*/
