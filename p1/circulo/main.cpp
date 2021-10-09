#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int a,b,c,r,d,p,area,opcion;
main()
{
    system("cls");
    {
        gotoxy(2, 4);
        cprintf("SELECCIONE  QUE ES LO QUE DESEA REALIZAR \n ");
        gotoxy(24, 6);
        cprintf("SELECCIONE 1:calcular el perimetro de un triangulo \n ");
        gotoxy(24, 8);
        cprintf("SELECCIONE 2:calcular el area de un triangulo \n ");
        gotoxy(24, 10);
        cprintf("SELECCIONE 3:calcular el perimetro de un circulo \n  ");
        gotoxy(24, 12);
        cprintf("SELECCIONE 4:calcular la area de un circulo \n  ");
        gotoxy(24, 14);
        cprintf("introduzca una opcion:");
        scanf("%d", &opcion);
        switch (opcion)
        {
            case 1:
                cprintf("Ingrese lado a ");
                scanf("%d", &a);
                cprintf("Ingrese lado b ");
                scanf("%d", &b);
                cprintf("Ingrese lado c ");
                scanf("%d", &c);
                p = a + b + c;
                cprintf("El perimetro de su triangulo es %d\n ", p);
                break;
            case 2:
                cprintf("ingrese base ");
                scanf("%d", &b);
                cprintf("ingrese altura ");
                scanf("%d", &a);
                area = b * a / 2;
                cprintf("La area de su triangulo es %d\n ", area);
                break;
            case 3:
                cprintf("Ingrese el radio de su circulo ");
                scanf("%d", &r);
                p = 2 * 3.1416 * r;
                cprintf("El perimetro de su circulo es %d\n ", p);
                break;
            case 4:
                cprintf("Ingrese el valor de r  ");
                scanf("%d", &r);
                a = 3.1416 * r * r;
                cprintf("la area de su circulo es %d\n ", a);
                break;
        }
        cin.get();
        return 0;
    }
}


