#include<conio.h>
//#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
void floodFill(int x,int y,int oldcolor,int newcolor)
{
    if(getpixel(x,y) == oldcolor)
    {
	putpixel(x,y,newcolor);
	floodFill(x+1,y,oldcolor,newcolor);
	floodFill(x,y+1,oldcolor,newcolor);
	floodFill(x-1,y,oldcolor,newcolor);
	floodFill(x,y-1,oldcolor,newcolor);
/*	floodFill(x+1,y+1,oldcolor,newcolor);
	floodFill(x-1,y+1,oldcolor,newcolor);
	floodFill(x+1,y-1,oldcolor,newcolor);
	floodFill(x-1,y-1,oldcolor,newcolor);   */
    }
}
//getpixel(x,y) gives the color of specified pixel

int main()
{
    int gm,gd=DETECT,radius;
    int x,y,i;

/*    cout<<"Enter x and y positions for circle\n";
    cin>>x>>y;
    cout<<"Enter radius of circle\n";
    cin>>radius;
		  */
    initgraph(&gd,&gm,"C://TURBOC3//bgi");
  //  circle(x,y,radius);
//  for(i=0;i<2;i++)
	circle(150,150,30);
	circle(140,140,5);
	circle(160,140,5);
       arc(150,160,180,0,10);
       line(150,160,160,160);
     floodFill(150,150,0,15);
     floodFill(140,140,0,1);
     floodFill(160,140,0,1);
     floodFill(150,160,0,1);
     floodFill(150,160,0,1);

    delay(100);
  //  closegraph();
    getch();
    return 0;
}
