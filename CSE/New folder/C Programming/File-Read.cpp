#include<stdio.h>
int main(){
FILE *fp;
char ch;
fp=fopen("F:\\file.txt","w");
printf("\n Enter data to be stored in to the file:");
while((ch=getchar())==EOF)
putc(ch,fp);
fclose(fp);
return 0;
}
