/* C program to convert time in hours:minutes:seconds to seconds */
  #include <stdio.h>
  #include <conio.h>
  int main() {
  
      int min,hour, day,x,year;
      printf("\n Enter Hour: ");
      scanf("%d",&hour);
    
      day = hour/24;
      x = hour%24;

      
      printf("\n Day:  %d",day);
      printf("\n Hour:  %d",x);
      getch();
      return 0;
  }
