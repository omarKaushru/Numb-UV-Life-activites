/* A bit shift example. */
#include <stdio.h>
#include <conio.h>
main()
{
unsigned int i;
int j;
i = 1;
/* left shifts */
for(j=0; j<4; j++) {
i = i << 1; /* left shift i by 1, which
is same as a multiply by 2 */
printf("Left shift %d: %d\n", j, i);
}
/* right shifts */
for(j=0; j<4; j++) {
i = i >> 1; /* right shift i by 1, which
is same as a division by 2 */
printf("Right shift %d: %d\n", j, i);
}
getch();
}
