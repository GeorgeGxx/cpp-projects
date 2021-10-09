#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    system("clear");
    char color[20], calzado[20];
    int peso;
    printf("confiesa tu calzado peso y color favorito:");
    printf("\n      calzado:");
    scanf("%s", &calzado);
    printf("\n      peso:");
    scanf("%d", &peso);
    printf("\n color favorito:");
    scanf("%s", &color);
    printf("el %s\n", color);
    printf("Como puede gustarte el %s\n", color);
    printf("calzando un %s y pesando %d kg?\n", calzado, peso);
    cin.get();
}

