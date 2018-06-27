#include<graphics.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm,xin=1,ang=0,x1,y1;
    struct arccoordstype a;
    initgraph(&gd,&gm,"");
    while(!kbhit())
    {
        setcolor(0);
        arc(0,0,ang,ang+1,100);
        getarccoords(&a);
        x1=a.xstart;
        y1=a.ystart/2;
        int arr[10]={320+x1,240+y1,240-y1,320+x1,320-x1,240-y1,240+y1,320-x1,320+x1,240+y1};
        setcolor(15);
        drawpoly(5,arr);
        delay(20);
        cleardevice();
        ang++;
    }
    getch();
    closegraph();
    return 0;
}
