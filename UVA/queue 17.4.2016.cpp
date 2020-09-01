#include<iostream>
#include<queue>
using namespace std;
int main()
 {
   queue<int> Q;
   int i,sum=0;
   for(i=1;i<=10;i++)
   Q.push(i);
   while(!Q.empty())
   {
   sum=sum+Q.front();
   Q.pop();
   }
   cout<<sum<<endl;
   return 0;

   }
