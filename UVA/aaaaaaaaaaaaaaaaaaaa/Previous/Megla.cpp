#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    char  s1[20],s2[20],s3[20],s4[20],substring[20],temp[20],temp3[20],temp2[20],temp4[20];
    int i,size1,size2;
    puts("Enter the String for S1:");
    gets(s1);
    puts("Enter the String for S2:");
    gets(s2);
    puts("Enter the String for S3:");
    gets(s3);
    puts("Enter the String for S4:");
    gets(s4);
    cout<<"Enter the size of the Substring of S2 and S1: ";
    cin>>size1>>size2;
    strcat(s2,s3);
    cout<<"\n";
    cout<<"S2: "<<s2;
    ///Copying the substring
    for(i=0; i<size1; i++)
    substring[i]=s2[i];
    substring[i]='\0';
    strcpy(temp,substring);

    strcpy(temp3,s3);
    strcpy(temp4,s4);
    strcat(temp,s3);
    strcpy(s4,temp);
    ///Copying the substring
    for(i=0; i<size2; i++)
    substring[i]=s1[i];
    substring[i]='\0';

    strcat(substring,s3);
    strcpy(s1,substring);
    strcpy(temp,s1);
    strcat(temp,temp4);
    strcpy(s3, temp);
    cout<<"\nS4: "<<s4<<"\nS1: "<<s1<<"\nS3: "<<s3<<endl;
}
