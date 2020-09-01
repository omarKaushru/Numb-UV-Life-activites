#include <stdio.h>
#include <conio.h>
main(){
int *pc;
int c;
c=22;
printf("\n Address of c:%d",&c);
printf("\n Value of c:%d",c);
pc=&c;
printf("\n\n Address of pointer pc:%d",pc);
printf("\n Content of pointer pc:%d",*pc);
c=11;
printf("\n\n Address of c:%d",&c);
printf("\n Value of c:%d",c);
*pc=2;
printf("\n\n Address of pointer pc:%d",pc);
printf("\n Content of pointer pc:%d",*pc);
getch();
}
