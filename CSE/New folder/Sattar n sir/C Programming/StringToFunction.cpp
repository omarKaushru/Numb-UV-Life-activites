#include<stdio.h>

void StringPass(char the_label[])
{
    printf("Label: %s\n", the_label);
}


int main(void)
{
  char label[] = "Double";
  StringPass(label);
  return 0; 
}
