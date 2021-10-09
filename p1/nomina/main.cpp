#include<stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main ()
{

    int nomina;
    float sueldo, dias, horas, totnom;
    float salario = 43.22;
    float hrsextdob = 84.66;
    float hrsextrip = 126.99;
    do
    {

        printf ("\t 1. Nomina Semanal\n");
        printf ("\t 2. Nomina Quincenal\n");
        printf ("\t \n Pulse la opcion Deseada");
        scanf ("%f",& nomina);
    }
    while (nomina<3);
    switch (nomina){

        case 1:
            printf ("\n Dias Trabajados: ");
            scanf  ("%f",& dias);
            printf ("\n Horas Dobles");
            scanf  ("%f",& hrsextdob);
            printf ("\n Horas Triples ");
            scanf  ("%f",& hrsextrip);


            totnom = dias*salario+ ((hrsextdob*(salario/8*2))+(hrsextrip*(salario/8)*3));
            break;
        case 2:
            printf ("\nDias Trabajados:");
            scanf  ("%f",& dias );
            printf ("\nSueldo Diario: ");
            scanf  ("%f",& sueldo );
            totnom = dias * sueldo;
            break;
    }

    printf ("Sueldo a Pagar: %f", totnom);
    cin.get();
    return 0;
}
