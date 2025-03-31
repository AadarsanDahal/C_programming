//AP in C to output a string entered by the user starting at co-ordinate position (200,250).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (){

    int gm = DETECT, gd; 
    char str[10];
printf("enters a string ");
scanf("%s",str);


    initgraphics(&gm,&gd,NULL);

outtextxy(200,200,str);
getch();
closegraph();

    return 0; 
}