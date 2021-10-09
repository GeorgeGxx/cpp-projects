#include<stdio.h>
#include<conio.h>
main()
{
float h, b, a;
clrscr();
printf("ingresa la altura del triangulo:");
scanf("%f",&h);
printf("ingresa la base del triangulo:");
scanf("%f",&b);
a=(h*b)/2;
printf("el area del triangulo es:%f",a);
getch();
return (h,a);
}