/* C program to calculate simple interest */
  #include <stdio.h>
  #include <conio.h>
  int main() {
        float p, n, r, SI;
        printf("Principal:");
        /* get principal from the user */
        scanf("%f", &p);

        printf("No of years:");
        /* get year input from user */
        scanf("%f", &n);

        printf("Rate of interest:");
        /* get rate of interest from user */
        scanf("%f", &r);

        /* calculate simple interest */
        SI = (p * n * r) / 100;
        /* print the calculated simple interest value */
        printf("Simple Interest: %.2f\n", SI);
        getch();
        return 0;
  }
