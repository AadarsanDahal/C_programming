//C to draw a rectangle of your choice with red color.


#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>


int main (){


int gm = DETECT, gd;

initgraphics(&gm,&gd,NULL);

setcolour(red);
 //printing a raectangle
 rectangle(100,200,300,400);
 closegraph();

    return 0;
}