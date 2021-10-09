#include <stdio.h>
#include <conio.h>
main()
{
float cal1, cal2, cal3, cal4, promedio;
char nombre;
clrscr();
printf ("introduce tu nombre:\n");
scanf("%s",&nombre);
printf("introduce la calificacion 1:\n");
scanf("%f",&cal1);
printf("introduce la calificacion 2:\n");
scanf("%f",&cal2);
printf("introduce la calificacion 3:\n");
scanf("%f",&cal3);
printf("introduce la calificacion 4:\n");
scanf("%f",&cal4);
promedio=(cal1+cal2+cal3+cal4)/4;
if (promedio<6)
printf("estas reprobado con un promedio de:\n%f",promedio);
else
printf("estas aprobado con un promedio de:\n%f",promedio);
getch();
return 0;
}




