/*
Developer: Md Omar Kaushru
Id: 1401020012
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x,j,k,numberOfelement[20];
    double data[200],cluster[200][200],mean[20],distance,tempmean[20];
    while(cin>>n)
    {///here n is the number of element
        for(i=0; i<n; i++)
        cin>>data[i];
        cout<<"Enter the number of cluster: ";
        cin>>k;
        for(i=0; i<k; i++)
        {
            mean[i]=data[i];
            tempmean[i]=data[i];///keeping means in temporary array
        }
        x=0;
       // sort(data,data+n);
        while(true)
        {
            int fcluster;
            double min;
            for(i=0; i<k; i++)
            {
                numberOfelement[i]=0;
            }
            for(i=0; i<n; i++)
            {
                min=999.9;
                for(j=0; j<k; j++)
                {
                    distance=fabs(mean[j]-data[i]);
                    if(distance<min)
                    {
                        min=distance;
                        fcluster=j;
                    }
                }
                cluster[fcluster][numberOfelement[fcluster]]=data[i];
                numberOfelement[fcluster]++;
                double sum=0;
                if(numberOfelement[fcluster]>1)
                {
                for(int p=0; p<=numberOfelement[fcluster]; p++)
                {
                    sum=sum+cluster[fcluster][p];
                }
                int temp=numberOfelement[fcluster];
                mean[fcluster]=double(sum/(temp+1));
                //cout<<"Mean "<<mean[fcluster]<<" ";
                }
            }
            for(i=0; i<k; i++)
            {
                cout<<"Cluster "<<i+1<<endl;
                for(j=0; j<numberOfelement[i]; j++)
                {
                    cout<<cluster[i][j]<<" ";
                }
                cout<<endl<<endl;
            }
            cout<<"\n\n";
            for(i=0; i<k; i++)
            cout<<mean[i]<<" ";
            cout<<"\n\n";
            x++;
            int run=0;
            ///if no change in mean then break;
            for(i=0; i<k; i++)
            {
                if(tempmean[i]!=mean[i])///Checking for changes
                run=1;
            }
            if(run==1)
            {
                for(i=0; i<k; i++)
                tempmean[i]=mean[i];
            }
            else
            break;
        }
        cout<<"\n\nit takes "<<x<<" passes\n";
    }
    return 0;
}
