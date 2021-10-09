#include<stdio.h>
#include<conio.h>
main()
{
float calif1,calif2,calif3,calif4,promedio;
char nombre;
clrscr();
printf("introduce tu nombre:");
scanf("%s",&nombre);
printf("itroduce la calificacion  1:\n");
scanf("%f",&calif1);
printf("itroduce la calificacion  2:\n");
scanf("%f",&calif2);
printf("itroduce la calificacion  3:\n");
scanf("%f",&calif3);
printf("itroduce la calificacion  4:\n");
scanf("%f",&calif4);
promedio=(calif1+calif2+calif3+calif4)/4;
printf("el promedio es:%f",promedio);
{
if (promedio<=6)
printf("debes presentar examen extraordinario,tu promedio fue:%f",promedio);
else
printf("felicidades acreditaste con un promedio de:%f",promedio);
}
getch();

return 0;
}