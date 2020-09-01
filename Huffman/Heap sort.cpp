#include<stdio.h>
#include<conio.h>
int main()
{
      int TREE[10],N,i,j,K,p,c,temp;
      printf("\n\n Enter no of elements..");
      scanf("%d",&N);
      printf("\n\n Enter the nos..");
      for(i=1;i<=N;i++)
      scanf("%d",&TREE[i]);
      for(i=2;i<=N;i++)
      {
          K=i;
          do
          {
              if(TREE[K]>TREE[K/2])                        // Values are inserted in the heap       
              {
                  temp=TREE[K];
                  TREE[K]=TREE[K/2];
                  TREE[K/2]=temp;
              }
              p=K/2;
              K=p;
          }
          while(K!=0);
      }
      printf("\n\n\n On inserting values are arranged as \n");
      for(i=1;i<=N;i++)                                // Displaying values in heap
      printf("%d\t",TREE[i]);
      for(j=N;j>0;j--)
      {
          temp=TREE[1];
          TREE[1]=TREE[j];
          TREE[j]=temp;
          p=0;
          do
          {                                            // Heap sorting is applied  
               c=2*p+2;
               if((TREE[c][/c]<TREE[c_language="+1"][/c]) && c<j-1)
               c++;
               if(TREE[p]<TREE[c][/c] && c<j)
               {
                    temp=TREE[p];
                    TREE[p]=TREE[c][/c];
                    TREE[c][/c]=temp;
               }
           p=c;
           }
           while(c<(j+1));
      }
      printf("\n\n\n The sorted nos are..");
      for(i=1;i<=N;i++)                         // printing the heap in sorted order
      printf("%d\t",TREE[i]);
      getch();
}
