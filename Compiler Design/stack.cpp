#include <iostream>
using namespace std;
int stack [100], top=-1;
void push(char a)
{
    stack[++top]=a;
}
char pop()
{
    return stack[top--];
}
int main()
{
    int i,n;
    char a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        push(a);
    }
    while(stack[top]!='\0')
    cout<<pop()<<" ";
    return 0;
}
