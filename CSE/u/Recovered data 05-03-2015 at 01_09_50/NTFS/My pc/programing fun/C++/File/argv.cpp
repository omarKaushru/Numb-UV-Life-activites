#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(int argc, char *argv[])
{
if(argc!=2) {
printf("You forgot to type your name.\n");
exit(1);
}
printf("Hello %s", argv[1]);
getch();
}
