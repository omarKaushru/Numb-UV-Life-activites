#include<iostream>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>
using namespace std;
class team_info{
      char team_id[10],team_leader[35];int solved;
      public:
             team_info(){
                         solved=0;
                         };
      void Set_team(char*,char*);
      void Set(int num){
                  solved=num;
                  };
      char *get_id(){
                  return team_id;
                  };
      char *get_leader(){
                  return team_leader;
                  };
      int get_solved(){
                 return solved;
                 };
      //friend void operator<<(ofstream &os,team_info ob);
        //     };
      void team_info::Set_team(char *id,char *name){
           strcpy(team_id,id);
           strcpy(team_leader,name);
           }
      //void operator<<(ofstream &os,team_info ob){
        //   os<<setiosflags(ios::left)<<setw(16)<<ob.get_id()
          //   <<setiosflags(ios::left<<setw(40)<<ob.get_leader()
            // <<setiosflags(ios::right)<<setw(4)<<ob.get_solved()<<endl;
             //}
int main(){
    ofstream myfile("team_information.txt");
    myfile<<"Team_Id\t Team_Leader\t Solved"<<endl;
    for(int i=0;i<=62;i++)
    myfile<<(char)205;
    myfile<<endl;
    team_info nsu[4];
    nsu[0].Set_team("NSUA","Sajal Acharjee");nsu[0].Set(5);
    nsu[1].Set_team("NSUB","Omar Kaushru");nsu[1].Set(1);
    nsu[2].Set_team("NSUC","Sadrul Amin");nsu[2].set(0);
    nsu[3].Set_team("NSUD","Md. Jewel Mia");nsu[3].Set(3);
    for(i=0;i<4;i++){
    myfile<<nsu[i];
}
    myfile.close();
    getch();
}         
                  
