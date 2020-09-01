#include <stdio.h>
 
 
void mathoperation(int a, int b, int *sum, int *diff){
*sum = a + b;
*diff = a - b;
}
 
int main(void){
int x = 20, y = 10, s, d;

mathoperation(x,y,&s,&d);
 
printf("Sum: %d  Diff: %d",s,d);
 
return 0;
}
