//CG2
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>

void main()
{
    clrscr();
    int n,x,y,st,en,r,l,t,b,d,top;
    int gd = DETECT, gm;
    initgraph(&gd, &gm,"c:\\tc\\bgi");

    cout<<"Enter\n 1 for arc\n 2 for pieslice\n 3 for bar\n 4 for 3d bar\n 5 for pie chart\n 6 for baghchal board";
    cout<<"\n";
    cin>>n;
    switch(n)
    {
    case 1:
    cout<<"Enter x, y, starting angle, ending angle and radius";
    cin>>x>>y>>st>>en>>r;
    arc(x,y,st,en,r);
    break;

    case 2:
    cout<<"Enter x, y, starting angle, ending angle and radius";
    cin>>x>>y>>st>>en>>r;
    setfillstyle(1,2);
    pieslice(x,y,st,en,r);
    break;

    case 3:
    setfillstyle(1,2);
    cout<<"Enter left, top, right, bottom";
    cin>>l>>t>>r>>b;
    bar(l,t,r,b);
   // bar(250,250,350,350);
    break;

    case 4:
    setfillstyle(1,2);
    cout<<"Enter left, top, right, bottom, depth, top flag";
    cin>>l>>t>>r>>b>>d>>top;
    bar3d(l,t,r,b,d,top);
   // bar3d(350,350,450,450,120,120);
    break;

    case 5:
    setcolor(RED);
    setfillstyle(0,2);
    settextstyle(2,0,2);
    outtextxy(160,300,"Education");
    pieslice(170,370,0,50,80);
    outtextxy(220,340,"Food");
    pieslice(170,370,60,110,80);
    outtextxy(190,400,"Others");
    pieslice(170,370,120,170,80);
    outtextxy(110,380,"Electricity");
    pieslice(170,370,180,230,80);
    outtextxy(110,340,"Internet");
    pieslice(170,370,240,350,80);
    outtextxy(130,460,"Piechart & Base Expenses");
    break;

    case 6:
    rectangle(300,100,440,240);
    line(300,100,440,240);
    line(440,100,300,240);
    line(335,100,335,240);
    line(370,100,370,240);
    line(405,100,405,240);
    line(300,135,440,135);
    line(300,170,440,170);
    line(300,205,440,205);
    line(300,170,370,100);
    line(370,100,440,170);
    line(440,170,370,240);
    line(370,240,300,170);
    outtextxy(318,250,"Bagchal Board");
    break;

    default:
    cout<<"Wrong number";
    break;
    }
    getch();
    closegraph();
}