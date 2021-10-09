#include <stdio.h>
#include <conio.h>
void main()
{
int edad;
clrscr();
printf("Introduce la edad de una persona:\n",edad);
scanf("%d",&edad);
if (edad>=18)
printf("eres mayor de edad puedes votar!\n");
else
printf("eres menor de edad no puedes votar!\n");
getch();
}

