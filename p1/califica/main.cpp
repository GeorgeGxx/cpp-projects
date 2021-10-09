#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    int a, x, y, b, total, promedio, calificacion;
    b = 4;
    total = 0;
    promedio = 0;
    gotoxy(5, 5);
    printf("nombre");
    gotoxy(30, 5);
    printf("calif_1");
    gotoxy(40, 5);
    printf("calif_2");
    gotoxy(50, 5);
    printf("calif_3");
    gotoxy(60, 5);
    printf("calif_4");
    gotoxy(70, 5);
    printf("promedio");
    for (y = 0; y < 10; y++)
    {
        b = 6;
        a = a + 3;
        gotoxy(b, a);
        scanf("%s", &nombre[y]);
        b = 30;
        for (x = 0; x < 4; x++)
        {
            gotoxy(b, a);
            scanf("%f", &mat[y][x]);
            b = b + 10;
            total = total + mat[y][x];
        }
        promedio = total / x;
        b = b + 5;
        gotoxy(b, a);
        printf("%f", promedio);
        total = 0;
        promedio = 0;
    }
    cin.get();
    return 0;
}

