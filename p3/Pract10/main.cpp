#include<stdio.h>
#include<conio.h>
float a,b,c,d;
float promedio;
main()
{
clrscr();
printf("introduce el valor de a:\n");
scanf("%f",&a);
printf("introduce el valor de b:\n");
scanf("%f",&b);
printf("introduce el valor de c:\n");
scanf("%f",&c);
printf("introduce el valor de d:\n");
scanf("%f",&d);
promedio=(a+b+c+d)/4;
printf("el promedio de las calificaciones es%f:\n",promedio);
getch();
return (promedio);
}