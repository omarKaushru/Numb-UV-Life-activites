#include <stdio.h>
#include <conio.h>

main()
{
    FILE *fptr;
    char name[20];
    int age;
    float salary;
 
    /*  open for writing */
    
    fptr=fopen("D:\\EmployeeRecord.txt","w");
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return 1;
    }
    printf("\n Enter the name: ");
    scanf("%s", name);
    fprintf(fptr, "\n Name    = %s", name);
    printf("\n Enter the age: ");
    scanf("%d", &age);
    fprintf(fptr, "\n Age     = %d ", age);
    printf("\n Enter the salary: ");
    scanf("%f", &salary);
    fprintf(fptr, "\n Salary  = %.2f ", salary);
    fclose(fptr);
    getch();
}
