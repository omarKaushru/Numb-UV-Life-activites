#include <math.h>
#include <iostream>
#include<graphics.h>
#define PI 3.14159265
using namespace std;
int main()
{
    int i,j,kk,fixed;
    double points[3][3],solution[3][3],S_ab_p[3][3],a,b,h,k;

    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        cin>>points[j][i];
    }
    for(j=0; j<3; j++)
    points[2][j]=1;

    cout<<"Enter a and b :";
    cin>>a>>b;
    cout<<"which point you want keep fixed :";
    cin>>fixed;
    initwindow(800,800);
    line(points[0][0],points[1][0],points[0][2],points[1][2]);
    line(points[0][0],points[1][0],points[0][1],points[1][1]);
    line(points[0][1],points[1][1],points[0][2],points[1][2]);
    h=points[0][fixed-1],k=points[1][fixed-1];
    S_ab_p[0][0]=a,S_ab_p[0][1]=0,S_ab_p[0][2]=-(a*h)+h;
    S_ab_p[1][0]=0,S_ab_p[1][1]=b,S_ab_p[1][2]=-(b*k)+k;
    S_ab_p[2][0]=0,S_ab_p[2][1]=0,S_ab_p[2][2]=1;


    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3; j++)
        {
            solution[i][j] = 0 ;
            for(kk=0 ; kk<3 ; kk++)
            {
                solution[i][j] = solution[i][j] + (( S_ab_p[i][kk] * points[kk][j] ));
            }
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        cout<<solution[i][j]<<" ";
        cout<<endl;
    }
    delay(1500);
    line(solution[0][0],solution[1][0],solution[0][2],solution[1][2]);
    line(solution[0][0],solution[1][0],solution[0][1],solution[1][1]);
    line(solution[0][1],solution[1][1],solution[0][2],solution[1][2]);
    getch();
}
