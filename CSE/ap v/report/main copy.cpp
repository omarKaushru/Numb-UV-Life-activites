#include <iostream>
#include <conio.h>
#include<math.h>
#include<ctime>
using namespace std;
ostream &td(ostream &stream){
        struct tm *localt;
        time_t t;
        t=time(NULL);
        localt=localtime(&t);
        stream<<asctime(localt)<<endl;
        return stream;
        }
main () {
cout<<td<<"\n";
 main:
    int ans,x;
    double v1, v2, ans2;
    char yn,y,n;
    while (yn!= 'n')
    {
    cout<<"\n\t-_-_-_-_-_-_-_-_- Scienific   Calculator   _-_-_-_-_-_-_-_-_\n\n";
    cout<<"Select the operation .\n";
    cout<<"1. Multipication\n";
    cout<<"2. Division\n";
    cout<<"3. Subtraction\n";
    cout<<"4. Addition\n";
    cout<<"5. Power\n";
	cout<<"6. sin(x)\n";
	cout<<"7. cos(x)\n";
	cout<<"8. tan(x)\n";
	cout<<"9. square\n";
	cout<<"10.sqroot\n";
    cout<<"11. Exit\n";
    cout<<"Enter a number: [1-11]";
    cin>>ans;
    switch (ans) {
    case 1:
        goto multipication;
        break;
    case 2:
        goto division;
        break;
    case 3:
        goto subtraction;
        break;
    case 4:
        goto addition;
        break;
    case 5:
        goto power;
        break;
	case 6:
		goto sin;
		break;
    case 7:
		goto cos;
		break;
    case 8:
		goto tan;
		break;
    case 9:
	   goto square;
	   break;
    case 10:
	   goto sqroot;
	   break;
    case 11:
        cout<<"Thank You\n";
                return 0;
    }
 
multipication:
    cout<<"\n\t\t======================Multipication======================\n";
    cout<<"Enter your First Number: ";
    cin>>v1;
    cout<<"Enter your Second Number: ";
    cin>>v2;
    ans2=v1 * v2;
    cout<<"Answer: "<<ans2<<"\n\n";
    cout<<"Would like to solve another one <yn>: ";
    cin>>yn;
    goto main;
    return 0;
 
division:
    cout<<"\n\t\t==================Division===============\n";
    cout<<"Enter your First Number: ";
    cin>>v1;
    cout<<"Enter your Second Number: ";
    cin>>v2;
    if (v2==0) {
        cout<<" syntax ERROR!!! You cannot divide anything by 0\n\n";
        goto main;
    }
    ans2=v1 / v2;
    cout<<"Answer: "<<ans2<<"\n\n";
    cout<<"Would like to solve another one <yn>: ";
    cin>>yn;
    goto main;
    return 0;
 
subtraction:
    cout<<"\n\t\t==================Subtraction===============\n";
    cout<<"Enter your First Number: ";
    cin>>v1;
    cout<<"Enter your Second Number: ";
    cin>>v2;
    ans2=v1 - v2;
    cout<<"Answer: "<<ans2<<"\n\n";
    cout<<"Would like to solve another one <yn>: ";
    cin>>yn;
    if(!n){
           goto subtraction;
           }
    else       
    goto main;
    return 0;
addition:
    cout<<"\n\t\t==================Addition===============\n";
    cout<<"Enter your First Number: ";
    cin>>v1;
    cout<<"Enter your Second Number: ";
    cin>>v2;
    ans2=v1 + v2;
    cout<<"Answer: "<<ans2<<"\n\n";
    cout<<"Would like to solve another one <yn>: ";
    cin>>yn;
    goto main;
    return 0;
power:
    cout<<"\n\t\t==================Power===============\n";
    cout<<"Enter a number: ";
    cin>>v1;
    cout<<"Enter the Power: ";
    cin>>v2;
    double i;
    ans2=v1;
    for( i=2; i<=v2; i++)
    ans2 = ans2 * v1;
    cout<<"Answer: "<<ans2<<"\n\n";
    cout<<"Would like to solve another one <yn>: ";
    cin>>yn;
    goto main;
    return 0;
sin:
    cout<<"\n\t\t========sin(x)=========\n";
	cout<<"Enter the value of x: ";
	cin>>v1;
	ans=sin(v1*(3.14159265)/180);
	cout<<"\n\tAnswer : ";
	cout<<ans;
	cout<<"\nWould like to solve another one <yn>: ";
    cin>>yn;
	goto main;
	return 0;
cos:
	cout<<"\n\t\t========cos(x)=========\n";
	cout<<"Enter the value of x: ";
	cin>>v1;
	ans=cos(v1*(3.14159265)/180);
	cout<<"\n\tAnswer : ";
	cout<<ans;
    cout<<"\nWould like to solve another one <yn>: ";
    cin>>yn;
	goto main;
	return 0;
tan:
	cout<<"\n\t\t========tan(x)=========\n";
	cout<<"Enter the value of x: ";
	cin>>v1;
	ans=tan(v1*(3.14159265)/180);
	cout<<"\n\tAnswer : ";
	cout<<ans;
	cout<<"\nWould like to solve another one <yn>: ";
    cin>>yn;
	goto main;
	return 0;
square:
	cout<<"\n\t\t======square========\n";
	cout<<"enter the number: ";
	cin>>v1;
	cout<<"\n\tSquare : ";
	cout<<pow(v1,2);
	cout<<"\nWould like to solve another one <yn>: ";
    cin>>yn;
	goto main;
	return 0;
sqroot:
	cout<<"\n\t\t=====sqroot======\n";
	cout<<"enter the number; ";
	cin>>v1;
	cout<<"\n\tsquare root:";
	cout<<sqrt(v1);
    cout<<"\nWould like to solve another one <yn>: ";
    cin>>yn;
	goto main;
	return 0;    
    }
    getch();
    }
