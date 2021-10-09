#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

struct datos
{
    int id;
    int tipo;
    int tamano;
    float precio;
};

datos pizza[100];
int contar,r,opc,i,j;
char otro,resp;
int auxid,auxtipo;
int auxtamano;
float auxprecio;

void listagral();
void ordenar();
void menu();

int main()
{
    do
    {
        system("cls");
        menu();
        fflush(stdin);
        printf(" que opcion quieres");
        scanf("%d",&opc);
        switch(opc)
        {
            case 1:
                do
                {
                    system("cls");
                    contar++;
                    fflush(stdin);
                    printf("numero de venta ");
                    scanf("%d",&pizza[contar].id);
                    printf("tamanos de pizzas \n");
                    printf("1 chica \n");
                    printf("2 mediana \n");
                    printf("3 grande \n");
                    printf("4 familiar \n");
                    scanf("%d",&pizza[contar].tamano);
                    printf("tipo de pizzas \n");
                    printf("1 hawaiana\n");
                    printf("2 salami \n");
                    printf("3 combinada \n");
                    printf("4 mexicana \n");
                    printf("5 doble queso \n");
                    printf("6 marinera \n");
                    scanf("%d",&pizza[contar].tipo);
                    switch(pizza[contar].tamano)
                    {
                        case 1:
                            pizza[contar].precio=70;
                            break;
                        case 2:
                            pizza[contar].precio=110;
                            break;
                        case 3:
                            pizza[contar].precio=170;
                            break;
                        case 4:
                            pizza[contar].precio=240;
                            break;

                    }	//termina switch de tamano pizza

                    fflush(stdin);
                    printf("�quieres vender otra pizza? ");
                    scanf("%c",&otro);
                }while(otro=='s');


                break;
            case 2:
                system("cls");
                fflush(stdin);
                printf("�Quieres tu lista ordenada ");
                scanf("%c",&resp);
                if (resp=='s')
                {
                    ordenar();
                }
                printf("id vta 	ingredientes 	tamano 	precio \n");
                for(r=1;r<=contar;r++)
                {

                    listagral();
                }//termina for r
                break;
            case 3:

                break;
            case 4:

                break;

        }

    }while(opc<6);
}//termina main

void listagral()
{

    printf("%d ",pizza[r].id);
    switch(pizza[r].tipo)
    {
        case 1:
            printf("hawaiana ");
            break;
        case 2:
            printf("salami ");
            break;

        case 3:
            printf("combinada ");
            break;

        case 4:
            printf("mexicana ");
            break;

        case 5:
            printf("doble queso ");
            break;

        case 6:
            printf("marinera ");
            break;

    }//termina switch tipo
    switch(pizza[r].tamano)
    {
        case 1:
            printf("chica ");
            break;
        case 2:
            printf("mediana ");
            break;

        case 3:
            printf("grande ");
            break;

        case 4:
            printf("familiar ");
            break;
    }//termina switch tamano

    printf("%.2f \n",pizza[r].precio);
}//termina listagral

void ordenar()
{
    for(i=1;i<contar;i++)
    {
        //Comparaciones
        for(j=1;j<contar-1;j++)
        {

            //intecambio de datos
            if(pizza[j].id>pizza[j+1].id)
            {
                auxid=pizza[j].id;
                auxtipo=pizza[j].tipo;
                auxtamano=pizza[j].tamano;
                auxprecio=pizza[j].precio;

                pizza[j].id=pizza[j+1].id;
                pizza[j].tipo=pizza[j+1].tipo;
                pizza[j].tamano=pizza[j+1].tamano;
                pizza[j].precio=pizza[j+1].precio;

                pizza[j+1].id=auxid;
                pizza[j+1].tipo=auxtipo;
                pizza[j+1].tamano=auxtamano;
                pizza[j+1].precio=auxprecio;
            }
        }//termina for i
    }
}
