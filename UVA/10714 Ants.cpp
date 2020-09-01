///Acceted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t,  lengthOfThePole, numberOfAnt,i,earliestPossibleTime,latestPossibleTime,
    positionOfAnt,temp;
    cin>>t;

    while(t--)
    {
        earliestPossibleTime=latestPossibleTime=0;
        cin>>lengthOfThePole>>numberOfAnt;
        for(i=0; i<numberOfAnt; i++)
        {
            cin>>positionOfAnt;
            temp=lengthOfThePole-positionOfAnt;
            if(temp>=positionOfAnt)
            {
                if(latestPossibleTime<temp)
                {
                    latestPossibleTime=temp;
                }
                if(earliestPossibleTime<positionOfAnt)
                {
                    earliestPossibleTime=positionOfAnt;
                }
            }
            if(temp<positionOfAnt)
            {
                if(latestPossibleTime<positionOfAnt)
                {
                    latestPossibleTime=positionOfAnt;
                }
                if(earliestPossibleTime<temp)
                {
                    earliestPossibleTime=temp;
                }
            }
        }

        cout<<earliestPossibleTime<<" "<<latestPossibleTime<<"\n";
    }
    return 0;
}
