//AP in C to draw an arc of your choice with blue color.

#include <stdio.h>
#include <graphics.h>
#include <conio.h>


int main (){


int gm = DETECT,gd;
initgraphics(&gm,&gd,NULL);

setcolor(blue);
//arc (x1,y1, starting angle , ending angle , radius )
arc(200,200,0,90,100);

closegraph();




    return 0;
}