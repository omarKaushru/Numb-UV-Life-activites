//************************************************************************
//------------------------------------------------------------------------------------------
//                                                                        
//                -*-    VIRTUAL SOFTWARE MACHINE     -*-                 
//                                                                        
//------------------------------------------------------------------------------------------
//        -*- Language.: C & C++. -*- Compiler.: Turbo C & C++.  -*-      
// -*- Designed by.: Vikrantsingh.M.Bisen [vikrantsingh.it@gmail.com] -*- 
//------------------------------------------------------------------------------------------
//************************************************************************

//************************************************************************
//             -*-      Including Header File         -*-                 
//************************************************************************

#include<iostream.h>
#include<graphics.h>
#include<iomanip.h>
#include<process.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<dos.h>


//************************************************************************//
//            -*-     CLASSES IN THE PROGRAM         -*-                  //
//************************************************************************//
class Home;
class Display;
class Admin;
class Database;
class Bill;
class CRM;
struct profit
{
 char name_profit[30],batch_no_profit[30],date_profit[30];
 int quantity_profit;
}pro;
//************************************************************************//
//            -*-     Function for Mouse Programing         -*-           //        //
//************************************************************************//
union REGS i,o;
initmouse()
   {
    i.x.ax=0;
    int86(0x33,&i,&o);
    return(o.x.ax);
   }
showmouseptr()
   {
    i.x.ax=1;
    int86(0x33,&i,&o);
    return 1;
   }
hidemouseptr()
   {
    i.x.ax=1;
    int86(0x33,&i,&o);
    return 1;
   }
restrictmouseptr(int x1,int y1,int x2,int y2)
   {
    i.x.ax=7;
    i.x.cx=x1;
    i.x.dx=x2;
    int86(0x33,&i,&o);
    i.x.ax=8;
    i.x.cx=y1;
    i.x.dx=y2;
    int86(0x33,&i,&o);
    return 1;
   }
getmousepos(int *button,int *x,int *y)
   {
    i.x.ax=3;
    int86(0x33,&i,&o);
    *button=o.x.bx;
    *x=o.x.cx;
    *y=o.x.dx;
    return 1;
   }

//************************************************************************//
//            -*-     Function for Responce         -*-                   //
//************************************************************************//
void getchoice_database();
void getchoice_bill();
void getchoice_admin();
void getchoice_expiry();
//************************************************************************//
//            -*-     Class for Display Entrance    -*-                   //
//************************************************************************//
class Home
{
  private:
  int button,x,y,r,i,j,k,l;
  void animate(int,int);
  public:
  Home()
  {r=1;}
  void home1();
  void box(int i,int j,int k,int l,int=0,int=0);
  void textbox(int i,int j,int k,int l);
  void getchoice_home();
  int check_password();
  void edit_password();
};
void Home::box(int i,int j,int k,int l,int c,int s)//Draw 3D Rectangle
{
     setcolor(WHITE);
     line(i,j,k,j);line(i,j,i,l);
     setcolor(DARKGRAY);
     line(i,l,k,l);line(k,j,k,l);
    if(s!=0)
    {
     rectangle(i+1,j+1,k-1,l-1);setfillstyle(1,c);floodfill(i+2,j+2,DARKGRAY);
    }
}
void Home::textbox(int i,int j,int k,int l) //Draw 3D Text box
{
     setcolor(DARKGRAY);
     line(i,j,k,j);line(i,j,i,l);
     setcolor(WHITE);
     line(i,l,k,l);line(k,j,k,l);
}
int Home::check_password()
{
  cleardevice();
  setbkcolor(RED);
  int x,y,button;
  char pass_file[50],pass_enter[50];
  fstream f;
  f.open("PASS_M.TXT",ios::app);
  f.seekp(0,ios::end);
  int s=f.tellp();
  f.close();
  if(s<=0)
  {
  f.open("PASS_M.TXT",ios::out);
  f<<"PASSWORD";
  f.close();
  }
  f.open("PASS_M.TXT",ios::in);
  f>>pass_file;
  f.close();
  setcolor(LIGHTCYAN);
  setfillstyle(1,CYAN);
  rectangle(50,50,580,400);
  floodfill(101,101,LIGHTCYAN);
  box(80,220,200,245,14,1);textbox(240,220,550,245);//32x15
  box(150,300,300,320,12,1);
  box(330,300,490,320,12,1);
  setcolor(LIGHTCYAN);
  rectangle(70,110,570,115);
  rectangle(70,200,570,330);
  settextstyle(0,HORIZ_DIR,2);
  setcolor(RED);
  outtextxy(105,75," VISVESVARYA SOFTWARES Co.");
  settextstyle(2,HORIZ_DIR,5);
  outtextxy(117,337,"SOFTWARE DEVELOPED BY:- VIKRANTSINGH BISEN,");
  setcolor(RED);
  settextstyle(1,HORIZ_DIR,2);
  outtextxy(85,120,"To Access This Software...");
  outtextxy(85,150,"Kindly Enter Correct Password...");
  setcolor(DARKGRAY);
  settextstyle(2,HORIZ_DIR,5);
  outtextxy(95,225,"PASSWORD");
  outtextxy(200,302,"CANCEL");outtextxy(400,302,"O.K");
  int i,j;
  initmouse();showmouseptr();
  while(1)
  {
    getmousepos(&button,&x,&y);
    if(x>120&&x<220&&y>220&&y<245&&button&1==1)
     {
       i=-1;gotoxy(32,15);cout<<"                                     ";
       gotoxy(32,15);
       do
       {
    i++;
    pass_enter[i]=getch();
    if(pass_enter[i]!=13)
    cout<<"*";
       }while(pass_enter[i]!=13);
       pass_enter[i]='\0';
      }
    else if(x>150&&x<300&&y>300&&y<320&&button&1==1)
    {return 0;}
    else if(x>330&&x<490&&y>300&&y<320&&button&1==1)
    {
       if(strcmp(pass_enter,pass_file)==0)
       return 1;
       else
       return 2;
    }
    else
    {}
  }
}
void Home::edit_password()
{
  cleardevice();
  setbkcolor(RED);
  int x,y,button;
  char pass_file[50],pass_old[50],pass_new[50];
  fstream f;
  f.open("PASS_M.TXT",ios::in);
  f>>pass_file;
  f.close();
  setcolor(LIGHTCYAN);
  setfillstyle(1,CYAN);
  rectangle(50,50,580,400);
  floodfill(101,101,LIGHTCYAN);
  box(80,170,200,195,14,1);textbox(240,170,550,195);//32x12
  box(80,220,200,245,14,1);textbox(240,220,550,245);//32x15
  box(150,300,300,320,12,1);
  box(330,300,490,320,12,1);
  setcolor(RED);
  settextstyle(1,HORIZ_DIR,2);
  outtextxy(85,100,"To Access The Adminstrative Sevices...");
  outtextxy(85,130,"You Have To Enter Username & Password.");
  setcolor(DARKGRAY);
  settextstyle(2,HORIZ_DIR,5);
  outtextxy(95,175,"OLD PASSWORD");outtextxy(95,225,"NEW PASSWORD");
  outtextxy(200,302,"CANCEL");outtextxy(400,302,"O.K");
  int i,j;
  initmouse();showmouseptr();
  while(1)
  {
    getmousepos(&button,&x,&y);
    if(x>120&&x<220&&y>170&&y<195&&button&1==1)
    {i=-1;gotoxy(32,12);cout<<"                                     ";
     gotoxy(32,12);
     do
     {
       i++;
       pass_old[i]=getch();
       if(pass_old[i]!=13)cout<<"*";
      }while(pass_old[i]!=13);
      pass_old[i]='\0';
    }
    else if(x>120&&x<220&&y>220&&y<245&&button&1==1)
     {
       i=-1;gotoxy(32,15);cout<<"                                     ";
       gotoxy(32,15);
     do
     {
       i++;
       pass_new[i]=getch();
       if(pass_new[i]!=13)cout<<"*";
      }while(pass_new[i]!=13);
      pass_new[i]='\0';
     }
    else if(x>150&&x<300&&y>300&&y<320&&button&1==1)
    {return ;}
    else if(x>330&&x<490&&y>300&&y<320&&button&1==1)
    {
       if((strcmp(pass_file,pass_old)==0))
       {
    f.open("PASS_M.TXT",ios::out);
    f<<pass_new;
    f.close();
    outtextxy(200,322,"Success in changing password");
    delay(300);
    return ;
       }
    outtextxy(200,322,"Failure in changing password");
    delay(300);
    return ;
    }
    else
    {}
  }
}
void Home::home1()
{
     cleardevice();
     setbkcolor(RED);
     setfillstyle(1,RED);
     setcolor(DARKGRAY);
     rectangle(0,1,639,479);
     floodfill(2,2,DARKGRAY);
     setfillstyle(1,BROWN);
     box(230,90,410,120+1,6,1);     //C1
     box(230,340,410,370+1,6,1);     //C2
     box(230,210,410,240+1,6,1);    //C3
     box(400,150,570,180+1,6,1);   //R1
     box(100,150,270,180+1,6,1);   //L1
     box(400,270,570,300+1,6,1);   //R2
     box(100,270,270,300+1,6,1);   //L2
     box(400,400,570,430+1,6,1);   //R3
     box(100,400,270,430+1,6,1);   //L3
     line(230,121,170,121);line(230,241,170,241);
     line(230,371,170,371);line(400,181,350,181);
     line(100,181,50,181);line(400,301,350,301);
     line(100,301,50,301);line(400,431,350,431);
     line(100,431,50,431);
     setcolor(YELLOW);
     settextstyle(2,HORIZ_DIR,5);
     outtextxy(237,97,"  * ADMINISTRATION *");
     outtextxy(247,217,"  * DATABASE *");
     outtextxy(257,347,"  * INFO *");
     outtextxy(112,157,"  * BILLING *");
     outtextxy(412,157,"* RECENT EXPIRY *");
     outtextxy(415,277,"  * HELP *");
     outtextxy(110,277," * EDIT PASSWORD *");
     outtextxy(422,407,"  * REGISTER * ");
     outtextxy(122,407,"  * EXIT * ");
     setfillstyle(1,GREEN);
     setcolor(LIGHTGREEN);
     rectangle(1,1,638,70);rectangle(4,4,635,67);floodfill(2,2,LIGHTGREEN);
     rectangle(1,450,638,479);floodfill(2,452,LIGHTGREEN);
     rectangle(4,454,635,476);rectangle(1,1,638,479);
     setfillstyle(2,GREEN);
     setcolor(LIGHTGREEN);
     rectangle(1,70,30,450);floodfill(2,72,LIGHTGREEN);
     rectangle(610,70,638,450);floodfill(612,72,LIGHTGREEN);
     setfillstyle(1,GREEN);
     floodfill(6,6,LIGHTGREEN);
     setcolor(RED);
     settextstyle(0,HORIZ_DIR,3);
     outtextxy(5,25," VISVESVARYA SOFTWARES Co.");
     setcolor(RED);
     settextstyle(2,HORIZ_DIR,5);
     outtextxy(17,457,"SOFTWARE DEVELOPED BY:- VIKRANTSINGH BISEN AND VIJAY KASTURE ...");
}
void Home::animate(int n,int m)
{
 r+=2;
 if(r>10||r<1)r=1;
 if(n==1)
  {
   setcolor(YELLOW);
   switch(m)
   {
       case 1 :
        rectangle(235,93,405,117);       //C1
        setcolor(YELLOW);
        circle(200,101,r);
        break;
       case 2 :
        rectangle(105,153,267,177);      //L1
        setcolor(YELLOW);
        circle(70,161,r);
        break;
       case 3 :
        rectangle(405,153,565,177);       //R1
        setcolor(YELLOW);
        circle(370,161,r);
        break;
       case 4 :
        rectangle(235,213,405,237);      //C2
        setcolor(YELLOW);
        circle(200,221,r);
        break;
       case 5 :
        rectangle(105,273,265,297);        // L2
        setcolor(YELLOW);
        circle(70,281,r);
        break;
       case 6 :
        rectangle(405,273,565,297);        // R2
        setcolor(YELLOW);
        circle(370,281,r);
        break;
       case 7 :
        rectangle(235,343,405,367);         //C3
        setcolor(YELLOW);
        circle(200,351,r);
        break;
       case 8 :
        rectangle(105,403,265,427);         // L3
        setcolor(YELLOW);
        circle(70,411,r);
        break;
       case 9 :
        rectangle(405,403,565,427);         // R3
        setcolor(YELLOW);
        circle(370,411,r);
        break;
   }
   setcolor(CYAN);
    if(m!=1)rectangle(235,93,405,117);       //C1
    if(m!=2)rectangle(105,153,267,177);      //L1
    if(m!=3)rectangle(405,153,565,177);       //R1
    if(m!=4)rectangle(235,213,405,237);      //C2
    if(m!=5)rectangle(105,273,265,297);        // L2
    if(m!=6)rectangle(405,273,565,297);        // R2
    if(m!=7)rectangle(235,343,405,367);         //C3
    if(m!=8)rectangle(105,403,265,427);         // L3
    if(m!=9)rectangle(405,403,565,427);         // R3
    setcolor(0);delay(100);
    circle(200,101,r);circle(70,161,r);
    circle(370,161,r);circle(200,221,r);
    circle(70,281,r);circle(370,281,r);
    circle(200,351,r);circle(70,411,r);
    circle(370,411,r);
  }
  if(n==2)
  {
    setcolor(CYAN);rectangle(235,93,405,117);       //C1
    setcolor(CYAN);rectangle(105,153,267,177);      //L1
    rectangle(405,153,565,177);       //R1
    rectangle(235,213,405,237);      //C2
    rectangle(105,273,265,297);        // L2
    rectangle(405,273,565,297);        // R2
    rectangle(235,343,405,367);         //C3
    rectangle(105,403,265,427);         // L3
    rectangle(405,403,565,427);         // R3
    setcolor(0);
    circle(200,101,r);circle(70,161,r);
    circle(370,161,r);circle(200,221,r);
    circle(70,281,r);circle(370,281,r);
    circle(200,351,r);circle(70,411,r);
    circle(370,411,r);
  }


}
void Home::getchoice_home()
{
 home1();
 initmouse();showmouseptr();
 while(1)
 {
   getmousepos(&button,&x,&y);
   if(x>220&&x<410&&y>80&&y<120)animate(1,1);
   else if(x>90&&x<270&&y>140&&y<180)animate(1,2);
   else if(x>390&&x<570&&y>140&&y<180)animate(1,3);
   else if(x>220&&x<410&&y>200&&y<240)animate(1,4);
   else if(x>90&&x<270&&y>260&&y<300)animate(1,5);
   else if(x>390&&x<570&&y>260&&y<300)animate(1,6);
   else if(x>220&&x<410&&y>330&&y<370)animate(1,7);
   else if(x>90&&x<270&&y>390&&y<430)animate(1,8);
   else if(x>390&&x<570&&y>390&&y<430)animate(1,9);
   else animate(2,0);
   if(x>230&&x<410&&y>90&&y<120&&(button &1)==1)
   {
      delay(200);getchoice_admin();
      home1();initmouse();showmouseptr();

   }
   if(x>90&&x<270&&y>140&&y<180&&(button &1)==1)
   {
      delay(200);getchoice_bill();
      home1();initmouse();showmouseptr();
   }
   if(x>390&&x<570&&y>140&&y<180&&(button &1)==1)
   {
     delay(200);getchoice_expiry();
     home1();initmouse();showmouseptr();
   }
   if(x>220&&x<410&&y>200&&y<240&&(button &1)==1)
    {
      delay(200);getchoice_database();
      home1();initmouse();showmouseptr();
    }
   if(x>90&&x<270&&y>260&&y<300&&(button &1)==1)
    {
      delay(200);edit_password();
      home1();initmouse();showmouseptr();
    }
   if(x>390&&x<570&&y>260&&y<300&&(button &1)==1)
   {
   }
   if(x>220&&x<410&&y>330&&y<370&&(button &1)==1)
    return;
   if(x>90&&x<270&&y>390&&y<430&&(button &1)==1)
   exit(0);
   if(x>390&&x<570&&y>390&&y<430&&(button &1)==1)
    return;
  }
}

//************************************************************************//
//            -*-     Class for Display Total Structure        -*-        //        //
//************************************************************************//

class Display:public Home
{
 private:
 int i,j,k,l;
 public:
 void border();
 void menu_boxes();                                  //Menu bar.
 void menu_boxes_left();
 void refresh(int=0);
};
void Display::refresh(int x)
{
 cleardevice();
 setbkcolor(0);
// initmouse();
// showmouseptr();
// hidemouseptr();
 border();
 if(x==0)menu_boxes_left();
 menu_boxes();
}
void Display::border()
{
//   cleardevice();
  // setbkcolor(0);
   setfillstyle(1,0);
   setcolor(DARKGRAY);
   rectangle(0,20,640,50);       //menu bar
   floodfill(11,22,DARKGRAY);
   setcolor(DARKGRAY);
   rectangle(0,440,640,460);     //bottom bar
   floodfill(11,452,DARKGRAY);
   line(20,23,620,23);
   line(20,47,620,47);
   setcolor(DARKGRAY);
   setfillstyle(1,RED);
   rectangle(0,1,640,20);
   floodfill(5,5,DARKGRAY);
   rectangle(0,460,640,480);
   floodfill(15,475,DARKGRAY);
  //---------------
   setcolor(YELLOW);
   settextstyle(2,0,7);
   outtextxy(10,0,"== Office Productivity Tools....");
   settextstyle(2,0,5);
   outtextxy(600,3,"? X");
   box(7,6,33,18);
   box(612,4,626,18);
   box(595,4,610,18);
   setcolor(DARKGRAY);
   //---------------
   rectangle(0,0,640,480);
}
void Display::menu_boxes()
{
   setfillstyle(1,LIGHTGREEN);setcolor(DARKGRAY);
   j=27;
   for(i=30;i<580;i+=85)
   box(i-1,j-1,i+75,j+16,10,1);
   settextstyle(2,HORIZ_DIR,5);
   outtextxy(45,27,"HOME"); outtextxy(135,27,"ADD");
   outtextxy(225,27,"EDIT");outtextxy(305,27,"VIEW");
   outtextxy(380,27,"DELETE");outtextxy(465,27,"SEARCH");
   setcolor(RED);outtextxy(560,27,"HELP");
 }
void Display::menu_boxes_left()
{
   setfillstyle(1,0);
   rectangle(625,50,640,440);          //right scroll bar
   floodfill(635,400,DARKGRAY);
   rectangle(0,50,100,440);            //left
   floodfill(35,400,DARKGRAY);
   rectangle(100,425,625,440);         //bottom scroll bar
   floodfill(135,435,DARKGRAY);
   //---------------    right scroll bar  ----------------
   setcolor(DARKGRAY);
   line(628,90,632,70);line(632,70,637,90);
   box(628,70,637,90);
   line(628,400,632,420);line(632,420,637,400);
   box(628,400,637,420);box(628,100,637,390);
    //---------------    bottom scroll bar  ----------------
   line(110,432,130,428);line(110,432,130,437);
   box(110,428,130,437);
   line(615,432,595,428);line(615,432,595,437);
   box(595,428,615,437);box(150,428,575,437);
   box(5,70,95,85);
   rectangle(5,85,95,210);
   box(5,235,95,250);
   rectangle(5,250,95,375);
   setcolor(YELLOW);
   for( i=90;i<375;i+=25)                         //87x15
   {     if(i==215)i=255;
    rectangle(6,i,93,i+15);
    setfillstyle(1,YELLOW);
    floodfill(7,i+1,YELLOW);
   }
}
//***********************************************************************//
//            -*-      CLASS DATABASE     -*-                            //
//***********************************************************************//
class Database:public Display
{
char delear[50],product_name[50],batch_no[50],note[20],temp[50],product_type[4],date_database[9];
int quantity,exp_dd,exp_mm,exp_yy;
float rate,mrp;
int button,x,y;
public:
Database()
{
   rate=mrp=quantity=exp_dd=exp_mm=exp_yy=0;
   delear[0]=product_name[0]=batch_no[0]=note[0]=temp[0]='\0';
  _strdate(date_database);
}
double read(int,int,int=0);
void print(int,int,double);
void getdata(int=0);
void putdata();
void database_struct();
void editrecord_database();
int check(Database A,Database B)
{
   if((strcmp(A.delear,B.delear)==0)&&(strcmp(A.product_name,B.product_name)==0)&&(strcmp(A.batch_no,B.batch_no)==0))
   return 1;
   else
   return 0;
}
friend int search_database(Database &,int);
//-----------------
friend void database_bill(Bill &,int);
friend int search_admin_bill_data(Admin &,fstream&,fstream&,int);
friend void recent_expiry();
friend void recent_expiry(int &);
};
double Database::read(int x,int y,int z)
{
  do{gotoxy(x,y);cout<<"_";gotoxy(x,y);gets(temp);}while(strlen(temp)==0);
  if(z==0){strupr(temp);return 0;}
  else{char *endptr;double d;d=strtod(temp,&endptr);return d;}
}
void Database::print(int x,int y,double z)
{
  int i=2;long t=z;
  while(t!=0){ t=int(t/10);i++;}
   settextstyle(2,HORIZ_DIR,5);
  gcvt(z,i, temp);outtextxy(x,y,temp);
}
void Database::database_struct()
{
   refresh();
   box(120,77,220,100,14,1);textbox(240,77,600,100);//32x6
   box(120,125,220,150,14,1);textbox(240,125,600,150);//32x9
   box(120,170,220,195,14,1);textbox(240,170,600,195);//32x12
   box(120,220,220,245,14,1);
   textbox(240,220,280,245);//32x15
   box(120,268,220,293,14,1);
   textbox(240,268,280,293);//32x18
   textbox(300,268,340,293);//39x18
   textbox(360,268,400,293);//47x18
   box(120,315,220,338,14,1);textbox(240,315,370,338);//32x21
   box(380,315,450,338,14,1);textbox(460,315,600,338);//59x21
   box(120,360,220,385,14,1);textbox(240,360,370,385);//32x24
   box(380,360,450,385,14,1);textbox(460,360,600,385);//59x24
   setcolor(DARKGRAY);
   settextstyle(2,HORIZ_DIR,5);
   outtextxy(125,80,"DEALER");outtextxy(125,128,"PRODUCT");
   outtextxy(125,173,"BATCH NO");outtextxy(125,223,"TYPE");outtextxy(285,223,"1-TABLETS,2-SYRUPS,3-INJECTION,4-OTHERS.");
   outtextxy(125,271,"EXPIRY DATE");outtextxy(425,271,"DD/MM/YY.");
   outtextxy(125,318,"RATE/pc");outtextxy(392,318,"M.R.P/pc");
   outtextxy(125,363,"QUANTITY");outtextxy(392,363,"NOTE");
}
void Database::getdata(int c)
{
 settextstyle(2,HORIZ_DIR,5);
 if(c==0)
 {
  database_struct();
  read(32,6);strcpy(delear,temp);
  read(32,9);strcpy(product_name,temp);
  read(32,12);strcpy(batch_no,temp);
  read(32,15);strcpy(product_type,temp);
  exp_dd=read(32,18,1);exp_mm=read(39,18,1);exp_yy=read(47,18,1);
  rate=read(32,21,1);mrp=read(59,21,1);quantity=read(32,24,1);
  read(59,24);strcpy(note,temp);
  box(300,400,450,420,12,1);outtextxy(332,403,"SAVE RECORD");
 }
 else
 {
    switch(c)
    {
         case 1:
          gotoxy(32,6);cout<<"                                          ";
          read(32,6);strcpy(delear,temp);
        break;
         case 2:
          gotoxy(32,9);cout<<"                                          ";
          read(32,9);strcpy(product_name,temp);
        break;
         case 3:
          gotoxy(32,12);cout<<"                                          ";
          read(32,12);strcpy(batch_no,temp);
        break;
         case 4:
         gotoxy(32,15);cout<<"   ";
         read(32,15);strcpy(product_type,temp);
        break;
         case 5:
         gotoxy(32,18);cout<<"   ";gotoxy(39,18);cout<<"   ";gotoxy(47,18);cout<<"    ";
         exp_dd=read(32,18,1);exp_mm=read(39,18,1);exp_yy=read(47,18,1);
        break;
         case 6:
        gotoxy(32,21);cout<<"               ";
        rate=read(32,21,1);
        break;
         case 7:
        gotoxy(59,21);cout<<"               ";
        mrp=read(59,21,1);
        break;
         case 8:
        gotoxy(32,24);cout<<"               ";
        quantity=read(32,24,1);
        break;
         case 9:
        gotoxy(59,24);cout<<"               ";
        read(59,24);strcpy(note,temp);
        break;
     }
 }

}
void Database::putdata()
{
 settextstyle(2,HORIZ_DIR,5);
 database_struct();
 setcolor(LIGHTCYAN);outtextxy(249,80,delear);
 outtextxy(249,128,product_name);outtextxy(249,173,batch_no);
 outtextxy(249,223,product_type);
 print(249,271,exp_dd);print(309,271,exp_mm);print(369,271,exp_yy);
 print(249,318,rate);print(469,318,mrp);
 print(249,363,quantity);outtextxy(469,363,note);
 box(300,400,450,420,12,1);outtextxy(332,403,"CLOSE RECORD");
}
void Database::editrecord_database()
{
  int x,y,button,choice;
  int i=0;
  while(1)
  {
    setcolor(LIGHTGREEN);
    getmousepos(&button,&x,&y);
    //--------navigation
    if(x>120&&x<220&&y>77&&y<100)
    { rectangle(120,77,220,100);i=1;}
    else if(x>120&&x<220&&y>125&&y<150)
    { rectangle(120,125,220,150);i=2;}
    else if(x>120&&x<220&&y>170&&y<195)
    { rectangle(120,170,220,195);i=3;}
    else if(x>120&&x<220&&y>220&&y<245)
    { rectangle(120,220,220,245);i=4;}
    else if(x>120&&x<220&&y>268&&y<293)
    { rectangle(120,268,220,293);i=5;}
    else if(x>120&&x<220&&y>315&&y<338)
    { rectangle(120,315,220,338);i=6;}
    else if(x>380&&x<450&&y>315&&y<338)
    { rectangle(380,315,450,338);i=7;}
    else if(x>120&&x<220&&y>360&&y<385)
    { rectangle(120,360,220,385);i=8;}
    else if(x>380&&x<450&&y>360&&y<385)
    { rectangle(380,360,450,385);i=9;}
    else if(x>300&&x<450&&y>400&&y<420)
    { rectangle(300,400,450,420);i=10;}
    else
    i=0;
    //-----------Edit Record
    if(x>120&&x<220&&y>77&&y<100&&button&1==1)
       getdata(1);
    else if(x>120&&x<220&&y>125&&y<150&&button&1==1)
       getdata(2);
    else if(x>120&&x<220&&y>170&&y<195&&button&1==1)
       getdata(3);
    else if(x>120&&x<220&&y>220&&y<245&&button&1==1)
       getdata(4);
    else if(x>120&&x<220&&y>268&&y<293&&button&1==1)
       getdata(5);
    else if(x>120&&x<220&&y>315&&y<338&&button&1==1)
       getdata(6);
    else if(x>380&&x<450&&y>315&&y<338&&button&1==1)
       getdata(7);
    else if(x>120&&x<220&&y>360&&y<385&&button&1==1)
       getdata(8);
    else if(x>380&&x<450&&y>360&&y<385&&button&1==1)
       getdata(9);
    else if(x>300&&x<450&&y>400&&y<420&&button&1==1)
    return;
    else;

    //---------------animate
    setcolor(BROWN);
     if(i!=1)rectangle(120,77,220,100);if(i!=2)rectangle(120,125,220,150);
     if(i!=3)rectangle(120,170,220,195);if(i!=4)rectangle(120,220,220,245);
     if(i!=5)rectangle(120,268,220,293);if(i!=6)rectangle(120,315,220,338);
     if(i!=7)rectangle(380,315,450,338);if(i!=8)rectangle(120,359,220,385);
     if(i!=9)rectangle(380,359,450,385);if(i!=10)rectangle(300,400,450,420);
  }
}
//***********************************************************************//
//               -*-      CLASS FOR BILL      -*-                        //
//***********************************************************************//
class Bill:public Display
{
  char customer_name[20],dr_name[20],product_name_bill[10][50],batch_no_bill[10][50],date_bill[9];
  int quantity_bill[10],total_product,lineno,set;
  float rate_bill[10],mrp_bill[10],total;
  public:
  Bill();
  void structure_bill();
  void bill_add_click();
  void get_bill();
  void del_bill();
  void print_bill();
 //---------
  friend void database_bill(Bill &,int=0);
  friend int search_admin_bill_data(Admin &,fstream&,fstream&,int);
};
void Bill::Bill()
  {
   set=0;
   lineno=14;
   total_product=0;
   total=0;
   _strdate(date_bill);
   customer_name[0]=dr_name[0]='\0';
   for(int i=0;i<10;i++)quantity_bill[i]=0;
  }
void Bill::del_bill()
{
  if(total_product>0&&total_product<15)
  {
   gotoxy(6,lineno);cout<<"  ";
   gotoxy(10,lineno);cout<<"                ";
   gotoxy(27,lineno);cout<<"    ";
   gotoxy(33,lineno);cout<<"                ";
   gotoxy(51,lineno);cout<<"           ";
   gotoxy(64,lineno);cout<<"          ";
   gotoxy(64,27);cout<<"        ";
   total-=mrp_bill[total_product-1];
   total_product--;
   lineno--;
   gotoxy(64,27);cout<<total;
  }
  else
  {
   gotoxy(32,6);cout<<"                                        ";
   gotoxy(32,9);cout<<"                                        ";
   set=0;
   Bill();
   gotoxy(64,27);cout<<"        ";
   total=0;
   gotoxy(64,27);cout<<total;
  }
}

void Bill::print_bill()
{
  setcolor(0);
  for(int i=0;i<60;i++)
  line(0,i,640,i);
  for(i=440;i<480;i++)
  line(0,i,640,i);
  setcolor(15);
  rectangle(1,1,638,479);
  rectangle(1,1,638,60);
  rectangle(0,440,638,479);
  settextstyle(0,0,2);
  outtextxy(60,20,"SHREE VENKATESH MEDICAL STORE");
  outtextxy(220,455,"GET WELL SOON");
  settextstyle(2,0,5);
  outtextxy(170,40,"SRINAGAR, NANDED-431605 ");
  outtextxy(510,5,"PH.:9370420879 ");
  _strdate(date_bill);
  outtextxy(520,40,"Date.:");
  outtextxy(560,40,date_bill);
  fstream f;
  f.open("PROFIT.TXT",ios::app);
  for(i=0;i<total_product;i++)
  {
   _strdate(pro.date_profit);
   pro.quantity_profit=quantity_bill[i];
   strcpy(pro.name_profit,product_name_bill[i]);
   strcpy(pro.batch_no_profit,batch_no_bill[i]);
   f.write((char*)&pro,sizeof(pro));
  }
  f.close();

}
void Bill::get_bill()
{
     set=1;
     do
     {
     gotoxy(32,6);cout<<"_";gotoxy(32,6);
     gets(customer_name);
     }while(strlen(customer_name)==0);
     do
     {
     gotoxy(32,9);cout<<"_";gotoxy(32,9);
     gets(dr_name);
     }while(strlen(dr_name)==0);

}
void Bill::structure_bill()
{
   total_product=0;
   lineno=14;
   total=0;
   int button,x,y;
   refresh(1);
   box(80,77,220,100,14,1);textbox(240,77,580,100);//32x6
   box(80,125,220,150,14,1);textbox(240,125,580,150);//32x9
   settextstyle(2,0,6);
   setcolor(11);
   outtextxy(32,175,"SN.   PROD.NAME   Q.T.Y    BATCH NO.  RATE/pc.   M.R.P");
   outtextxy(420,413,"TOTAL");
   setcolor(CYAN);
   rectangle(30,170,590,432);
   line(30,200,590,200);
   line(60,170,60,412);
   line(200,170,200,412);
   line(250,170,250,412);
   line(390,170,390,412);
   line(490,170,490,432);
   line(590,170,590,432);
   rectangle(30,412,590,432);
   setcolor(DARKGRAY);
   settextstyle(2,HORIZ_DIR,5);
   outtextxy(125,80,"Customer");outtextxy(125,128,"Doctor");

}
void Bill::bill_add_click()
{
    if(set==0){get_bill();return;}
     lineno++;
     gotoxy(6,lineno);
     cout<<total_product+1;
     setcolor(15);
   do
     {
     gotoxy(10,lineno);cout<<"_";gotoxy(10,lineno);
     gets(product_name_bill[total_product]);
     }while(strlen(product_name_bill[total_product])==0);
    strupr(product_name_bill[total_product]);
   char temp[5],*p;
    do{
     gotoxy(27,lineno);cout<<"_";gotoxy(27,lineno);
     gets(temp);
     }while(strlen(temp)==0);
    quantity_bill[total_product]=strtod(temp,&p);
   do
     {
     gotoxy(33,lineno);cout<<"_";gotoxy(33,lineno);
     gets(batch_no_bill[total_product]);
     }while(strlen(batch_no_bill[total_product])==0);
    strupr(batch_no_bill[total_product]);
     total_product++;
}
//***********************************************************************//
//            -*-      CLASS FOR ADMINISTRATION      -*-                 //
//***********************************************************************//
class Admin:public Display
{
   private:
   char month_year[8],type[4];
   public:
   void structure_admin();
   void getdata_admin();
   void putdata_admin();
   friend int search_admin_bill_data(Admin &,fstream&,fstream&,int);
};
void Admin::structure_admin()
{
/*  int x=enter_admin();
   if(x==0){return;}
   //refresh();
*/  cleardevice();
  setbkcolor(0);
  setcolor(DARKGRAY);
//  rectangle(5,5,637,468);
 border();
 menu_boxes_left();
 box(50,25,125,45,14,1);
 box(155,25,220,45,14,1);
 box(240,25,315,45,14,1);
 box(335,25,410,45,14,1);
 box(430,25,505,45,14,1);
 box(525,25,600,45,14,1);
 setcolor(DARKGRAY);
 settextstyle(2,HORIZ_DIR,5);
 outtextxy(75,26,"HOME");outtextxy(160,26,"SEARCH");
 outtextxy(260,26,"BACK");outtextxy(355,26,"NEXT");
 outtextxy(450,26,"CLOSE");outtextxy(550,26,"HELP");

 //-----------------------
}
void Admin::getdata_admin()
{
   structure_admin();
   box(110,77,260,100,14,1);textbox(280,77,480,100);//38x6
   box(110,125,260,150,14,1);textbox(280,123,340,150);//38x9
   settextstyle(2,0,6);
   setcolor(CYAN);
   outtextxy(115,77,"Month And Year");
   outtextxy(500,77,"MM/YY");
   outtextxy(115,128,"Type of Prod.");
   outtextxy(350,128,"1.TAB.2.SYP.3.IV.4.Others.");
   do
     {
     gotoxy(38,6);cout<<"_";gotoxy(38,6);
     gets(month_year);
     }while(strlen(month_year)==0);
    do
    {
     gotoxy(38,9);cout<<"_";gotoxy(38,9);
     gets(type);
     }while(strlen(type)==0);

}
void Admin::putdata_admin()
{
  settextstyle(2,0,5);
  structure_admin();
  setcolor(CYAN);
  rectangle(108,60,610,420);
  line(110,80,610,80);
  line(132,60,132,420);
  line(270,60,270,420);
  line(410,60,410,420);
  line(460,60,460,420);
  line(515,60,515,420);
  outtextxy(111,61,"SN"); //15x7
  outtextxy(135,61,"PRODUCT");//18x7
  outtextxy(275,61,"BATCH NO");//35x7
  outtextxy(415,61,"QTY.AV");//53x7
  outtextxy(465,61,"QTY.SL");//59x7
  outtextxy(525,61,"NET PROFIT");//67x7
}
class Expiry:public Display
{
  public:
  void structure();
  friend void recent_expiry(int &);
};
void Expiry::structure()
{
 cleardevice();
 setbkcolor(0);
 setcolor(DARKGRAY);
 border();
 menu_boxes_left();
 box(50,25,125,45,14,1);
 box(155,25,220,45,14,1);
 box(240,25,315,45,14,1);
 box(335,25,410,45,14,1);
 box(430,25,505,45,14,1);
 box(525,25,600,45,14,1);
 setcolor(DARKGRAY);
 settextstyle(2,HORIZ_DIR,5);
 outtextxy(75,26,"HOME"); setcolor(LIGHTGRAY);
 outtextxy(160,26,"SEARCH");
 setcolor(DARKGRAY);
 outtextxy(260,26,"BACK");outtextxy(355,26,"NEXT");
 outtextxy(450,26,"CLOSE");outtextxy(550,26,"HELP");
 settextstyle(2,0,5);
 setcolor(CYAN);
 rectangle(108,60,610,420);
  line(110,80,610,80);
  line(132,60,132,420);
  line(270,60,270,420);
  line(410,60,410,420);
//  line(460,60,460,420);
  line(515,60,515,420);
  outtextxy(111,61,"SN"); //15x7
  outtextxy(135,61,"PRODUCT");//18x7
  outtextxy(275,61,"BATCH NO");//35x7
  outtextxy(415,61,"QTY.AV");//53x7
 // outtextxy(465,61,"QTY.SL");//59x7
  outtextxy(525,61,"EXP.DATE");//67x7
}
//***********************************************************************//
//            -*-      FRIEND   FUNCTIONS   -*-                          //
//***********************************************************************//
void recent_expiry(int &check)
{
 Database *data1,tempdata;
 int i;
 fstream f;
 f.open("CSR.TXT",ios::app);
 f.seekp(0,ios::end);
 int n=f.tellp()/sizeof(tempdata);
 f.close();
 data1=(Database*)malloc(n*sizeof(tempdata));
 if(check<0||check>=n)check=0;
 f.open("CSR.TXT",ios::in);
 for(i=0;i<n;i++)
 {f.read((char*)&data1[i],sizeof(tempdata));}
 f.close();
 int j=0,h=100;
 char date[9];
 _strdate(date);
 char t2[10],t[3],*p;
 t[0]=date[3];
 t[1]=date[4];
 t[2]='\0';
 int dd=strtod(t,&p);
 t[0]=date[0];
 t[1]=date[1];
 t[2]='\0';
 int mm=strtod(t,&p);
 t[0]=date[6];
 t[1]=date[7];
 t[2]='\0';
 int yy=strtod(t,&p);
 char temp2[20];
 char td[4],tm[4],ty[4];
 for(i=15*check;i<n&&j<15;i++)
  {
   if((data1[i].exp_yy<yy)||((data1[i].exp_yy==yy)&&(data1[i].exp_mm<mm))||(data1[i].exp_yy==yy)&&(data1[i].exp_mm==mm)&&(data1[i].exp_dd<dd))
    {
      gcvt(j+1,2,temp2);
      outtextxy(113,h,temp2);
      strncpy(temp2,data1[i].product_name,15);temp2[15]='\0';
      outtextxy(135,h,temp2);
      strncpy(temp2,data1[i].batch_no,15);temp2[15]='\0';
      outtextxy(279,h,temp2);
      gcvt(data1[i].quantity,2,temp2);
      outtextxy(444,h,temp2);
      gcvt(data1[i].exp_yy,2,ty);
      gcvt(data1[i].exp_mm,2,tm);
      gcvt(data1[i].exp_dd,2,td);
      strncpy(temp2,data1[i].date_database,15);temp2[15]='\0';
      outtextxy(524,h,td);outtextxy(542,h,":");outtextxy(548,h,tm);
      outtextxy(566,h,":");outtextxy(570,h,ty);
      h+=15; j++;
    }
  }
}
///////////////////////////////////////////////////////////////////////
int search_database(Database &data,int size)
{
 int x,y,button;
 Database *data1,tempdata;
 tempdata.refresh();
 settextstyle(2,HORIZ_DIR,5);
 rectangle(110,52,615,90); tempdata.box(115,60,180,85,14,1);
 tempdata.textbox(190,60,480,85); tempdata.box(490,60,560,85,14,1); tempdata.box(570,60,612,85,14,1);
 setcolor(BLUE); outtextxy(120,62,"Search");
 outtextxy(495,62,"Continue");outtextxy(571,62,"Close");
 cout.setf(ios::left,ios::adjustfield);cout.width(30);
 initmouse();showmouseptr();
 tempdata.read(26,5);
 char pattern[20],temp2[20];
 strcpy(pattern, tempdata.temp);
 int l=strlen(pattern),h=140,c[10],m=0;
 setcolor(LIGHTGRAY);
 rectangle(110,110,615,380);
 line(110,130,615,130);line(130,110,130,380);
 line(275,110,275,380);line(440,110,440,380);
 rectangle(110,390,615,422);
 tempdata.box(120,395,340,420,14,1); tempdata.textbox(350,395,550,420); //45x26
 setcolor(CYAN);
 outtextxy(111,112,"Sr");outtextxy(135,112,"Dealer");
 outtextxy(290,112,"Product");outtextxy(455,112,"Batch no.");
 outtextxy(130,397,"Enter Sr no. to View Detail");
 int i;
 fstream f;
 f.open("CSR.TXT",ios::app);
 f.seekp(0,ios::end);
 int n=f.tellp()/sizeof(tempdata);
 f.close();
 f.open("CSR.TXT",ios::in);
 data1=(Database*)malloc(n*sizeof(tempdata));
 for(i=0;i<n;i++)
  {
    f.read((char*)&data1[i],sizeof(tempdata));
  }
 f.close();
 for(i=14*size;i<n&&m<15;i++)
 {
  if((strncmp(data1[i].delear,pattern,l)==0)||(strncmp(data1[i].product_name,pattern,l)==0)||(strncmp(data1[i].batch_no,pattern,l)==0))
     {
      gcvt(m+1,2,temp2);
      outtextxy(113,h,temp2);
      strncpy(temp2,data1[i].delear,15);temp2[15]='\0';
      outtextxy(135,h,temp2);
      strncpy(temp2,data1[i].product_name,15);temp2[15]='\0';
      outtextxy(279,h,temp2);
      strncpy(temp2,data1[i].batch_no,15);temp2[15]='\0';
      outtextxy(444,h,temp2);
      h+=15;c[m]=i,m++;
     }
  }
  while(1)
  {
    getmousepos(&button,&x,&y);
    if(x>490&&x<560&&y>60&&y<85&&button&1==1)
    {
      tempdata.refresh();
      initmouse();showmouseptr();//return 0;
    }
    else if(x>570&&x<610&&y>60&&y<85&&button&1==1)
    {
       tempdata.refresh();initmouse();showmouseptr();return 0;
    }
    else if(x>110&&x<600&&y>390&&y<422&&button&1==1)
    {
       int t=tempdata.read(45,26,1);data=data1[c[t-1]];data.putdata();
       initmouse();showmouseptr();return 1;
    }
    else;
  }
}
void database_bill(Bill &B,int x)
{
  fstream f;
  int set=0;
  Database *tempdata,temp_d;
  int i=B.total_product-1;
  if(x==0)
  {
   f.open("CSR.TXT",ios::in);
   while(f.read((char*)&temp_d,sizeof(temp_d)))
   {
    if(strcmp(temp_d.product_name,B.product_name_bill[i])==0&&strcmp(temp_d.batch_no,B.batch_no_bill[i])==0)
    {
     set=1;
     break;
    }
   }
   f.close();
   if(set==1)
       {
     if(temp_d.quantity<B.quantity_bill[i])
     {
      gotoxy(51,B.lineno);cout<<"N/A";
      gotoxy(64,B.lineno);cout<<"N/A";
      B.rate_bill[i]=0;
      B.mrp_bill[i]=0;
      B.total+=0;
      return;
     }
     else
     {
      //------Display
      B.rate_bill[i]=temp_d.mrp;
      B.mrp_bill[i]=B.rate_bill[i]*B.quantity_bill[i];
      B.total+=B.mrp_bill[i];
      gotoxy(51,B.lineno);cout<<B.rate_bill[i];
      gotoxy(64,B.lineno);cout<<B.mrp_bill[i];
      gotoxy(64,27);cout<<"        ";
      gotoxy(64,27);cout<<B.total;
     }
       }
    else
     {
      gotoxy(51,B.lineno);cout<<"N/A";
      gotoxy(64,B.lineno);cout<<"N/A";
      B.rate_bill[i]=0;
      B.mrp_bill[i]=0;
      gotoxy(64,27);cout<<"        ";
      gotoxy(64,27);cout<<B.total;
     // B.total=0;
      return;
      }

   }
   else
   {
       f.open("CSR.TXT",ios::app);
       f.seekp(0,ios::end);
       int size =f.tellp()/sizeof(temp_d);
       f.close();
       tempdata=(Database*)malloc(size*sizeof(temp_d));
       f.open("CSR.TXT",ios::in);
       //---------Read
       for(int count=0;count<size;count++)
       {f.read((char*)&tempdata[count],sizeof(tempdata[count]));}
       f.close();
       //---------Check
      for(int j=0;j<=i;j++)
       {
       for(count=0;count<size;count++)
     {
      if(strcmp(tempdata[count].product_name,B.product_name_bill[j])==0&&strcmp(tempdata[count].batch_no,B.batch_no_bill[j])==0)
      {
       tempdata[count].quantity-=B.quantity_bill[i];
       set=1;
      }
     }
       }
       f.open("CSR.TXT",ios::out);
       for(count=0;count<size;count++)
       {
    f.write((char*)&tempdata[count],sizeof(tempdata[count]));
       }
    free(tempdata);
    f.close();
   }
}
///////////////////////////////////////////////////////////////////////

int search_admin_bill_data(Admin &A,fstream &f1,fstream &f2,int check)
{
  Database data,*tempdata;
  struct profit B,*tempbill;
  A.putdata_admin();
  initmouse();showmouseptr();
  int lineno=7;
  int count=1,j,k;
  int netsale=0;
  float netprofit=0;
  char t1[9],t2[9];
       f1.open("CSR.TXT",ios::app);
       f1.seekp(0,ios::end);
       int Dsize =f1.tellp()/sizeof(data);
       f1.close();
       tempdata=(Database*)malloc(Dsize*sizeof(data));
       f1.open("CSR.TXT",ios::in);
       for(int i=0;i<Dsize;i++)
       {f1.read((char*)&tempdata[i],sizeof(tempdata[i]));}
       f1.close();
       //----------
       f2.open("BILL_REC.TXT",ios::app);
       f2.seekp(0,ios::end);
       int Bsize =f2.tellp()/sizeof(B);
       f2.close();
       tempbill=(profit*)malloc(Bsize*sizeof(B));
       f2.open("PROFIT.TXT",ios::in);
       for(i=0;i<Bsize;i++)
       {f2.read((char*)&tempbill[i],sizeof(tempbill[i]));
       }
       f2.close();
    if(check>Dsize)check=0;
    for(i=check;i<Dsize;i++)
    {
     if(count>15&&i<Dsize)return i;
     if(count>15&&i>=Dsize)return i;
     netprofit=0;netsale=0;
     t1[0]=tempdata[i].date_database[0];t1[1]=tempdata[i].date_database[1];
     t1[2]=tempdata[i].date_database[2];t1[3]=tempdata[i].date_database[6];
     t1[4]=tempdata[i].date_database[7];t1[5]='\0';
     if((strcmp(tempdata[i].product_type,A.type)==0)&&(strcmp(t1,A.month_year)==0))
     {
      gotoxy(15,lineno);cout<<count++;
      gotoxy(18,lineno);cout<<tempdata[i].product_name;
      gotoxy(35,lineno);cout<<tempdata[i].batch_no;
      gotoxy(53,lineno);cout<<tempdata[i].quantity;
      for(int j=0;j<Bsize;j++)
       {
    t2[0]=tempbill[j].date_profit[0];t2[1]=tempbill[j].date_profit[1];
    t2[2]=tempbill[j].date_profit[2];t2[3]=tempbill[j].date_profit[6];
    t2[4]=tempbill[j].date_profit[7];t2[5]='\0';
    if((strcmp(tempdata[i].product_name,tempbill[j].name_profit)==0)&&(strcmp(t2,A.month_year)==0))
      {
        netprofit+=tempbill[j].quantity_profit*(tempdata[i].mrp-tempdata[i].rate);
        netsale+=tempbill[j].quantity_profit;
        break;
      }
    }
       gotoxy(59,lineno);cout<<netsale;
       gotoxy(67,lineno);cout<<netprofit;
      lineno++;
     }
    }
    return 0;
}
//***********************************************************************//
//            -*-      NORMAL   FUNCTION     -*-                         //
//***********************************************************************//
void getchoice_admin()
{
  int button,x,y,check=0;
  fstream f1,f2;
  Admin A;
  settextstyle(2,HORIZ_DIR,5);
  A.structure_admin();
  initmouse();showmouseptr();
  while(1)
  {
    getmousepos(&button,&x,&y);
    //-----Home
    if(x>50&&x<125&&y>25&&y<45&&button&1==1)
    {
    return;
    }
    //-----search
    else if(x>155&&x<220&&y>25&&y<45&&button&1==1)
    {
    delay(200);
    A.getdata_admin();
    check=0;
    check=search_admin_bill_data(A,f1,f2,check);
    }
    //-----Back
    else if(x>240&&x<315&&y>25&&y<45&&button&1==1)
    {
    //check=search_admin_bill_data(A,f1,f2,check);
    }
    //-----Next
    else if(x>335&&x<410&&y>25&&y<45&&button&1==1)
    {
    check=search_admin_bill_data(A,f1,f2,check);
    }
    //-----close
    else if(x>430&&x<505&&y>25&&y<45&&button&1==1)
    {
    delay(200);
    check=0;
    A.structure_admin();
    }
    //-----Help
    else if(x>525&&x<600&&y>25&&y<45&&button&1==1)
    {
    return;
    }
    else
    {}
  }
}
//////////////////////////////////////////////////////////////////
void getchoice_database()
{
  Database data,data_temp,data_backup,*tempdata;
  int button,x,y,set=0,size=0;
  fstream f;
  data.refresh();
  settextstyle(2,HORIZ_DIR,5);
  initmouse();showmouseptr();
  while(1)
  {
    getmousepos(&button,&x,&y);
    if(x>30&&x<105&&y>27&&y<45&&button&1==1)
    {
     delay(200);return;
    }
    else if(x>115&&x<190&&y>27&&y<45&&button&1==1)
    {
      size=0;
      data.getdata();
      f.open("CSR.TXT",ios::app);
      f.write((char*)&data,sizeof(data));
      f.close();
      f.open("SRH.TXT",ios::app);
      f.write((char*)&data,sizeof(data));
      f.close();
     }
    else if(x>200&&x<275&&y>27&&y<45&&button&1==1)
    {
      if(set)
      {
       size=0;
       data_backup=data;
       data.editrecord_database();
       f.open("CSR.TXT",ios::app);
       f.seekp(0,ios::end);
       int size =f.tellp()/sizeof(data_temp);
       f.close();
       tempdata=(Database*)malloc(size*sizeof(data_temp));
       f.open("CSR.TXT",ios::in);
       for(int count=0;count<size;count++)
       {f.read((char*)&tempdata[count],sizeof(tempdata[count]));}
       f.close();
       for(count=0;count<size;count++)
       {
    int j=data.check(tempdata[count],data_backup);
    if(j){tempdata[count]=data;break;}
       }
       f.open("CSR.TXT",ios::out);
       for(count=0;count<size;count++)
       {
    f.write((char*)&tempdata[count],sizeof(tempdata[count]));
       }
    free(tempdata);
    f.close();
      }
     }
    else if(x>285&&x<360&&y>27&&y<45&&button&1==1)
    {
      size=0;
      data.putdata();
      set=1;
    }
    else if(x>370&&x<445&&y>27&&y<45&&button&1==1)
    {
      size=0;
      if(set)
      {
       data_backup=data;
       f.open("CSR.TXT",ios::app);
       f.seekp(0,ios::end);
       int size =f.tellp()/sizeof(data_temp);
       f.close();
       tempdata=(Database*)malloc(size*sizeof(data_temp));
       f.open("CSR.TXT",ios::in);
       for(int count=0;count<size;count++)
       {f.read((char*)&tempdata[count],sizeof(tempdata[count]));}
       f.close();
       f.open("CSR.TXT",ios::out);
       for(count=0;count<size;count++)
       {
    int j=data.check(tempdata[count],data_backup);
    if(!j){f.write((char*)&tempdata[count],sizeof(tempdata[count]));}
       }
       free(tempdata);
       f.close();
       data.refresh();  initmouse();showmouseptr();
      }
    }
    else if(x>455&&x<530&&y>27&&y<45&&button&1==1)
    {
      size=0;
      set=search_database(data,size);
    }
    else if(x>540&&x<615&&y>27&&y<45&&button&1==1)
    {delay(200);return;}
    else if(x>300&&x<450&&y>400&&y<420&&button&1==1)
    {data.refresh();  initmouse();showmouseptr();set=0;}
    else
    {}
  }

}
/////////////////////////////////////////////////////////////////////////
void getchoice_bill()
{
  Bill b;
  fstream f;
  b.structure_bill();
  initmouse();showmouseptr();
  int set=0;
  int button,x,y;
  while(1)
  {
    getmousepos(&button,&x,&y);
    if(x>30&&x<105&&y>27&&y<45&&button&1==1)
    {
      /////////back to home/////////////
     delay(200);return;
    }
    else if(x>115&&x<190&&y>27&&y<45&&button&1==1)
    {    ////////////adding/////////////
      if(set==0){ b.get_bill();set++;}
      b.bill_add_click();
      database_bill(b);
    }
    else if(x>200&&x<275&&y>27&&y<45&&button&1==1)
    { //////////editing////////////
       delay(200);
       b.del_bill();
    }
    else if(x>285&&x<360&&y>27&&y<45&&button&1==1)
    {  //////////printing/////////////
       database_bill(b,1);
       f.open("BILL_REC.TXT",ios::app);
       f.write((char*)&b,sizeof(b));
       f.close();
       b.print_bill();
       initmouse();showmouseptr();
       getch();
       b.structure_bill();
    }
    else if(x>370&&x<445&&y>27&&y<45&&button&1==1)
    {
    }
    else if(x>455&&x<530&&y>27&&y<45&&button&1==1)
    {
    }
    else if(x>540&&x<615&&y>27&&y<45&&button&1==1)
    {delay(200);return;}
   else
    {  }
 }
}
//////////////////////////////////////////////////////////////////////
void getchoice_expiry()
{
  int button,x,y,check=0;
  fstream f1,f2;
  settextstyle(2,HORIZ_DIR,5);
  Expiry e;
  e.structure();
  recent_expiry(check);
  initmouse();showmouseptr();
  while(1)
  {
    getmousepos(&button,&x,&y);
    //-----Home
    if(x>50&&x<125&&y>25&&y<45&&button&1==1)
    {
    return;
    }
    //-----Back
    else if(x>240&&x<315&&y>25&&y<45&&button&1==1)
    {
    delay(200);
    check--;
       recent_expiry(check);
    }
    //-----Next
    else if(x>335&&x<410&&y>25&&y<45&&button&1==1)
    {
    delay(200);
       check++;
       recent_expiry(check);
    }
    //-----close
    else if(x>430&&x<505&&y>25&&y<45&&button&1==1)
    {
    delay(200);
    e.structure();
    }
    //-----Help
    else if(x>525&&x<600&&y>25&&y<45&&button&1==1)
    {
    return;
    }
    else
    {}
  }
}

///////////////////////////////////////////////////////
//***********************************************************************//
//            -*-      MAIN   FUNCTION     -*-                           //
//***********************************************************************//
void main()
{
int gd=DETECT,gm,maxx,maxy;
initgraph(&gd, &gm,"c:\\tc\\bgi");
setbkcolor(CYAN);
maxx=getmaxx();
maxy=getmaxy();
restrictmouseptr(1,1,maxx-1,maxy-1);
Home d;
int i=d.check_password();
if(i==1)
{
initmouse();showmouseptr();
d.getchoice_home();
}
Admin a;
a.putdata_admin();
}
////////////////////////////////////////////////////////////////////
// -- files --
//CSR.:Current Stock Record.
//SRH.:Stock Record History.
//PASS_M.:Password Protection.
//PROFIT.:Transaction.
//BILL_REC.:Billing Detail.
///////////////////////////////////////////////////////////////////