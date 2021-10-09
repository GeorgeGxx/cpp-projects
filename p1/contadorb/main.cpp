#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int array [5];
main()
{
    system("cls");
    int contador = 0, numero;
    printf("Este programa Recibe 5 numeros\n");
    printf("Cada numero deve ser entre 1y10\n");
    while (contador < 5)
    {
        numero = 0;
        while (numero > 1 && numero <= 10)
            ;
        {
            printf("Introduce el primer numero %d de 5:", contador + 1);
            scanf("%d", &numero);
        }
        array[contador] = numero;
        contador++;
    }
    for(contador=0;contador<5;contador++)
        printf("\nEl valor %d es %d",contador+1,array[contador]);
    cin.get();
    return 0;
}


