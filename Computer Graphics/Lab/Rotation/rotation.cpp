#include <math.h>
#include <iostream>
#include <stdio.h>
//#include<graphics.h>
using namespace std;
#define PI 3.14159265
int main()
{
    int i,j,k;
    double points[3][3],angel,solution[3][3],R_theta[3][3];
    cout<<"Enter angel: ";
    cin>>angel;
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        cin>>points[j][i];
    }
    for(j=0; j<3; j++)
    points[2][j]=1;
    /*initwindow(800,800);
    line(points[0][0],points[1][0],points[0][2],points[1][2]);
    line(points[0][0],points[1][0],points[0][1],points[1][1]);
    line(points[0][1],points[1][1],points[0][2],points[1][2]);*/

    R_theta[0][0]=cos(angel*PI/180),R_theta[0][1]=-(sin(angel*PI/180)),R_theta[0][2]=0;
    R_theta[1][0]=sin(angel*PI/180),R_theta[1][1]=cos(angel*PI/180),R_theta[1][2]=0;
    R_theta[2][0]=0,R_theta[2][1]=0,R_theta[2][2]=1;
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3; j++)
        {
            solution[i][j] = 0 ;
            for(k=0 ; k<3 ; k++)
            {
                solution[i][j] = solution[i][j] + (R_theta[i][k] * points[k][j]);
            }
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%.2lf ",solution[i][j]);
        }
        cout<<endl;
    }
    /*delay(2000);
    //initwindow(800,800);
    line(solution[0][0],solution[1][0],solution[0][2],solution[1][2]);
    line(solution[0][0],solution[1][0],solution[0][1],solution[1][1]);
    line(solution[0][1],solution[1][1],solution[0][2],solution[1][2]);

    getch();*/
}
