#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

void main ()
{
int gd=DETECT,gm;
int max=479,min=10,x,y,r,r2,max1=639,min1=20;
int i;

clrscr();
initgraph(&gd,&gm,"C:/TurboC3/BGI");
y=rand();
x=rand();

r=(y%(max-min+1)+min);
r2=(x%(max1-min1+1)+min1);

circle(r2,r,10);



for(i=1;i<=639-50;i++)
{

line(i,10,20+i,10);
delay(2);
cleardevice();
}












getch();
closegraph();
}