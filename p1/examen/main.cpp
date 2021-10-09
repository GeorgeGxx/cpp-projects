#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{

    char name[10], prod[30];
    int cant;
    printf("estimaldo \t");
    scanf("%s", &name);
    printf(" \nagradecemos su preferencia");
    printf("\ningrese el nombre del producto:\t");
    scanf("%s", &prod);
    printf("\n anote el precio del producto\t");
    scanf("%d", &cant);
    printf("este producto tiene el descuento de :\n10%--1-3pz\n20%---4-6pz\n30%---7-10pz\n40%---11-13pz\n50%----15");
    cin.get();
}


