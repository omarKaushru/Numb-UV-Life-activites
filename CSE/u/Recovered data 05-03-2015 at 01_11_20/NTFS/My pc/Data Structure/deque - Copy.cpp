#include <stdio.h>  
#include <conio.h>
#define MAX 20  
 struct queue{  
       int x[MAX];  
       int front;  
       int rear;  
       }q;  
       void enqueueRight(int);  
       void display();  
       int dequeueLeft();  
       void enqueueLeft(int);  
       int dequeueRight();  
 int main()  
 {  
   q.front=-1;  
   q.rear=-1;  
   int ch,x,flag=1,c2;  
   printf("1.Input Restricted Deque\n2.Output Restricted Deque\n\n");   
   scanf("%d",&c2);  
   if(c2==1)  
   {  
   while(flag)  
   {  
    printf("1.Enqueue\n2.Dequeue Right\n3.Dequeue Left\n4.Display\n5.Exit\n");   
    scanf("%d",&ch);  
    switch(ch)  
    {  
     case 1:printf("Enter element:");  
        scanf("%d",&x);  
        enqueueRight(x);  
        break;  
     case 2:x=dequeueRight();  
        printf("Removed %d\n",x);  
        break;  
     case 3:x=dequeueLeft();  
        printf("Removed %d\n",x);  
        break;  
     case 4:display();  
        break;  
     case 5:flag=0;  
        break;  
     default:printf("Wrong choice\n");  
     }  
   }  
   }else if (c2==2)  
   {  
   while(flag)  
   {  
    printf("1.Enqueue Left\n2.Enqueue Right\n3.Dequeue\n4.Display\n5.Exit\n");   
    scanf("%d",&ch);  
    switch(ch)  
    {  
     case 1:printf("Enter element:");  
        scanf("%d",&x);  
        enqueueLeft(x);  
        break;  
     case 2:printf("Enter element:");  
        scanf("%d",&x);  
        enqueueRight(x);  
        break;  
     case 3:x=dequeueLeft();  
        printf("Removed %d\n",x);  
        break;  
     case 4:display();  
        break;  
     case 5:flag=0;  
        break;  
     default:printf("Wrong choice\n");  
     }  
   }  
   }else  
   {  
      printf("Wrong choice\n");  
      getch();  
   }  
 }  
 void enqueueRight(int x)  
 {  
    if(q.rear==MAX)  
    printf("Queue full from Right\n");  
    else  
    {  
    q.x[++q.rear]=x;  
    if(q.front==-1)  
    q.front=0;  
    }  
 }  
 void enqueueLeft(int x)  
 {  
    if(q.rear==-1 && q.front==-1)  
    enqueueRight(x);  
    else if(q.front==0)  
    printf("Queue full from Left\n");  
    else  
    {  
    q.x[--q.front]=x;  
    }  
 }  
 int dequeueLeft()  
 {  
   int x;  
    if(q.rear==-1 && q.front==-1)  
    printf("Queue Empty\n");  
    else if(q.front==q.rear)  
    {  
      x=q.x[q.front];  
      q.front=q.rear=-1;  
      return x;  
    }else  
    return q.x[q.front++];  
 }  
 int dequeueRight()  
 {  
   int x;  
    if(q.rear==-1 && q.front==-1)  
    printf("Queue Empty\n");  
    else if(q.front==q.rear)  
    {  
      x=q.x[q.front];  
      q.front=q.rear=-1;  
      return x;  
    }else  
    return q.x[q.rear--];  
 }  
 void display()  
 {  
    printf("Queue is\n");  
    int i;  
    for(i=q.front;i<=q.rear;i++)  
    printf("%d\n",q.x[i]);  
 }
