///Accepted

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,count,l,flag;
    char str[20];
    while(gets(str))
    {
        count=0,flag=0;
        l=strlen(str);
        for(i=0; i<l; i++)
        {
            switch(str[i])
            {
                case 'a':
                count=count+1;
                break;
                case 'A':
                count=count+27;
                break;
                case 'b':
                count=count+2;
                break;
                case 'B':
                count=count+28;
                break;
                case 'c':
                count=count+3;
                break;
                case 'C':
                count=count+29;
                break;
                case 'd':
                count=count+4;
                break;
                case 'D':
                count=count+30;
                break;
                case 'e':
                count=count+5;
                break;
                case 'E':
                count=count+31;
                break;
                case 'f':
                count=count+6;
                break;
                case 'F':
                count=count+32;
                break;
                case 'g':
                count=count+7;
                break;
                case 'G':
                count=count+33;
                break;
                case 'h':
                count=count+8;
                break;
                case 'H':
                count=count+34;
                break;
                case 'i':
                count=count+9;
                break;
                case 'I':
                count=count+35;
                break;
                case 'j':
                count=count+10;
                break;
                case 'J':
                count=count+36;
                break;
                case 'k':
                count=count+11;
                break;
                case 'K':
                count=count+37;
                break;
                case 'l':
                count=count+12;
                break;
                case 'L':
                count=count+38;
                break;
                case 'm':
                count=count+13;
                break;
                case 'M':
                count=count+39;
                break;
                case 'n':
                count=count+14;
                break;
                case 'N':
                count=count+40;
                break;
                case 'o':
                count=count+15;
                break;
                case 'O':
                count=count+41;
                break;
                case 'p':
                count=count+16;
                break;
                case 'P':
                count=count+42;
                break;
                case 'q':
                count=count+17;
                break;
                case 'Q':
                count=count+43;
                break;
                case 'r':
                count=count+18;
                break;
                case 'R':
                count=count+44;
                break;
                case 's':
                count=count+19;
                break;
                case 'S':
                count=count+45;
                break;
                case 't':
                count=count+20;
                break;
                case 'T':
                count=count+46;
                break;
                case 'u':
                count=count+21;
                break;
                case 'U':
                count=count+47;
                break;
                case 'v':
                count=count+22;
                break;
                case 'V':
                count=count+48;
                break;
                case 'w':
                count=count+23;
                break;
                case 'W':
                count=count+49;
                break;
                case 'x':
                count=count+24;
                break;
                case 'X':
                count=count+50;
                break;
                case 'y':
                count=count+25;
                break;
                case 'Y':
                count=count+51;
                break;
                case 'z':
                count=count+26;
                break;
                case 'Z':
                count=count+52;
                break;
            }
        }
        for(j=2; j<count; j++)
        {
            if(count%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<"It is a prime word."<<endl;
        else
        cout<<"It is not a prime word."<<endl;
    }
    return 0;
}
