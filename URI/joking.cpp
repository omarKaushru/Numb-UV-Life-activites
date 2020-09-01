#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int x,y;
cin>>x>>y;

    if(x==1){
      printf("Total: R$ %.2lf\n",y*4.0);

    }
else if(x==2){
      printf("Total: R$ %.2lf\n",y*4.50);
    }
else if(x==3){
        printf("Total: R$ %.2lf\n",y*5.0);
    }
else if(x==4){
        printf("Total: R$ %.2lf\n",y*2.0);
    }
else if(x==5)
{
        printf("Total: R$ %.2lf\n",y*1.50);
    }
}
