#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main()
{

    int elegir_menu[3];
    int eleccion;
    eleccion=elegir_menu[3];
    printf("debes elegir una opcion del siguiente menu ");
    do
    {
        printf("\n");
        printf("\n1.-agregar un registro");
        printf("\n2.-cambiar un registro");
        printf("\n3.-borrar un registro");
        printf("\nelige una opcion:\t");
        scanf("%d",&eleccion);
    }
    while(eleccion<1 != eleccion>4 );
    printf("\n\n\t\t\ta elegido la opcion %d",eleccion);
    cin.get();
    return 0;
}