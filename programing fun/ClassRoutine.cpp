#include<iostream>
#include<conio.h>
using namespace std;
main(char choice){
main:
cout<<"\t\t\tProgram for Class routine\n\t\t\tCreated by Sajal Acharjee Joy";
cout<<"\n\n\n\t\t\t>>>>>>Choice day<<<<<<<\n\t\t\t.......................\n\n\t\t\t   [S or s]...Sunday\n\t\t\t   [M or m]...Monday\n\t\t\t   [T or t]...Tuesday\n\t\t\t   [W or w]...Wednesday\n\t\t\t   [Z or z]...(Thursday,Friday,Saturday)\n\t\t\t.........................................\n\n";
cout<<"\t\t\tEnter choice:";
cin>>choice;
system("cls");
cout<<"\n\t\t\tResult of choice :\n\n";
switch(choice){                        
case'S':
cout<<"Sub\t\tRoom_No\t\tTime\t\tTeacher\n----\t\t--------\t-----\t\t---------\n";
cout<<"1.Mat-120  \t903          \t2:15-3:45\tArif sir\n\n";
cout<<"2.Cse-221  \t903          \t4:00-5:30\tSatter sir";
break;
case's':
cout<<"Sub\t\tRoom_No\t\tTime\t\tTeacher\n----\t\t--------\t-----\t\t---------\n";
cout<<"1.Mat-120  \t903          \t2:15-3:45\tArif sir\n\n";
cout<<"2.Cse-221  \t903          \t4:00-5:30\tSatter sir";
break;
case'M':
cout<<"Sub\t\tRoom_No\t\tTime\t\tTeacher\n----\t\t--------\t-----\t\t---------\n";
cout<<"1.Cse-121  \t903          \t10:40-12:10\tArif sir\n\n";
cout<<"2.Eng-102  \t904          \t4:00-5:30\tTareq sir";
break;
case'm':
cout<<"Sub\t\tRoom_No\t\tTime\t\tTeacher\n----\t\t--------\t-----\t\t---------\n";
cout<<"1.Cse-121  \t903          \t10:40-12:10\tArif sir\n\n";
cout<<"2.Eng-102  \t904          \t4:00-5:30\tTareq sir";
break;
case'T':
cout<<"Sub\t\tRoom_No\t\tTime\t\tTeacher\n----\t\t--------\t-----\t\t---------\n";
cout<<"1.Mat-120  \t903          \t2:15-3:45\tArif sir\n\n";
break;
case't':
cout<<"Sub\t\tRoom_No\t\tTime\t\tTeacher\n----\t\t--------\t-----\t\t---------\n";
cout<<"1.Mat-120  \t903          \t2:15-3:45\tArif sir\n\n";
break;
case'W':
cout<<"Sub\t\tRoom_No\t\tTime\t\tTeacher\n----\t\t--------\t-----\t\t---------\n";
cout<<"1.Cse-221  \t903          \t9:00-10:30\tSatter sir\n\n";
cout<<"2.Cse-121  \t903          \t10:40-12:10\tArif sir\n\n";
cout<<"2.Cse-221(Lab)  Lab          \t12:10-1:50\tSatter sir\n\n";
cout<<"2.Eng-102  \t904          \t4:00-5:30\tTareq sir\n";
break;
case'w':
cout<<"Sub\t\tRoom_No\t\tTime\t\tTeacher\n----\t\t--------\t-----\t\t---------\n";
cout<<"1.Cse-221  \t903          \t9:00-10:30\tSatter sir\n\n";
cout<<"2.Cse-121  \t903          \t10:40-12:10\tArif sir\n\n";
cout<<"2.Cse-221(Lab)  Lab          \t12:10-1:50\tSatter sir\n\n";
cout<<"2.Eng-102  \t904          \t4:00-5:30\tTareq sir\n";
break;
case 'Z':
cout<<"Thursday : Reserve day for make up class\n";
cout<<"Friday   : Closing day\n";
cout<<"Saturday : Closing day\n";
break;
case 'z':
cout<<"Thursday : Reserve day for make up class\n\n";
cout<<"Friday   : Closing day\n\n";
cout<<"Saturday : Closing day\n\n";
break;
default:
cout<<"\n\t\t\tSorry,\n\t\t\tWrong Choice\n\n";
break;
}
cout<<"\n\n\n\t\t\tEnter choice again :\n\n\t\t\t[X or x]...Main menu\n\n\t\t\t[Y or y]...Exit";
cout<<"\n\n\t\t\tEnter choice :";
cin>>choice;
system("cls");
switch(choice){
case'X':
goto main;
break;
case'x':
goto main;
break;
case'Y':
break;
case'y':
break;
default:
cout<<"\n\t\t\tSorry,\n\t\t\tWrong Choice";
break;
}               
getch();
}
