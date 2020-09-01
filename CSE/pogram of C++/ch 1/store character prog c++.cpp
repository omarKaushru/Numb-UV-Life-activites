#include<iostream>
#include<conio.h>
using namespace std;
#define SIZE 10
class stack{
      char stck[SIZE]; //holds the stack
      int tos; //index of top of stack
      public:
         void init();// initialize stack
         void push(char ch);//push character on stack
         char pop();//pop character from stack
         };
         //initialize the stack
         void stack::init(){
              tos=0;
              }
         void stack::push(char ch){
              if(tos==SIZE){
              cout<<"stack is full";
              return;
              }
              stck[tos]=ch;
              tos++;
              }
              //pop a character
         char stack::pop()
         {
              if(tos==0){
              cout<<"stack is empty";
              getch();
              //return 0;//return null on ermpty stack
              }
              tos--;
              return stck[tos];
              }
              int main(){
                  stack s1,s2;
                  int i;
                  s1.init();
                  s2.init();
                  s1.push('a');
                  s2.push('x');
                  s1.push('b');
                  s2.push('y');
                  s1.push('c');
                  s2.push('z');
                  for(i=0;i<3;i++)cout<<"pop s1:"<<s1.pop()<<"\n";
                  for(i=0;i<3;i++)cout<<"pop s2:"<<s2.pop()<<"\n";
                  getch();
                  }
      
