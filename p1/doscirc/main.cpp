#include<conio.h>
#include<graphics.h>
#include<dos.h>
main()
{
    int a=DETECT,b,i,c;
    initgraph(&a,&b,"C:\\TC\\BGI");
    setbkcolor(8);
    setcolor(2);
    circle(130,20,40);
    circle(190,30,50);
    delay(3000);
    cleardevice();
    getch();
    closegraph();
    return(0);
}
