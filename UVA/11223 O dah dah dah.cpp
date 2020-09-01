///Accepted
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

#define sc scanf
#define pr printf
#define LL long long
#define L long
#define cm strcmp

using namespace std;

void fun(char s[])
{
    if(cm(s,".-")==0)
        pr("A");
    else if(cm(s,"-...")==0)
        pr("B");
    else if(cm(s,"-.-.")==0)
        pr("C");
    else if(cm(s,"-..")==0)
        pr("D");
    else if(cm(s,".")==0)
        pr("E");
    else if(cm(s,"..-.")==0)
        pr("F");
    else if(cm(s,"--.")==0)
        pr("G");
    else if(cm(s,"....")==0)
        pr("H");
    else if(cm(s,"..")==0)
        pr("I");
    else if(cm(s,".---")==0)
        pr("J");
    else if(cm(s,"-.-")==0)
        pr("K");
    else if(cm(s,".-..")==0)
        pr("L");
    else if(cm(s,"--")==0)
        pr("M");
    else if(cm(s,"-.")==0)
        pr("N");
    else if(cm(s,"---")==0)
        pr("O");
    else if(cm(s,".--.")==0)
        pr("P");
    else if(cm(s,"--.-")==0)
        pr("Q");
    else if(cm(s,".-.")==0)
        pr("R");
    else if(cm(s,"...")==0)
        pr("S");
    else if(cm(s,"-")==0)
        pr("T");
    else if(cm(s,"..-")==0)
        pr("U");
    else if(cm(s,"...-")==0)
        pr("V");
    else if(cm(s,".--")==0)
        pr("W");
    else if(cm(s,"-..-")==0)
        pr("X");
    else if(cm(s,"-.--")==0)
        pr("Y");
    else if(cm(s,"--..")==0)
        pr("Z");
    else if(cm(s,"-----")==0)
        pr("0");
    else if(cm(s,".----")==0)
        pr("1");
    else if(cm(s,"..---")==0)
        pr("2");
    else if(cm(s,"...--")==0)
        pr("3");
    else if(cm(s,"....-")==0)
        pr("4");
    else if(cm(s,".....")==0)
        pr("5");
    else if(cm(s,"-....")==0)
        pr("6");
    else if(cm(s,"--...")==0)
        pr("7");
    else if(cm(s,"---..")==0)
        pr("8");
    else if(cm(s,"----.")==0)
        pr("9");
    else if(cm(s,".-.-.-")==0)
        pr(".");
    else if(cm(s,"--..--")==0)
        pr(",");
    else if(cm(s,"..--..")==0)
        pr("?");
    else if(cm(s,".----.")==0)
        pr("'");
    else if(cm(s,"-.-.--")==0)
        pr("!");
    else if(cm(s,"-..-.")==0)
        pr("/");
    else if(cm(s,"-.--.")==0)
        pr("(");
    else if(cm(s,"-.--.-")==0)
        pr(")");
    else if(cm(s,".-...")==0)
        pr("&");
    else if(cm(s,"---...")==0)
        pr(":");
    else if(cm(s,"-.-.-.")==0)
        pr(";");
    else if(cm(s,"-...-")==0)
        pr("=");
    else if(cm(s,".-.-.")==0)
        pr("+");
    else if(cm(s,"-....-")==0)
        pr("-");
    else if(cm(s,"..--.-")==0)
        pr("_");
    else if(cm(s,".-..-.")==0)
        pr("\"");
    else if(cm(s,".--.-.")==0)
        pr("@");
}

int main()
{
    char s[2010];

    char x[2010];

    int n,p;
    sc("%d",&n);
    cin.ignore();
    for(int i=1;i<=n;i++)
    {
        if(i>1)
            pr("\n");
        gets(s);
        pr("Message #%d\n",i);
        for(int j=0;s[j]!='\0';){
            if(s[j]!=32){
                p=0;
                for(;s[j]!='\0';j++)
                {
                    if(s[j]==32)
                    {
                        j++;
                        break;
                    }
                    else
                    {
                    x[p++]=s[j];
                    }
                }
                x[p]='\0';
                fun(x);
                }
                else
                {
                pr("%c",s[j]);
                j++;
                }
            }
            pr("\n");
        }
    return 0;
}//Code Ends
