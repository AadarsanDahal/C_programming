// WAP in C to draw a circle with center at (250,250) and radius 100
#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>

int main (){

    int gd =DETECT, gm;

    initgraphics(&gd, &gm, NULL);

    circle(250,250,100);

    closegraph();

    return 0;
}