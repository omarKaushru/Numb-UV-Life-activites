#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char num[10001],c[32][10]={"auto","break","case","char","const",
    "continue","default","do","double","else","enum","extern","float",
    "for","goto","if","int","long","register","return","short","signed",
    "sizeof","static","struct","switch","typedef","union","unsigned",
    "void","volatile","while"};
    int l,i,j;
    while(gets(num))
    {
        l=strlen(num);
        int con=0,identifier=0,iden=0,fraction=0,invalid=0,keyword=0;
        for(i=0; i<l; i++)
        {
            for(j=0; j<32; j++)
            if(strcmp(c[j],num)==0)
            {
			keyword=1;
			break;
			}
			if(keyword==1)
			break;
            ///This condition to check such case !aa,@aa,@22 and so on
            if((num[i]>=33 && num[i]<=47)||(num[i]>=58 && num[i]<=64)||(num[i]>=91 && num[i]<=96) || (num[i]>=123 && num[i]<=126))
            {
                invalid=1;
            }
            if((num[0]>='a' && num[0]<='z') || (num[0]>='A' && num[0]<='Z'))
            {
                identifier=1;
                ///This condition to check such case aa.aa, aa]aa, aa>aa and so on
                if((num[i]>=33 && num[i]<=47)||(num[i]>=58 && num[i]<=64)||(num[i]>=91 && num[i]<=96) || (num[i]>=123 && num[i]<=126))
                {
                    iden++;
                    break;
                }
            }
            switch(num[i])
            {
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                con++;
                break;
                case '.':
                fraction++;
            }
            if(((num[0]>='0' && num[0]<='9')))
            {
                if(i>0 && ((num[i]>='a' && num[i]<='z') || (num[i]>='A' && num[i]<='Z')))
                {
                    invalid=1;
                    break;
                }
            }
        }

        if(con==l)
        cout<<num<<" is Constant.\n";
        else if(fraction==1 && con==(l-1))
        cout<<num<<" is Fractional Constant.\n";
        else if(identifier==1 && iden==0 && keyword!=1)
        cout<<num<<" is Identifier.\n";
        else if(keyword==1)
        cout<<num<<" is Keyword.\n";
        else if(fraction>1 || invalid==1 || iden!=0)
        cout<<num<<" is invalid.\n";
    }
    return 0;
}
