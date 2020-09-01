#include  <stdio.h>
#include  <conio.h>
struct student
               {
               int rollno;
               char name[25];
               int totalmark;
               };

int main()
      {
      struct student stud[100];
      int n,i;
    
      printf("\n Enter total number of students: ");
      scanf("%d",&n);
      for(i=0;i<n;i++)
                {
                printf("\n Enter details of %d-th student\n",i+1);
                printf("\n Name: ");
                scanf("%s",&stud[i].name);
                printf("\n Roll number: ");
                scanf("%d",&stud[i].rollno);
                printf("\n Total mark: ");
                scanf("%d",&stud[i].totalmark);
                }
     printf("\n ========= STUDENTS DETAILS =========");
     for(i=0;i<n;i++)
               {
               printf("\n Roll number:%d ",stud[i].rollno);
               printf("\n Name:%s ",stud[i].name);
               printf("\n Totel mark:%d",stud[i].totalmark);
               printf("\n");
              }
    getch();
    return 0;
    }
