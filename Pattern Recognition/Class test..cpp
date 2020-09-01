#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,fi1,fj1,fi2,fj2;
    double x1[20],y1[20],x2[20],y2[20],solution[20][20],min,max;
    cout<<"Enter the number of value: ";
    cin>>n;
    cout<<"Enter the value of cluster1:\n";
    for(i=0; i<n; i++)
    cin>>x1[i]>>y1[i];

    cout<<"Enter the value of cluster2:\n";
    for(i=0; i<n; i++)
    cin>>x2[i]>>y2[i];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            solution[i][j]=sqrt(pow(x2[j]-x1[i],2)+pow(y2[j]-y1[i],2));
            if(i==0 && j==0)
            min=solution[i][j],max=solution[i][j];
            if(solution[i][j]<min)
            {
                min=solution[i][j];
                fi1=i,fj1=j;
            }
            else if(solution[i][j]>max)
            {
                max=solution[i][j];
                fi2=i,fj2=j;
            }
        }
    }
    cout<<"\nSolution :\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        cout<<solution[i][j]<<" ";
        cout<<endl;
    }

    cout<<"\nSingle linkage distance is between ( "<<x1[fi1]<<", "<<y1[fi1]<<" ) and ( "<<x2[fj1]<<", "<<y2[fj1]<<" ).\n";

    cout<<"\ncomplete linkage distane is between ( "<<x1[fi2]<<", "<<y1[fi2]<<" ) and ( "<<x2[fj2]<<", "<<y2[fj2]<<" ).\n";
}
