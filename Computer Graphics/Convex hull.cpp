///Angle Calculation is done
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265

int top,oStack[20];

void push(int i)
{
    oStack[++top]=i;
}

int pop()
{
    return (oStack[top--]);
}

double diterminant(double pX,double pY,double qX,double qY,double rX,double rY)
{
    return(1*(qX*rY-qY*rX)-pX*(1*rY-1*qY)+ pY*(1*rX-1*qX));
}

int main()
{
    int n,i,j,k,flag;
    double m,angle[20],floTemp,x[20],y[20],temp1,temp2,min;
    while(cin>>n)
    {
        top=-1;
        min=9999999;
        for(i=0; i<n; i++)
        {
            cin>>x[i]>>y[i];
            if(y[i]<=min)
            {
                min=y[i];
                flag=i;
            }
        }
        ///Bringing the minimum value of y coordinate at the first position
        temp1=x[0];
        temp2=y[0];
        x[0]=x[flag];
        y[0]=y[flag];
        x[flag]=temp1;
        y[flag]=temp2;
        ///Removing duplicate value
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(x[i]==x[j] && y[i]==y[j])
                {
                    for(k=j; k<n-1; k++)
                    {
                        x[k]=x[k+1];
                        y[k]=y[k+1];
                    }
                    n--;
                }
            }
        }///End of removing duplicate loop
        //for(i=0; i<n; i++)
        //cout<<x[i]<<" "<<y[i]<<endl;
        //cout<<"\n"<<min<<" "<<flag;


        //cout<<"N: "<<n<<endl;
        //cout<<"\n"<<x[0]<<" "<<y[0]<<endl;
        ///Calculating angle with respect to the minimum value of Y coordinate
        for(i=1; i<n; i++)
        {
            m=(y[i]-y[0])/(x[i]-x[0]);
            if(x[i]>x[0] && y[i]>y[0])
            floTemp=atan (m) * 180 / PI;
            else if(x[i]<x[0] && y[i]>y[0])
            floTemp=(atan (m) * 180 / PI)+180;
            else if(x[i]<x[0] && y[i]<y[0])
            floTemp=(atan (m) * 180 / PI)+180;
            else if(x[i]>x[0] && y[i]<y[0])
            floTemp=(atan (m) * 180 / PI)+360;
            angle[i-1]=floTemp;
        }
        cout<<"\n";
        for(i=0; i<n-1; i++)
        cout<<angle[i]<<"  ";
        cout<<"\n";
        ///Sorting X and Y coordinate according to their angel

        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n-1; j++)
            {
                if(angle[i]>angle[j])
                {
                    temp1=angle[i];
                    angle[i]=angle[j];
                    angle[j]=temp1;
                    ///Sorting X coordinate
                    temp1=x[i+1];
                    x[i+1]=x[j+1];
                    x[j+1]=temp1;
                    ///Sorting Y coordinate
                    temp1=y[i+1];
                    y[i+1]=y[j+1];
                    y[j+1]=temp1;
                }
            }
        }///End of Sorting loop

        cout<<"\n";
        for(i=0; i<n; i++)
        cout<<x[i]<<"  "<<y[i]<<endl; //*/
        for(i=0; i<3; i++)///pushing first three element
        push(i);
        for(i=3; i<n; i++)
        {
            ///pX,pY,qX,qY,rX,rY;
            temp1=diterminant(x[i-2],y[i-2],x[i-1],y[i-1],x[i],y[i]);
            if(temp1>0)
            push(i);
            else
            pop();
        }
        cout<<"\n\n";
        while(1)
        {
            j=pop();
            cout<<x[j]<<"  "<<y[j]<<endl;
            if(j==0)
            break;
        }
    }
}
