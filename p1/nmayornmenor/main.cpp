#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;
    clrscr();
    gotoxy(10,5);
    textcolor(13 );
    cprintf("introduce el primer numero:");
    scanf("%f",&a);
    gotoxy(5,6);
    cprintf("introduce el segundo numero:");
    scanf("%f",&b);
    gotoxy(5,7);
    cprintf("introduce el tercer numero:");
    scanf("%f",&c);
    if(a>b)
        cprintf("EL NUMERO MENOR ES EL: %f",a);
    else
    if(b>c)
        printf(" EL NUMERO MAYOR ES EL:%f",b);
    else
    if(c>a)
        printf("EL NUMERO MAYOR ES:%f",c);
    else
        printf("EL NUMERO MAYOR ES:%f",a);
    getch();
}
