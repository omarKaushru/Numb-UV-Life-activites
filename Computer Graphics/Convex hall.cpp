#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x_Coordinate[20], y_Coordinate[20];
    int n,i,j,k,c,temp1,temp2;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        cin>>x_Coordinate[i]>>y_Coordinate[i];

        c=0;///C used to maintain four coordinate
        ///Sorting
        for(i=0; i<n; i++)
        {
            ///90degree
            if(x_Coordinate[i]>0 && y_Coordinate[i]>0 && c==0)
            {
                for(j=i; j<n; j++)
                {
                    if((x_Coordinate[j]>0 && y_Coordinate[j]>0) && (y_Coordinate[i]>y_Coordinate[j]))
                    {
                        temp1=y_Coordinate[i];
                        y_Coordinate[i]=y_Coordinate[j];
                        y_Coordinate[j]=temp1;

                        temp1=x_Coordinate[i];
                        x_Coordinate[i]=x_Coordinate[j];
                        x_Coordinate[j]=temp1;
                    }
                }
            }
            ///90 to 180 degree
            else if(x_Coordinate[i]<0 && y_Coordinate[i]>0 && c==1)
            {
                for(j=i; j<n; j++)
                {
                    if((x_Coordinate[j]<0 && y_Coordinate[j]>0) && (y_Coordinate[i]>y_Coordinate[j]))
                    {
                        temp1=y_Coordinate[i];
                        y_Coordinate[i]=y_Coordinate[j];
                        y_Coordinate[j]=temp1;

                        temp1=x_Coordinate[i];
                        x_Coordinate[i]=x_Coordinate[j];
                        x_Coordinate[j]=temp1;
                    }
                }
            }
            ///180 to 270 degree
            else if(x_Coordinate[i]<0 && y_Coordinate[i]<0 && c==2)
            {
                for(j=i; j<n; j++)
                {
                    if((x_Coordinate[j]<0 && y_Coordinate[j]<0) && (y_Coordinate[i]>y_Coordinate[j]))
                    {
                        temp1=y_Coordinate[i];
                        y_Coordinate[i]=y_Coordinate[j];
                        y_Coordinate[j]=temp1;

                        temp1=x_Coordinate[i];
                        x_Coordinate[i]=x_Coordinate[j];
                        x_Coordinate[j]=temp1;
                    }
                }
            }

            ///270 to 360 degree
            else if(x_Coordinate[i]>0 && y_Coordinate[i]<0 && c==3)
            {
                for(j=i; j<n; j++)
                {
                    if((x_Coordinate[j]>0 && y_Coordinate[j]<0) && (y_Coordinate[i]>y_Coordinate[j]))
                    {
                        temp1=y_Coordinate[i];
                        y_Coordinate[i]=y_Coordinate[j];
                        y_Coordinate[j]=temp1;

                        temp1=x_Coordinate[i];
                        x_Coordinate[i]=x_Coordinate[j];
                        x_Coordinate[j]=temp1;
                    }

                }
            }
            if(i==(n-1))
            {
                i=0;
                c++;
            }
            if(c==4)
            break;
        }///End of for loop
        cout<<endl<<endl;
        for(i=0; i<n; i++)
        cout<<x_Coordinate[i]<<" "<<y_Coordinate[i]<<endl;
    }
}
