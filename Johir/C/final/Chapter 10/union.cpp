#include<stdio.h>
#include<conio.h>
union Data
    {
    int i;
    float f;
    char str[20];
      }
      main()
      {
            union Data data;
            data.i=10;
            printf("\n data.i is:%d",data.i);
            data.f=220.5;
             printf("\n data.f is:%f",data.f);
             strcpy(data.str,"C Programming");
             printf("\n data.str is:%s",data.str);
             
             getch();
             }
