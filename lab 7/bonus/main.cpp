#include <iostream>
#include <graphics.h>

using namespace std;



int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(RED);

    /*
    line(50, 50, 50, 200 );
    line(80, 200, 200, 200);
    line( 140, 50, 140, 200);
    line(230, 50, 230, 200);
    */

    line(50, 50, 50, 200);
    line(80, 50, 200, 50);
    line(140, 50, 140, 200);
    line(230, 50, 230, 200);


    getch();
    closegraph();



    return 0;
}

