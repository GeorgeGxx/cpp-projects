#include<stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main ()
{
    system("cls")
    int elegir_menu(void),eleccion,seleccion=0;
    printf("debes elegir una opcion del siguiente menu \n");
    {
        while(seleccion>1 && seleccion<4);
        printf("  \n");
        printf("\n1_agregar un registro");
        printf("\n2_cambiar un registro");
        printf("\n3_borrar un registro");
        printf("  \n");
        printf("\n elegir una opcion:  ");
        scanf("%d",&seleccion);
    }
    cin.get();
    return 0;
}

