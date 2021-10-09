#include<stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main()
{

    int num;
    printf("introduce un numero del 1 al 7:" );
    scanf("%d",& num);
    switch(num)
    {
        case 1:
            printf("domingo"); break;
        case 2:
            printf("lunes"); break;
        case 3:
            printf("martes"); break;
        case 4:
            printf("miercoles"); break;
        case 5:
            printf("jueves"); break;
        case 6:
            printf("viernes" ); break;
        case 7:
            printf("sabado"); break;
    }
    cin.get();
}
