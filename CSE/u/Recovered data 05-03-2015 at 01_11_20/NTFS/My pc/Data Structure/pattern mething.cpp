#include<conio.h>
#include<stdio.h>
#include<string.h>
main(){
     char t[111],p[33];
     int index,s,r,k,l,max;
     printf("Enter the string :");
     gets(t);
     printf("Enter the patter for match :");
     gets(p);
     s=strlen(t);
     r=strlen(p);
     k=1; max=s-r+1;
     while(k<=max){
     for(l=1; l<=r; l++){
     if(p[l]!=t[k+l-1])
     index=k;
     }
     
     //}
     k++;
     }
     printf("Index is :%d",k);
     index=0;
     getch();
     }

