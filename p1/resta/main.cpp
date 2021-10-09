#include<stdio.h>
#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d;
    int opc;

    printf("ESCOJE UNA OPCION:\n");
    printf(" 1)suma:   2)resta:   3)multiplicacion:   4)division:");
    scanf("%d",&opc);
    switch(opc)
    {
        case 1:
            printf("introduzca el valor de a:");
            scanf("%f",&a);
            printf("introduzca el valor de b:");
            scanf("%f",&b);
            c= a+b ;
            printf("el resultado es: %f", c);
            break;

        case 2:
            printf("introduzca el valor de a:");
            scanf("%f",&a);
            printf("introduzca el valor de b:");
            scanf("%f",&b);
            c=a-b;
            printf("el resultado es:%f",c);
            break;

        case 3:
            printf("introduzca el valor de a:");
            scanf("%f",&a);
            printf("introduzca el valor de b:");
            scanf("%f",&b);
            c=a*b;
            printf("el resultado es:%f",c);
            break;

        case 4:
            printf("introduzca el valor de a:");
            scanf("%f",&a);
            printf("introduzca el valor de b:");
            scanf("%f",&b);
            d=a/b;
            printf("el resultado es:%f",d);
            break;

        default: printf("opcion no valida!!!");
    }

    cin.get();
    return 0;
}

