/*implements of single link list*/
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int no;
    struct node *next;
};
struct node *first;
void creatlist()
{
 	char ch='y';
	struct node *ptr,*nw;
  	while(ch!='n')
  	{
     	printf("\nEnter item in list");
     	nw=(struct node*)malloc(sizeof(struct node));
     	scanf("%d",&nw->no);
     	nw->next=0;
     	if(first==0)
     	{
       		first=nw;
     	}
     	else
     	{
       		for(ptr=first ;ptr->next!=0;ptr=ptr->next);
       		{
       			ptr->next=nw;
       		}
     	}
     	printf("\nDo you want to countinue y\n");
     	ch=getch();
  	}
}
void display()
{
	struct node *ptr;
	printf("Item int list are");
	for(ptr=first;ptr!=0;ptr=ptr->next)
	{
		printf("\n%d",ptr->no);
	}
}
int main()
{
//	clrscr();
	first=0;
	creatlist();
	display();
	return 0;
}
