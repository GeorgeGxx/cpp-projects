# include<stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int opc,a,b,c;

    while(opc<5)
    {
        printf("           calcula\n\n");
        printf("     1.-suma\n");
        printf("     2.-multiplicacion\n");
        printf("     3.-division\n");
        printf("     4.-resta\n");
        printf("     5.-salir\n");
        printf(" selecciona un numero como opcion: ");
        scanf("%d",&opc);
        switch(opc)
        {
            case 1:
                printf("             suma\n");
                printf("ingrese el primer numero  :");
                scanf("%d",&a);
                printf("ingrese el segundo numero  :");
                scanf("%d",&b);
                printf("el resultado es   :");
                c=a+b;
                printf("%d",c);
                cin.get();

                break;

            case 2:
                printf("        multiplicacion\n");
                printf("ingrese el primer factor :");
                scanf("%d",&a);
                printf("ingrrese el segundo factor :");
                scanf("%d",&b);
                printf("el resultado es :");
                c=a*b;
                printf("%d",c);
                cin.get();

                break;
            case 3:
                printf("         division\n");
                printf("ingresa el valor a dividir :");
                scanf("%d",&a);
                printf("ingresa el segundo divisor :");
                scanf("%d",&b);
                printf("el resultado es :");
                c=a/b;
                printf("%d",c);
                cin.get();

                break;
            case 4:
                printf("             resta\n");
                printf("ingrese el primer numero  :");
                scanf("%d",&a);
                printf("ingrese el segundo numero  :");
                scanf("%d",&b);
                printf("el resultado es   :");
                c=a-b;
                printf("%d",c);
                cin.get();




            case 5:break;
        }
    }

}