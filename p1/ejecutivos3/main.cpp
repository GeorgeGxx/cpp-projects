#include<stdio.h>
#include<windows.h>
#include<string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int claveserv[20][6],xclave,opc,contar,opcserv,r,xr;
float estapeso[20][3];
char ejecutivo[20][40],otro,encontrado;

int main()
{

    do
    {

        system("cls");
        printf("1. Captura");
        printf("\n2. Lista general");
        printf("\n3. Lista por servicio");
        printf("\n4. Busqueda por ID");
        printf("\n5. Lista por ejecutivo");
        printf("\n6. Salir");
        printf("\n\nQue opcion quieres: ");
        scanf("%d",&opc);
        switch (opc)
        {
            case 1:
                do
                {

                    system("cls");
                    contar++;
                    fflush(stdin);
                    printf("Clave del ejecutivo: ");
                    scanf("%d",&claveserv[contar][0]);
                    fflush(stdin);
                    printf("nombre del ejecutivo: ");
                    gets(ejecutivo[contar]);
                    fflush(stdin);
                    printf("Edad: ");
                    scanf("%d",&claveserv[contar][1]);
                    fflush(stdin);
                    printf("Sexo: ");
                    printf("\n1.Masculino");
                    printf("\n2.Femenino \n");
                    scanf("%d",&claveserv[contar][2]);
                    fflush(stdin);
                    printf("Estatura: ");
                    scanf("%f",&estapeso[contar][0]);
                    fflush(stdin);
                    printf("Peso: ");
                    scanf("%f",&estapeso[contar][1]);
                    fflush(stdin);
                    printf("Pais: ");
                    printf("\n1.Mexico");
                    printf("\n2.Venezuela");
                    printf("\n3.Argentina");
                    printf("\n4.E.U.");
                    printf("\n5.Japon \n");
                    scanf("%d",&claveserv[contar][3]);
                    fflush(stdin);
                    switch(opcserv)
                    {
                        case 1:
                            claveserv[contar][4]=1;
                            estapeso[contar][2]=700;
                            cin.get();
                            break;
                        case 2:
                            claveserv[contar][4]=2;
                            estapeso[contar][2]=1000;
                            cin.get();
                            break;
                        case 3:
                            claveserv[contar][4]=3;
                            estapeso[contar][2]=600;
                            cin.get();
                            break;
                        case 4:
                            claveserv[contar][4]=4;
                            estapeso[contar][2]=1500;
                            cin.get();
                            break;
                    }
                    printf("Deseas capturar otro? s/n: ");
                    scanf("%s",&otro);
                }while (otro=='s');

                break;

            case 2:
                system("cls");
                printf("clave nombre estatura edad sexo pais peso  \n");
                for(r=1;r<=contar;r++)
                {
                    printf("%d\t%s\t%5.1f\t",claveserv[r][0],ejecutivo[r],estapeso[r][0]);
                    printf("%d",claveserv[r][1]);


                    if(claveserv[r][2]==1)
                    {
                        printf(" m ");
                    }
                    else
                    {
                        printf(" f ");
                    }
                    switch(claveserv[r][3])
                    {
                        case 1:
                            printf(" Mexico ");

                            break;
                        case 2:
                            printf(" Venezuela ");

                            break;
                        case 3:
                            printf(" Argentina ");

                            break;
                        case 4:
                            printf(" E.U.");

                            break;
                        case 5:
                            printf(" Japon ");

                            break;
                    }
                    printf("%5.1f",estapeso[r][1]);
                    switch (claveserv[r][4])
                    {
                        case 1:
                            printf("Baile 700\n");

                            break;
                        case 2:
                            printf("Privado 1000\n");

                            break;
                        case 3:
                            printf("Acompa�ante 600 \n");

                            break;
                        case 4:
                            printf("Final feliz 1500\n");

                            break;
                    }
                    printf("\n");
                }
                cin.get();
                break;

            case 3:
                printf("Que servicio quieres listar: \n");
                printf("1 Baile pista \n");
                printf("2 Baile privado \n");
                printf("3 Scort \n");
                printf("4 Final feliz X'D \n");
                scanf("%d",&xclave);
                for(r=1;r<=contar;r++)
                {
                    if(xclave==claveserv[r][4])
                    {
                        system("cls");
                        printf("Clave Nombre Estatura Edad Sexo Pais Peso  \n");
                        for(r=1;r<=contar;r++)
                        {
                            printf("%d\t%s%5.1f",claveserv[r][0],ejecutivo[r],estapeso[r][0]);
                            printf("%d ",claveserv[r][1]);

                        }
                        if(claveserv[r][2]==1)
                        {
                            printf("m");
                        }
                        else
                        {
                            printf("f");
                        }
                        switch(claveserv[r][3])
                        {
                            case 1:
                                printf("Mexico");
                                cin.get();
                                break;
                            case 2:
                                printf("Venezuela");
                                cin.get();
                                break;
                            case 3:
                                printf("Argentina");
                                cin.get();
                                break;
                            case 4:
                                printf("E.U.");
                                cin.get();
                                break;
                            case 5:
                                printf("Japon");
                                cin.get();
                                break;
                        }
                        printf("%5.1f",estapeso[r][1]);
                        switch (claveserv[r][4])
                        {
                            case 1:
                                printf("Baile 700\n");
                                cin.get();
                                break;
                            case 2:
                                printf("Privado 1000\n");
                                cin.get();
                                break;
                            case 3:
                                printf("Acompa�ante 600 \n");
                                cin.get();
                                break;
                            case 4:
                                printf("Final feliz 1500\n");
                                cin.get();
                                break;
                        }

                    }
                }

            case 4:
                encontrado='n';
                printf("Que clave buscas?: ");
                scanf("%d",&xclave);
                for(r=1;r<=contar;r++)
                {
                    if(xclave=claveserv[r][0])
                    {
                        encontrado='s';
                        xr=r;
                        r=40;
                    }
                }
                if(encontrado='s')
                {
                    system("cls");
                    printf("Clave Edad Sexo Pais Estatura Peso Costo");
                    for(r=1;r<=contar;r++)
                    {
                        printf("%d\t%s%5.1f",claveserv[r][0],ejecutivo[r],estapeso[r][0]);
                        printf("%d",claveserv[r][1]);

                    }
                    if(claveserv[r][2]==1)
                    {
                        printf("m");
                    }
                    else
                    {
                        printf("f");
                    }
                    switch(claveserv[r][3])
                    {
                        case 1:
                            printf("Mexico");
                            cin.get();
                            break;
                        case 2:
                            printf("Venezuela");
                            cin.get();
                            break;
                        case 3:
                            printf("Argentina");
                            cin.get();
                            break;
                        case 4:
                            printf("E.U.");
                            cin.get();
                            break;
                        case 5:
                            printf("Japon");
                            cin.get();
                            break;
                    }

                    printf("%5.1f",estapeso[r][1]);
                    switch (claveserv[r][4])
                    {
                        case 1:
                            printf("Baile 700\n");
                            cin.get();
                            break;
                        case 2:
                            printf("Privado 1000\n");
                            cin.get();
                            break;
                        case 3:
                            printf("Acompa�ante 600 \n");
                            cin.get();
                            break;
                        case 4:
                            printf("Final feliz 1500\n");
                            cin.get();
                            break;
                    }
                }
                else
                {
                    printf("Clave no encontrada! ");

                }
                break;



        }
    }while(opc<6);



}
