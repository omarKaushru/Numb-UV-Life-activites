#include<stdio.h>
#include<conio.h>
main(){
    int n,array[1000],c,d,t;
    printf("enter element \n");
    scanf("%d",&n);
    printf("enter %d integers\n",n);
    for(c=0;c<n;c++){
    scanf("%d",&array[c]);
}
                   for(c=0;c<=n-1;c++){
                   d=c;
                   while(d>0&&array[d]<array[d-1]){
                   t=array[d];
                   array[d]=array[d-1];
                   array[d-1]=t;
                   d--;
                   }
                   }
                   printf("store list in ascending order:\n");
                   for(c=0;c<=n-1;c++){
                   printf("%d\n",array[c]);
                   }
                   getch();
                   }
                 
