#include<stdio.h>
#include<conio.h>
struct list{
       int value;
       struct list *next;
       };
       main(){
              struct list n1,n2,n3,n4;
              struct list *list_pointer=&n1;
              //for(n.value=1;n.vlue<=5;n.value++){
                //                                 scanf("
              n1.value=100;
              n1.next=&n2;
              n2.value=200;
              n2.next=&n3;
              n3.value=300;
              n3.next=&n4;
              n4.value=400;
              n4.next=0;
              while(list_pointer!=0){
              printf("%d\n",list_pointer->value);
              list_pointer=list_pointer->next;
              }
              getch();
              }
