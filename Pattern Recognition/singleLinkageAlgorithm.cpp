/*
Developer: Md Omar Kaushru
Id: 1401020012
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i,j,flagi,flagj,k,run;
    double solution[10][10],x[10],y[10],t1,t2,min,temp[10][10];
    while(cin>>n)
    {
        min=999999999;
        for(i=0; i<n; i++)
        cin>>x[i]>>y[i];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                t1=sqrt(pow((x[j]-x[i]),2)+pow((y[j]-y[i]),2));
                solution[i][j]=t1;
                temp[i][j]=t1;
                if(t1<min && t1!=0)
                {
                    min=t1;
                    flagi=i;
                    flagj=j;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                printf("%.1lf  ",solution[i][j]);
            cout<<"\n";
        }
        run=n-2;
        while(run)
        {
            min=9999999.0;
            n--;
            cout<<endl<<flagi<<" "<<flagj<<" will merge.\n";
            for(i=flagi; i<=flagi; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(i==j)
                    solution[i][j]=0;
                    else
                    {
                        if(j>flagi)
                        {
                            ///the value of right side will merge
                            if(temp[i][j+1]<temp[i+1][j+1])
                            solution[i][j]=temp[i][j+1];
                            else
                            solution[i][j]=temp[i+1][j+1];
                        }
                        else if(j<flagi)
                        {
                            ///the value of left side will merge
                            if(temp[i][j]<temp[i+1][j])
                            solution[i][j]=temp[i][j];
                            else
                            solution[i][j]=temp[i+1][j];
                        }
                    }
                }
            } ///End of merge
            for(i=0; i<n; i++)
            {
                if(i==flagi)///because this row is calculated during merging
                continue;
                for(j=0; j<n; j++)
                {
                    if(i==j)
                    solution[i][j]=0;
                    else if(j==flagi) ///to retrive the data from merged row
                    solution[i][j]=solution[j][i];
                    else if(j>=flagj) ///when merging occurs at the up from current position
                    solution[i][j]=temp[i+1][j+1];
                    else if(j<flagj) ///when merging occurs at the bellow from current position
                    solution[i][j]=temp[i][j];
                }
            }
            for(i=0; i<n; i++)
            {
                cout<<"\n";
                for(j=0; j<n; j++)
                {
                    temp[i][j]=solution[i][j];
                    if(solution[i][j]<min && solution[i][j]!=0)
                    {
                        min=solution[i][j];
                        flagi=i;
                        flagj=j;
                    }
                    printf("%.1lf  ",solution[i][j]);
                }
            }
            cout<<"\n\n";
            run--;
        }
    }
}
