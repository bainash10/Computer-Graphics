//CG1-Nischal
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int main(){
int n,x,y,x1,y1,r,st,en,ma,mina;
int gd=DETECT, gm;
initgraph(&gd,&gm,"..//BGI");
printf("Enter the choice \n 1 for point \n 2 for line \n 3 for rectangle \n 4 for square \n 5 for triangle \n 6 for circle \n 7 for ellipse \n");
scanf("%d",&n);
switch(n)
{
case 1:
cout<<"Enter x and y resp";
cin>>x;
cin>>y;
putpixel(x,y,RED);
outtextxy(x,y+1,"POINT");
break;

case 2:
cout<<"Enter x1 and y1 resp";
cin>>x;
cin>>y;
cout<<"Enter x2 and y2 resp";
cin>>x1;
cin>>y1;
line(x,y,x1,y1);
break;

case 3:
cout<<"Enter x1 and y1 resp";
cin>>x;
cin>>y;
cout<<"Enter x2 and y2 resp";
cin>>x1;
cin>>y1;
rectangle(x,y,x1,y1);
break;

case 4:
cout<<"Enter x1 and y1 resp";
cin>>x;
cin>>y;
cout<<"Enter x2 and y2 resp";
cin>>x1;
cin>>y1;
rectangle(x,y,x1,y1);
break;

case 5:
cout<<"Enter x1 and y1 resp";
cin>>x;
cin>>y;
cout<<"Enter x2 and y2 resp";
cin>>x1;
cin>>y1;
cout<<"Enter x3 and y3 resp";
cin>>x2;
cin>>y2;
line(x,y,x1,y1);
line(x,y,x2,y2);
line(x1,y1,x2,y2);
break;

case 6:
cout<<"Enter x and y and r resp";
cin>>x;
cin>>y;
cin>>r;
circle(x,y,r);
break;

case 7:
cout<<"Enter x and y, starting angle, ending angle, major and minor axis resp";
cin>>x;
cin>>y;
cin>>st;
cin>>en;
cin>>ma;
cin>>mina;
ellipse(x,y,st,en,ma,mina);
break;

default:
printf("Please enter valid number only");
break;
}
getch();
closegraph();
return 0;
}

