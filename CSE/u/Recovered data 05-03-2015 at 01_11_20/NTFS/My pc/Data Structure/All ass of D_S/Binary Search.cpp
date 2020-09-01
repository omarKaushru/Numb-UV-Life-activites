#include<stdio.h>
#include<conio.h>
main(){
int data[111],lb=1,ub,item,lok,n,j,beg,end,mid,loc;
printf("Enter the number of Items: ");
scanf("%d",&n);
printf("Enter the Items in a sorted order:\n");
for(j=1;j<=n;j++){
scanf("%d",&data[j]);
}
printf("Enter the number to be search:");
scanf("%d",&item);
beg=lb; ub=n; end=ub; mid=int((beg+end)/2);
while(beg<=end && data[mid]!=item){
if(item<data[mid]){
end=mid-1;
}
else
beg=mid+1;
mid=int((beg+end)/2);
}
if(data[mid]==item){
loc=mid;
printf("\nPosition of the Item is :%d",loc);
}
else{
loc='\0';
printf("\n\n\tInvaild Items");
}
getch();
}
