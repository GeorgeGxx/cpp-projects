#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

    {
        int valor[5], contador, numero, control;
        for (contador = 0; control > 10 && numero != 33; contador++)
        {
            printf("TECLEE UN NUMERO, 33 PARA TERMINAR\n");
            scanf("%d", &numero);
            valor[contador] = numero;
        }
        cin.get();
        return 0;
    }
}