#include<stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{

    int nomina;
    float sueldo,horas,dias,totnom,a,b,c,x,ext;
    float salario=42.33;
    float hrsextdob=84.66;
    float hrsexttri=126.99;
    do
    {

        printf("\t 1.-NOMINA SEMANAL \n");
        printf("\t 2.-NOMINA QUINCENAL \n");
        printf("\t 3.-SALIR \n");
        printf("\n ELIJA UNA OPCION: ");
        scanf("%d",&nomina);
    }
    while(nomina>4);
    switch(nomina)
    {
        case 1: printf(" DIAS TRABAJADOS: ");
            scanf("%f",&dias);
            printf(" HORAS DOBLES: ");
            scanf("%f",&hrsextdob);
            printf(" HORAS TRIPLES: ");
            scanf("%f",&hrsexttri);
            totnom=dias*salario+((hrsextdob*(salario/8)*2)+(hrsexttri*(salario/8)*3));
            a=salario*42.33;
            b=hrsextdob*salario;
            c=hrsexttri*salario;
            x=a+b+c;
            totnom=x;

            cin.get();
            break;
        case 2: printf(" DIAS TRABAJADOS: \n");
            scanf("%f",&dias);
            printf(" SUELDO DIARIO: \n");
            scanf("%f",&sueldo);
            printf(" HORAS EXTRAS: \n");
            scanf("%f",&ext);
            a=dias*sueldo;
            b=a+ext;
            totnom=b;

            cin.get();
            break;
    }
    printf("\n EL SUELDO A PAGAR ES: $%f",totnom);
    cin.get();
    return 0;
}
