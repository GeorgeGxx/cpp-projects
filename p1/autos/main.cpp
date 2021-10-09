#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <list>
#include <vector>
#include <iostream>

using namespace std;

int conta,modelo,contaeuro,conta250,conta2017;
char marca[15],color[10],origen;
float precio,sumagral,sumaeuro,promgral,promeuro;

main()
{
    system("clear");
    for (conta=1;conta<=2;conta++)
    {
        fflush(stdin);
        printf("cap marca del auto %d:",conta);
        fgets(marca, 15, stdin);
        fflush(stdin);
        printf("cap el color: ");
        fgets(color, 10, stdin);
        fflush(stdin);
        printf("cap el precio: ");
        scanf("%f",&precio);
        fflush(stdin);
        printf("cap el modelo: ");
        scanf("%d",&modelo);
        fflush(stdin);
        printf("es europeo s/n: ");
        scanf("%c",&origen);
        if(origen='s: ')
        {
            contaeuro++;
            sumaeuro=sumaeuro+precio;
        }

        if(precio<=25000)
        {
            conta250++;
        }

        if(modelo==2017)
        {
            conta2017++;
        }

        sumagral=sumagral+precio;

    }

    system("clear");
    printf("los autos europeos son %d \n",contaeuro);
    printf("con precio menor a 250,000 %d \n",conta250);
    printf("los modelo 2017 %d \n",conta2017);

    promgral=sumagral/8;
    printf("promedio precios de todos %.2f \n",promgral);
    promeuro=sumaeuro/contaeuro;
    printf("promedio europeos %.2f \n",promeuro);


}


