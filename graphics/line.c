#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>


int main (){

int gd = DETECT, gm; 

initgraph(&gd, &gm, NULL);
//line (x1, y1, x2, y2);
line(100, 100, 200, 200);
getch();

closegraph();
    return 0;
}



