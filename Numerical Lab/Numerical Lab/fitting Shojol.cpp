#include<iostream>
using namespace std;
main(){
    int i,n,y[10][10],j,x[10][10],w[10][10],wx[10][10],wy[10][10],x_2[10][10],wx_2[10][10],wxy[10][10];
    int Sum_of_x,Sum_of_y,Sum_of_w,Sum_of_wy,Sum_of_x2,Sum_of_wx2,Sum_of_wx,Sum_of_wxy;
    cout<<"Enter the number of value:";
    cin>>n;
    cout<<"Enter the values for x:";
    for(i=1;i<=n;i++)
    {
        cin>>x[i][1];
    }
    /*Taking the value of y*/
    cout<<"Enter the values for y:";
    for(i=1;i<=n;i++)
    {
        cin>>y[i][2];
    }
    cout<<"Enter the values for w:";
    for(i=1;i<=n;i++)
    {
        cin>>w[i][3];
    }
    for(i=1;i<=n;i++)
    {
        wx[i][4]=x[i][1]*w[i][3];
        wy[i][5]=y[i][2]*w[i][3];
        x_2[i][6]=x[i][1]*x[i][1];
        wx_2[i][7]=w[i][3]*x_2[i][6];
        wxy[i][8]=x[i][1]*y[i][2]*w[i][3];
    }
    Sum_of_x=Sum_of_y=Sum_of_w=Sum_of_wx=Sum_of_wy=Sum_of_x2=Sum_of_wx2=Sum_of_wxy=0;
    for(i=1;i<=n;i++)
    {
        Sum_of_x=Sum_of_x+x[i][1];
        Sum_of_y=Sum_of_y+y[i][2];
        Sum_of_w=Sum_of_w+w[i][3];
        Sum_of_wx=Sum_of_wx+wx[i][4];
        Sum_of_wy=Sum_of_wy+wy[i][5];
        Sum_of_x2=Sum_of_x2+x_2[i][6];
        Sum_of_wx2=Sum_of_wx2+wx_2[i][7];
        Sum_of_wxy=Sum_of_wxy+wxy[i][8];
    }
    /*calculating the value of table*/

    /*Displaying Forward difference Table*/
    cout<<"\n\t>>>>>>>>Table<<<<<<<<\n\n";
    cout<<"......................................................................\n";
    cout<<"X"<<"\t"<<"Y"<<"\t"<<"W"<<"\t"<<"WX"<<"\t"<<"wy"<<"\t"<<"x^2"<<"\t"<<"wx^2"<<"\t"<<"wxy";
    cout<<"\n......................................................................\n";
    for(i=1;i<=n;i++)
    {
        cout<<x[i][1]<<"\t"<<y[i][2]<<"\t"<<w[i][3]<<"\t"<<wx[i][4]<<"\t"<<wy[i][5]<<"\t"<<x_2[i][6]<<"\t"<<wx_2[i][7]<<"\t"<<wxy[i][8];
        cout<<"\n";
    }
    cout<<"\n......................................................................\n";
    cout<<Sum_of_x<<"\t"<<Sum_of_y<<"\t"<<Sum_of_w<<"\t"<<Sum_of_wx<<"\t"<<Sum_of_wy;
    cout<<"\t"<<Sum_of_x2<<"\t"<<Sum_of_wx2<<"\t"<<Sum_of_wxy;
    float del,del_a0,a0,a1,del_a1;
    del=(Sum_of_w*Sum_of_wx2)-(Sum_of_wx*Sum_of_wx);
    del_a0=(Sum_of_wy*Sum_of_wx2)-(Sum_of_wxy*Sum_of_wx);
    del_a1=(Sum_of_w*Sum_of_wxy)-(Sum_of_wx*Sum_of_wy);
    a0=del_a0/del;
    a1=del_a1/del;
    cout<<endl<<endl<<"1st equation: a0*"<<Sum_of_w<<"+a1*"<<Sum_of_wx<<"="<<Sum_of_wy<<endl;
    cout<<"2nd equation: a0*"<<Sum_of_wx<<"+a1*"<<Sum_of_wx2<<"="<<Sum_of_wxy<<endl;
    cout<<endl<<"a0="<<a0<<endl;
    cout<<endl<<"a1="<<a1<<endl;
    cout<<endl<<"y="<<a1<<"x+("<<a0<<")"<<endl;
//    X=(a0*Sum_of_wx)+(a1*Sum_of_wx2)-Sum_of_wxy;
    return 0;
}
