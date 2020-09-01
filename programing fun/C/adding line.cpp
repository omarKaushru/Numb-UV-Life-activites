#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
int i,j,k;
char p[44],q[44],r[44],line[134];
printf("Enter first line   : ");
gets(p);
printf("\nEnter second line: ");
gets(q);
printf("\nEnter third line : ");
gets(r);
/* Copy first string into line */
for(i=0; p[i]!='\0'; i++)
line[i]=p[i];
/* End first string with a space */
line[i]=' ';
/* Copy second string into line */
for(j=0; q[j]!='\0'; j++)
line[i+j+1]=q[j];
/* End first string with a space */
line[i+j+1]=' ';
/* Copy third string into line */
for(k=0; r[k]!='\0'; k++)
line[i+j+k+2]=r[k];
/* End line with a null */
line[i+j+k+2]='\0';
printf("\n\n%s",line);
getch();
}
