#include<stdio.h>
#include<windows.h>
#include<string.h>
#include <stdlib.h>

struct felicidad
{
    int clave;
    char nombre[30];
    int servicio;
    int edad;
    char sexo;
    float peso;
    float estatura;
    int pais;
    float costo;
};

felicidad ejecutivo[100];

int opc, contar, r, c, xr;
char otro, resp;

int main()
{
    do
    {
        system("cls");
        /*  menu


        */
        printf("que opcion quieres ");
        scanf("%d",&opc);
        switch(opc)
        {
            case 1:
                system("cls");
                do
                {
                    system("cls");
                    contar++;
                    fflush(stdin);
                    printf("clave del ejecutivo ");
                    scanf("%d",&ejecutivo[contar].clave);
                    fflush(stdin);
                    printf("nombre del ejecutivo ");
                    gets(ejecutivo[contar].nombre);
                    fflush(stdin);
                    printf("servicios \n");
                    printf("1 baile de pista \n");
                    printf("2 baile privado \n");
                    printf("3 compania \n");
                    printf("4 final feliz \n");
                    scanf("%d",&ejecutivo[contar].servicio);
                    fflush(stdin);
                    printf("edad ");
                    scanf("%d",&ejecutivo[contar].edad);
                    fflush(stdin);
                    printf("setzo del ejecutivo  ");
                    scanf("%c",&ejecutivo[contar].sexo);
                    switch(ejecutivo[contar].servicio)
                    {
                        case 1:
                            ejecutivo[contar].costo=300;
                            break;
                        case 2:
                            ejecutivo[contar].costo=600;
                            break;
                        case 3:
                            ejecutivo[contar].costo=500;
                            break;
                        case 4:
                            ejecutivo[contar].costo=1500;
                            break;

                    }//termina switch servicio


                    fflush(stdin);
                    printf("quieres csapturar otro servicio ");
                    scanf("%c",&otro);

                }while(otro=='s');



                break;
        }//termina switch principal

    }while(opc<7);



}








