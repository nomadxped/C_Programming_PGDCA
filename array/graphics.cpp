#include<stdio.h>
#include<graphics.h>

main() {
    int gdriver = DETECT, gmode;
    int x1 = 200, y1 = 200;
    int x2 = 300, y2 = 300;
    
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    
    // draw line with coordinates(x1, y1) and (x2, y2)
    line(x1, y1, x2, y2);
    
    closegraph();
}
