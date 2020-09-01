#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    char names[20];
    int id_no[10];
    int i,student_no,student_id[10];

    printf("our total student numb is 10");
    FILE*fp;
    fp=fopen("d:\\student.text","w+");
    if (fp==NULL)
    {
     printf("error");
      exit(1);
      }
      student_no=1;
      while(student_no<=10)
      {

      printf("\n\nstudent_no %d : ",student_no+1);
        for(i=1;i<=10;i++)
        {
            printf("\n\nid_no :");
            scanf("%d",&student_id);
            printf("\n\nname");
            scanf("%s",&names);
        
        }
        
        student_no++;
        }
getch();
}
