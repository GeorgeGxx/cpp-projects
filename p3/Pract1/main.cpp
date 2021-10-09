#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int a,b,x=1,y=12,z=8;
char op;
while(x==1)
{
gotoxy(12,8);
textcolor(14);
 cprintf("É");

gotoxy(12,20);
textcolor(17);
 cprintf("È");
gotoxy(40,8);
printf("»");
gotoxy(40,20);
printf("¼");
for(y=12; x<20; x++)
{
gotoxy(y,9);
printf("Í");
gotoxy(y,19);
printf("Í");
}
for(z; z<20; z++)
{
gotoxy(11,z);
printf("º");
gotoxy(40,z);
printf("º");
}
gotoxy(20,9);
textcolor(10);
 cprintf("MENU");
gotoxy(13,11);
printf("a.Suma");
gotoxy(13,12);
textcolor(11);
 cprintf("b.Resta");
gotoxy(13,13);
textcolor(13);
 cprintf("c.Multiplicacion");
gotoxy(13,14);
textcolor(15);
 cprintf("d.Salir");
gotoxy(15,16);
textcolor(12);
 cprintf("Escoge la opcion:");
scanf("%c",&op);
switch(op)
{
case 'a':
textcolor(5);
cprintf("Programa que calcula suma de dos numeros\n\n");
textcolor(8);
 cprintf("Ingresa el primero\n");
scanf("%d",&a);
textcolor(9);
 cprintf("Ingresa el segundo:\n\n");
scanf("%d",&b);
a+b;
textcolor(2);
 cprintf("La suma de %d mas %d es %d",a,b,a+b);
printf("Presiona una tecla para ir a el menu principal");
getch();
break;
case 'b':
printf("Resta de dos numeros\n\n");
printf("Escribe el primero:\n");
scanf("%d",&a);
printf("Escribe el segundo:\n");
scanf("%d",&b);
a-b;
printf("La resta de %d menos %d es %d\n\n",a,b,a-b);
printf("Presiona una tecla para volver a el menu principal");
getch();
break;

case 'c':
printf("Multiplicacion de dos numeros\n\n");
printf("Escribe el primero:\n");
scanf("%d",&a);
printf("Escribe el segundo:\n");
scanf("%d",&b);
a*b;
printf("La multiplicacion de %d por %d es %d\n",a,b,a*b);
printf("Presiona una tecla para volver a el menu principal");
getch();
break;

case 'd':
x=4;
defauld:
printf("ERROR");
}
}
}