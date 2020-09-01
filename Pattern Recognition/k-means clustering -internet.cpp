#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
 int numbers, k, kvals[25], prevKvals[25], steps = 1, addition[25][100], count = 0, groups[25][100], min, groupnum, value, sum, ok = 1, nums[100];
 cout << "How many numbers you want to enter: ";
 cin >> numbers;

 cout << "Enter value of k: ";
 cin >> k;

 //get numbers
 for(int i = 0; i < numbers; i++)
 {
  cout << "Enter Number " << i+1 << ": ";
  cin >> nums[i];
 }

 // set values of C's
 for(int i = 0; i < 3; i++)
 {
  kvals[i] = nums[i];
 }
 //show values of user
 cout << "You have entered: ";
 for(int i = 0; i < numbers; i++)
 {
  cout << nums[i] << ", ";
 }

 //while(steps < 10)
 while(ok == 1)
 {
  cout << endl << "Itration Number: " << steps;
  //make calculations (C - bla bla bla)
  for(int i = 0; i < k; i++)
  {
            for(int j = 0; j < numbers; j++)
            {
    addition[i][j] = abs(kvals[i] - nums[j]);
   }
  }

  //make groups of number(C)
  for(int i = 0; i < numbers; i++)
  {
    min = 100000;
    for(int j = 0; j < k; j++)
    {
        if(addition[j][i] < min)
        {
            min = addition[j][i];
            value = nums[i];
            groupnum = j;
        }
   }
    groups[groupnum][i] = value;
  }

  //show results of calculations (C - bla bla bla)
     cout << endl << "Calculations" << endl;
  for(int i = 0; i < numbers; i++)
  {
            for(int j = 0; j < k; j++)
            {
    cout << addition[j][i] << "\t";
   }
   cout << endl;
  }
  // show groups and get new C's
  cout << endl << "Gruops" << endl;
     for(int i = 0; i < k; i++)
  {
   sum = 0;
   count = 0;
   cout << "Group " << i+1 << ": ";
            for(int j = 0; j < numbers; j++)
            {
    if(groups[i][j] != NULL)
    {
     cout << groups[i][j] << "\t";
     sum += groups[i][j];
     count++;
    }
   }
   prevKvals[i] = kvals[i];
   kvals[i] = sum/count;
   cout << "\t=\t" << kvals[i] << endl;
  }

  //make empty array of groups
  for(int i = 0; i < 25; i++)
  {
   for(int j = 0; j < 100; j++)
   {
    groups[i][j] = NULL;
   }
  }

  //check condition of termination
  ok = 0;
  for(int i = 0; i < k; i++)
  {
   if(prevKvals[i] != kvals[i])
   {
       ok = 1;
   }
  }

   if(ok != 1)
   {
        getch();
 }

     steps++;
 } // end while loop

 getch();
 return 0;
}
