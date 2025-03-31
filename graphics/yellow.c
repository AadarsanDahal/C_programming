// WAP in C to draw an ellipse of your choice with yellow co
#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>

int main (){

    int gd =DETECT, gm;

    initgraphics(&gd, &gm, NULL);
    setcolor(yellow);
    // ellipse(x1,y1,start angle , end angle  width, height );
    ellipse(200,200,0,360, 10, 30 );

    closegraph();

    return 0;
}