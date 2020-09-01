#include <stdio.h>
#include <conio.h>

main()
{
   FILE *fp;

   fp = fopen("D:\\program.txt", "w");
   if(fp==NULL)
   { 
     printf("Error!"); 
     return 1; 
     }
   fputs("\n This is test for fputs Function", fp);
   fprintf(fp, "\n This is test for fprintf function.");
   fclose(fp);
   printf("\n Check your Progrram.txt file.");
   getch();
 
}
