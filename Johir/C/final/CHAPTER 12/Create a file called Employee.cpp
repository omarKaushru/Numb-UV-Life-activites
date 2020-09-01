#include <stdio.h>
#include <conio.h>
main()
{
FILE *fptr;
char name[20];
int age;
float salary;
/* open for writing */
fptr = fopen("employee.txt", "w");
if (fptr == NULL)
{
printf("File does not exists \n");
return 1;
}
printf("\n Enter the name: ");
gets(name);
fprintf(fptr, "Name = %s\n", name);
printf("\n Enter the age: ");
scanf("%d", &age);
fprintf(fptr, "Age = %d\n", age);
printf("\n Enter the salary: ");
scanf("%f", &salary);
fprintf(fptr, "Salary = %.2f\n", salary);
fclose(fptr);
getch();
}
