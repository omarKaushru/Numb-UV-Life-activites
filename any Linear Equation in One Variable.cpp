#include <stdio.h>
#include <string.h>
float solve_for_y(float a, float b, float c)
{
    float Y = Y = -(b + c) / a;
    return Y;
}
main()
{
  float a, b, c, Y;
  printf("\nEnter a linear equation in one variable of the form aY + b + c = 0 ");
  printf("\nEnter the value of a, b, c respectively: ");
  scanf("%f%f%f", &a, &b, &c);
  Y = solve_for_y(a, b, c);
  printf("\nSolution is Y = %f", Y);

}
