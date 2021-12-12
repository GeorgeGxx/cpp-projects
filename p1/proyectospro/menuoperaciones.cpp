#include <conio.h>
#include <stdio.h>

int main()
{
    char opcion;
    int n1, n2;

    do
    {
        printf( "\n       MENU CALCULADORA    " );
        printf( "\n\n   1. Suma", 163 );
        printf( "\n   2. Resta", 163 );
        printf( "\n   3. Multiplicacion", 163 );
        printf( "\n   4. Dividision", 163 );
        printf( "\n   5. Salir\n" );

        do
        {
            printf( "\n   Introduzca opcion de la operacion a realizar(1-5): ", 162 );
            fflush( stdin );
            scanf( "%c", &opcion);
        } while ( opcion < '1' || opcion > '5' );
        switch ( opcion )
        {
            /*Opcion 1 suma*/
            case '1': printf( "\n   Introduzca primer sumando: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca segundo sumando: " );
                      scanf( "%d", &n2);
                      printf( "\n   %d + %d = %d\n", n1, n2, n1 + n2 );
                      break;
            /*Opcion 2 resta*/
            case '2': printf( "\n   Introduzca minuendo: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca sustraendo: " );
                      scanf( "%d", &n2);
                      printf( "\n   %d - %d = %d\n", n1, n2, n1 - n2 );
                      break;
            /*Opcion 3 multiplicacion*/
            case '3': printf( "\n   Introduzca primer operando: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca segundo operando: " );
                      scanf( "%d", &n2);
                      printf( "\n   %d * %d = %d\n", n1, n2, n1 * n2 );
                      break;
            /*Opción 4 division*/
            case '4': printf( "\n   Introduzca dividendo: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca divisor: " );
                      scanf( "%d", &n2);
                      if ( n2 != 0 )
                          printf( "\n   %d div %d = %d\n", n1, n2, n1 / n2, n1 % n2 );
                      else
                          printf( "\n   ERROR: No se puede dividir entre cero.\n" );
        }

    } while ( opcion != '5' );

    return 0;
}
