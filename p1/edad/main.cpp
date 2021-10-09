#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int edad;
    char nombre;
    printf("Introduce tu nombre: ");
    scanf("%s",&nombre);
    printf ("Introduce tu edad: ");
    scanf("%d",&edad);
    if (edad>=18)
        printf("Puedes votar");
    else if (edad>=3 && edad<=5)
        printf("Estas en kinder");
    if (edad>=6 && edad<=12)
        printf("Estas en primaria");
    else if(edad>=12 && edad<=15)
        printf("Estas en secundaria");
    else if (edad>=15 && edad<18)
        printf("Estas en preparatoria");
    cin.get();
    return(0);
}
