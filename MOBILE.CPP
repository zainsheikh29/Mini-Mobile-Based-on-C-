#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<Dos.h>
#include<process.h>
#include<iomanip.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>
   void draw_line(int n,char ch);
   void board();
   void gamescore(char name1[],char name2[],int p1,int p2);
   void play_dice(int &score);
void main()
{ clrscr();
int i,a,c=4,d=1;
color:
int m=4,n=1;
m=c;n=d;
textcolor(m);
textbackground(n);
     void analyze(void);
    {
     gotoxy(30,10); printf("          LOADING.....");
     gotoxy(25,11); printf("???????????????????????????????");
     gotoxy(25,12); printf("? ??????????????????????????? ?");
     gotoxy(25,13); printf("???????????????????????????????");
     for(int i=27;i<=53;i++)
     { delay(40);
      gotoxy(i,12);printf("%c",219);
     }
    }
clrscr();
int choice;
main:
cout<<"\n"<<"\t\t  	           ____ ";
cout<<"\n"<<"\t\t\t|   |   |       |  |  |    |";
cout<<"\n"<<"\t\t\t|   |   |----   |  |  |    |";
cout<<"\n"<<"\t\t\t|    |   |____   |  |   __"<<"\n\n";
cout<<" 1.Contacts";
cout<<setw(14)<<"2.Calender";
cout<<setw(17)<<"3.Memo";
cout<<setw(22)<<"4.Images"<<"\n\n\n";
cout<<" 5.Songs";
cout<<setw(27)<<"6.Mathematical tools";
cout<<setw(16)<<"7.Messeges";
cout<<setw(25)<<"8.Mobile messenger"<<"\n\n\n";
cout<<" 9.Settings";
cout<<setw(12)<<"10.GAMES";
cout<<setw(31)<<"11.Description";
cout<<setw(11)<<"12.Quit"<<"\n";
cout<<"\n Enter your choice(1-12):";
cin>>choice;
if(choice==1)
{ clrscr();
int choice;
char fnam[25],lnam[25],nu[14],email[30],gr[10];
cout<<"\n"<<"\t\t\tAdd contacts";
 cout<<"\nEnter First Name-";
 gets(fnam);
 cout<<"\nEnter Last Name-";
 gets(lnam);
 cout<<"\nEnter Mobile number-";
 gets(nu);
 cout<<"\nEnter Email id-";
 gets(email);
 cout<<"\nEnter Group(friend,family,vip,bussiness)-";
 gets(gr);
 cout<<"\nName=";puts(fnam); puts(lnam);
 cout<<"\nMobile Number=";
 puts(nu);
 cout<<"\nEmail id=";
 puts(email);
 cout<<"\nGroup=";
 puts(gr);
 cout<<"\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice(1-2):";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
}
else if(choice==2)
{ clrscr();
 struct dosdate_t reset;
 reset.year  = 2014;
 reset.day   = 1;
 reset.month = 12;
 printf("Setting date to 1/12/2014.\n");
 _dos_setdate(&reset);
 system("date");
    struct date d;
   getdate(&d);
   printf("The current year is: %d\n", d.da_year);
   printf("The current day is: %d\n", d.da_day);
   printf("The current month is: %d\n", d.da_mon);
  cout<<"\n\n1.Back?";
  cout<<"\n2.Exit?";
  cout<<"\nEnter Your choice:";
  cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
}
else
if(choice==3)
{ clrscr();
 char str[500];
 cout<<"\t\t\t\tMemo";
 cout<<"\n\n**Word limit-500**"<<endl;
 gets(str);
 cout<<"\n\n\nYour typed message is:"<<endl;
 puts(str);
 cout<<"\n\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice:";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
}
else
if(choice==4)
{ clrscr();
cout<<"\t\t\t\t images";
cout<<"\n\noops NO Images to display!!!";
cout<<"\n\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice:";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
}
else
if(choice==5)
{ clrscr();
cout<<"\t\tsongs";
cout<<"\n\noops NO Songs to play!!!";
cout<<"\n\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice:";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
}
else
if(choice==6)
{ clrscr();
  int choice;
  mat:
  cout<<"\t\t\t\t Mathematical Tools"<<"\n";
  cout<<"\t 1.calculator"<<"\n";
  cout<<"\t 2.Mathematical Functions"<<"\n";
  cout<<"\t 3.Convertor"<<"\n";
  cout<<"\t 4.Back"<<"\n";
  cout<<"\n\n Enter your choice(1-3):";
  cin>>choice;
    if (choice==1)
    { clrscr();
    int choice;
    long double add,sub,div,n1,n2,sqr,cub,per,mul,tot;
    cout<<"\t\t\t\t CALCULATOR"<<"\n\n\n";
    cout<<"\t 1.Add"<<"\n";
    cout<<"\t 2.Subtract"<<"\n";
    cout<<"\t 3.Multiply"<<"\n";
    cout<<"\t 4.Divide"<<"\n";
    cout<<"\t 5.Square"<<"\n";
    cout<<"\t 6.Cube"<<"\n";
    cout<<"\t 7.Percentage"<<"\n";
    cout<<"\t 8.Square root"<<"\n";
    cout<<"\t 9.Back"<<"\n";
    cout<<"\t Enter your choice(1-9):";
    cin>>choice;
     if(choice==1)
     { clrscr();
     cout<<"\n\n Enter a number:";
     cin>>n1;
     cout<<"\n Again enter number:";
     cin>>n2;
     add=n1+n2;
     cout<< n1<<"+"<<n2<<"="<<add;
     cout<<"\n\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice:";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
     }
     else
     if(choice==2)
     { clrscr();
     cout<<"\n\n Enter an number:";
     cin>>n1;
     cout<<"\n Again enter number:";
     cin>>n2;
     sub=n1-n2;
     cout<< n1<<"-"<<n2<<"="<<sub;

     cout<<"\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice(1-2):";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }}
     else
     if(choice==3)
     { clrscr();
     cout<<"\n\n Enter an number:";
     cin>>n1;
     cout<<"\n Again enter number:";
     cin>>n2;
     mul=n1*n2;
     cout<< n1<<"*"<<n2<<"="<<mul;
     }
     else
     if(choice==4)
     { clrscr();
     cout<<"\n\n Enter an number:";
     cin>>n1;
     cout<<"\n Again enter number:";
     cin>>n2;
     div=n1/n2;
     cout<< n1<<"/"<<n2<<"="<<div;
     }
     else
     if(choice==5)
     { clrscr();
     cout<<"\n\n Enter an number:";
     cin>>n1;
     sqr=n1*n1;
     cout<<"Square="<<sqr;
     cout<<"\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice(1-2):";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
     }
     else
     if(choice==6)
     { clrscr();
     cout<<"\n\n Enter an number:";
     cin>>n1;
     cub=n1*n1*n1;
     cout<<"Cube="<<cub;
     }
     else
     if(choice==7)
     { clrscr();
     cout<<"\n\n Enter your total (marks/points):";
     cin>>n1;
     cout<<"\n\n Enter total (marks/points):";
     cin>>tot;
     per=(n1/tot)*100;
     cout<<"\n Your percentage="<<per;
     }
     else
     if(choice==8)
     { clrscr();
     cout<<"\n\n Enter an number(only positive numbers):";
     cin>>n1;
     sqr=sqrt(n1);
     cout<<"\n Square Root="<<sqr;
     }
     else
     if(choice==9)
     { clrscr();
     goto main;
     }
   }
   else
   if(choice==2)
   { clrscr();
    int choice;
    cout<<"\t\t\t\tMATHEMATICAL FUNCTIONS"<<"\n\n\n";
    cout<<"\t 1.arc cosine of arg"<<"\n";
    cout<<"\t 2.arc sine of arg"<<"\n";
    cout<<"\t 3.arc tangent of arg"<<"\n";
    cout<<"\t 4.cosine of arg"<<"\n";
    cout<<"\t 5.absolute value"<<"\n";
    cout<<"\t 6.natural logarithm"<<"\n";
    cout<<"\t 7.sine of arg"<<"\n";
    cout<<"\t 8.tangent of arg"<<"\n";
    cout<<"\t 9.Back"<<"\n";
    cout<<"\n Enter your choice(1-9):";
     cin>>choice;
     if(choice==1)
     {
     clrscr();
     double val;
     cout<<"\n Enter value(-1 to 1):";
     cin>>val;
     cout<<acos(val);
     cout<<"\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice(1-2):";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
     }
     else
     if(choice==2)
     {clrscr();
     double val;
     cout<<"\n Enter value(-1 to 1):";
     cin>>val;
     cout<<asin(val);
     cout<<"\n\n\n1.Back?";
     cout<<"\n2.Exit?";
     cout<<"\nEnter Your choice:";
     cin>>choice;
     if(choice==1)
      { clrscr();
	goto main;
      }
     if(choice==2)
      { clrscr();
	goto exi;
      }
     }
     else
     if(choice==3)
     {clrscr();
     double val;
     cout<<"\n Enter value:";
     cin>>val;
     cout<<atan(val);
     }
     else
     if(choice==4)
     {clrscr();
     double val;
     cout<<"\nEnter value (value must be in radians):";
     cin>>val;
     cout<<cos(val);
     cout<<"\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice(1-2):";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
     }
     else
     if(choice==5)
     {clrscr();
     int val;
     cout<<"\n Enter the value:";
     cin>>val;
     cout<<fabs(val);
     }
     else
     if(choice==6)
     {clrscr();
     double val;
     cout<<"\n Enter the logarithm value:";
     cin>>val;
     cout<<log(val);
     }
     else
     if(choice==7)
     {clrscr();
     double val;
     cout<<"\nEnter value (value must be in radians):";
     cin>>val;
     cout<<sin(val);
     }
     else
     if(choice==8)
     {clrscr();
     double val;
     cout<<"\n Enter value:";
     cin>>val;
     cout<<tan(val);
     }
     else
     if(choice==9)
     {  clrscr();
     goto main;
     }
    }
  else
  if(choice==3)
  { clrscr();
   cout<<"\t\t\t  CONVERTOR";
   int choice;
   float me,mil,yar,cen,cel,farh,fee,kmil,rup,dol,hec,acr,in;
   cout<<"\n\n 1.Tempreture";
   cout<<"\n 2.Inches-Centimetre";
   cout<<"\n 3.Feet-Metres";
   cout<<"\n 4.Miles-Kilometre";
   cout<<"\n 5.Dollar-Indian Rupees";
   cout<<"\n 6.Acres-Hectares";
   cout<<"\n 7.Metres-Yards";
   cout<<"\n 8.Back";
   cout<<"\nEnter your choice:";
   cin>>choice;
   if(choice==1)
   { clrscr();
     cout<<"\n Tempreture in Fahreinheit:";
     cin>>farh;
     cel=farh*1.8;
     cout<<"\n Tempreture in Celsius:"<<cel;
     cout<<"\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice(1-2):";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
   }
  else
  if(choice==2)
  { clrscr(); cout<<"\n Measurement in Inches:";
    cin>>in;
    cen=me*2.540;
    cout<<"\n Measurment in Centimetres:"<<cen;
    cout<<"\n\n\n1.Back?";
   }
  else
  if(choice==3)
  { clrscr(); cout<<"\n Measurement in Feet:";
    cin>>fee;
    me=fee*0.3048;
    cout<<"\n Measurment in Metres:"<<me;
  }
  else
  if(choice==4)
  { clrscr(); cout<<"\n Measurement in Miles:";
    cin>>mil;
    kmil=mil*1.609;
    cout<<"\n Measurment in Kilometres:"<<kmil;
  }
  else
  if(choice==5)
  { clrscr(); cout<<"\n Amount in Dollar:";
    cin>>dol;
    rup=dol*60;
    cout<<"\n Amount in Indian rupees:"<<rup;
    cout<<"\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice(1-2):";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
  }
  else
  if(choice==6)
  { clrscr();
    cout<<"\n Measurement in Acres:";
    cin>>acr;
    hec=acr*2.471;
    cout<<"\n Measurment in Hectares:"<<hec;
  }
  else
  if(choice==7)
   {clrscr();
    cout<<"\n Measurement in Metres:";
    cin>>me;
    yar=me*1.094;
    cout<<"\n Measurment in Yards:"<<yar;
   }
   else
   if(choice==8)
   { clrscr();
   goto mat;
   }
  }}
else
if(choice==7)
 { clrscr();
 cout<<"\n\n\n"<<"\t\t\tNo Messeges received";
 }
else
if(choice==8)
{ clrscr();
 cout<<"\n\n\n"<<"\t\t\tYou Are Currently Out Of Network Area";
 cout<<"\n\n\n"<<"\t\t\tEstablish A Network First";
 cout<<"\n\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice:";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
}
else
if(choice==9)
{ clrscr();
cout<<"\t\t\t\t Settings";
cout<<"\n\n\n\n1.Network settings";
cout<<"\n2.Change Theme";
cout<<"\n\n\nEnter your choice:";
cin>>choice;
  if(choice==1)
  { clrscr();
  cout<<"\n\n\n"<<"\t\t\tPlease Insert Sim card first";
  cout<<"\n\n\n1.Back?";
  cout<<"\n2.Exit?";
  cout<<"\nEnter Your choice(1-2):";
  cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
  }
  if(choice==2)
  { clrscr();
   clrscr();
   cout<<"\n\n\n\n\n\t\t\tChange Theme";
   cout<<"\n\n\nEnter background color code:";
   cin>>d;
   cout<<"\nEnter text color code:";
   cin>>c;
   goto color;
  cout<<"\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice(1-2):";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
  }
}
else
if(choice==10)
{ clrscr();
   {
	{
   int player1=0,player2=0,lastposition;
   char player1name[80],player2name[80];
   clrscr();
   randomize();
   draw_line(50,'=');
   cout<<"\n\n\n\n\t\tSNAKE LADDER\n\n\n\n";
   draw_line(50,'=');
   cout<<"\n\n\nEnter Name of player 1 :";
   gets(player1name);
   cout<<"\n\n\Enter Name of player 2 :";
   gets(player2name);
   while(player1<=100 && player2<=100)
    {
    board();
    gamescore(player1name,player2name,player1,player2);
    cout<<"\n\n--->" <<player1name<<" Now your Turn >> Press any key to play ";
    getch();
    lastposition=player1;
    play_dice(player1);
    if(player1<lastposition)
     cout<<"\n\aOops!! Snake found !! You are at postion "<<player1<<"\n";
    else if(player1>lastposition+6)
     cout<<"\nGreat!! you got a ladder !! You are at position "<<player1;
     cout<<"\n\n--->"<<player2name<<" Now your Turn >> Press any key to play ";
    getch();
    lastposition=player2;
    play_dice(player2);
    if(player2<lastposition)
      {setcolor(RED);
      cout<<"\n\n\aOops!! Snake found !! You are at position "<<player2<<"\n";
    }else if(player2>lastposition+6)
     {setcolor(RED);
     cout<<"\n\nGreat!! you got a ladder !! You are at position "<<player2<<"\n";
     getch();}
    }
    clrscr();
    cout<<"\n\n\n";
    draw_line(50,'+');
    cout<<"\n\n\t\tRESULT\n\n";
    draw_line(50,'+');
    cout<<endl;
    gamescore(player1name,player2name,player1,player2);
    cout<<"\n\n\n";
    if(player1>=player2)
     cout<<player1name<<" !! You are the winner of the game\n\n";
    else
     cout<<player2name<<" !! You are the winner of the game\n\n";
     draw_line(50,'+');
     getch();
    }}
 cout<<"\n\n\n1.Back?";
 cout<<"\n2.Exit?";
 cout<<"\nEnter Your choice:";
 cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
}
else
if(choice==11)
{ clrscr();
cout<<"\n"<<"\tMy Friends helped me in making this app and its all my interest and";
cout<<"\thardwork in c++.THANKS to my CS teacher.";
cout<<"\n Use this app for free!!!....do according to the given instruction.";
cout<<"\n\n\n1.Back?";
cout<<"\n2.Exit?";
cout<<"\nEnter Your choice:";
cin>>choice;
   if(choice==1)
   { clrscr();
   goto main;
   }
   if(choice==2)
   { clrscr();
   goto exi;
   }
}
else
if(choice==12)
{ clrscr();
exi:
cout<<"\n\n\n"<<"\t\tI Hope You Enjoy The Application"<<"\n";
cout<<"\t\t\t Again Press ENTER";
}
getch();
}
   void draw_line(int n,char ch)
   {
    for(int i=0;i<n;i++)
    cout<<ch;
   }

   void board()
  {
   clrscr();
   cout<<"\n\n";
   draw_line(50,'-');
   cout<<"\n\t\tSNAKE AT POSITION\n";
   draw_line(50,'-');
   cout<<"\n\tFrom 98 to 28 \n\tFrom 95 to 24\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 73 to 1\n\tFrom 69 to 33\n\tFrom 64 to 36\n\tFrom 59 to 17\n\tFrom 55 to 7\n\tFrom 52 to 11\n\tFrom 48 to 9\n\tFrom 46 to 5\n\tFrom 44 to 22\n\n";
   draw_line(50,'-');
   cout<<"\n\t\t LADDER AT POSITION\n";
   draw_line(50,'-');
   cout<<"\n\tFrom 8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n";
   draw_line(50,'-');
   cout<<endl;
  }

  void gamescore(char name1[],char name2[],int p1, int p2)
 {
  cout<<"\n";
  draw_line(50,'~');
  cout<<"\n\t\tGAME STATUS\n";
  draw_line(50,'~');
  cout<<"\n\t--->"<<name1<<" is at position "<<p1<<endl;
  cout<<"\t--->"<<name2<<" is at position "<<p2<<endl;
  draw_line(50,'_');
  cout<<endl;
 }

  void play_dice(int &score)
  {
  int dice;
  dice=random(6)+1;
 cout<<"\nYou got "<<dice<<" Point !! ";
 score=score+dice;
 cout<<"Now you are at position "<<score;
 switch(score)
 {
  case 98 :score=28;break;
  case 95 :score=24;break;
  case 92 :score=51;break;
  case 83 :score=19;break;
  case 73 :score=1;break;
  case 69 :score=33;break;
  case 64 :score=36;break;
  case 59 :score=17;break;
  case 55 :score=7;break;
  case 52 :score=11;break;
  case 48 :score=9;break;
  case 46 :score=5;break;
  case 44 :score=22;break;
  case 8 :score=26;break;
  case 21 :score=82;break;
  case 43 :score=77;break;
  case 50 :score=91;break;
  case 54 :score=93;break;
  case 62 :score=96;break;
  case 66 :score=87;break;
  case 80 :score=100;
} }

