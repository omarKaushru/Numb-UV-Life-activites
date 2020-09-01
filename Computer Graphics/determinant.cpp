/*
Developer: Md Omar Kaushru
Id: 1401020012
*/
#include <bits/stdc++.h>
using namespace std;

double diterminant(double pX,double pY,double qX,double qY,double rX,double rY)
{
    return(1*(qX*rY-qY*rX)-pX*(1*rY-1*qY)+ pY*(1*rX-1*qX));
}

int main()
{
    double pX,pY,qX,qY,rX,rY;
    while(cin>>pX>>pY>>qX>>qY>>rX>>rY)
    {
        cout<<diterminant(pX,pY,qX,qY,rX,rY)<<endl;
    }
}
