///Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s[] = {"BCG", "BGC" ,"CBG" ,"CGB" ,"GBC" ,"GCB"};
    int moves[6];
    int b[9];
    int sum;
    while(cin>>b[0])
    {
        for(i=1;i<9;i++)
        cin>>b[i];
        sum = b[0] + b[3] + b[6]+ b[1] + b[4] + b[7]+ b[2] + b[5] + b[8];
        moves[0] = sum - b[0] - b[5] - b[7];
        moves[1] = sum - b[0] - b[4] - b[8];
        moves[2] = sum - b[2] - b[3] - b[7];
        moves[3] = sum - b[2] - b[4] - b[6];
        moves[4] = sum - b[1] - b[3] - b[8];
        moves[5] = sum - b[1] - b[5] - b[6];
        int min_moves = *min_element(moves,moves+6);
        for(i=0;i<6;i++)
        if(min_moves==moves[i])
        {
            cout << s[i] << " " << min_moves<<endl;
            break;
        }
    }
    return 0;
}
