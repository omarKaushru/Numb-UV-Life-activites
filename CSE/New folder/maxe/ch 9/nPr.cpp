#include <conio.h>
#include <stdio.h>
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

  int main() {
        int n, r;
        float nPr, nCr;
        printf("Enter the value for n:");
        scanf("%d", &n);
        printf("Enter the value for r:");
        scanf("%d", &r);
        nCr = (1.0 * fact(n)) / (fact(r) * fact(n-r));
        nPr = (1.0 * fact(n)) / fact(n-r);
        printf("nPr = %.2f\n", nPr);
        printf("nCr = %.2f\n", nCr);
        getch();
  }
