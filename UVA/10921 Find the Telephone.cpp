///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char expr[31];
    while(gets(expr))
    {
        for(int i=0; expr[i]!='\0';i++)
        {
            switch(expr[i])
            {
                case 'A':
                case 'B':
                case 'C':
                cout<<"2";
                break;
                case 'D':
                case 'E':
                case 'F':
                cout<<"3";
                break;
                case 'G':
                case 'H':
                case 'I':
                cout<<"4";
                break;
                case 'J':
                case 'K':
                case 'L':
                cout<<"5";
                break;
                case 'M':
                case 'N':
                case 'O':
                cout<<"6";
                break;
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                cout<<"7";
                break;
                case 'T':
                case 'U':
                case 'V':
                cout<<"8";
                break;
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                cout<<"9";
                break;
                default:
                cout<<expr[i];
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}
