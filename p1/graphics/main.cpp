#include<conio.h>
#include<graphics.h>
#include<dos.h>
main()
{
    int a=detect,b,i,c;
    initgrap(&a,&b,"c:\\TC\\BGI");
    getbcolor(8);
    setcolor(2);
    circle(200,20,40);
    delay(360);
    clear device();
    getch();
    closegraph();
    return(0);
}
