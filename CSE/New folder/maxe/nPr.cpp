#include <conio.h>
#include <stdio.h>

  /* returns factorial of the given number */
  int fact(int num) {
        int res = 1;
        if (num == 0 || num == 1) {
                return res;
        }

        while (num > 0) {
                res = res * num;
                num--;
        }
        return res;
  }

   main() {
        int n, r;
        float nPr, nCr;

        /* get the value for n and r from the user */
        printf("Enter the value for n and r:");
        scanf("%d%d", &n, &r);

        /* conbination calculation */
        nCr = (1.0 * fact(n)) / (fact(r) * fact(n-r));

        /* permutation calculation */
        nPr = (1.0 * fact(n)) / fact(n-r);

        /* print the permutation result */
        printf("nPr = %.2f\n", nPr);

        /* print the combination result */
        printf("nCr = %.2f\n", nCr);
        getch();
  }
