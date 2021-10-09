#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int time, hora, minuto, segundo, hrs, mins, segs, m, s;
int main ()
{
    system("clear");
    printf("ingresa la hora de salida");
    scanf("%d", &hora);
    printf("minutos");
    scanf("%d", &minuto);
    printf("segundos");
    scanf("%d", &segundo);
    printf("ingrese el tiempo de translado/n");
    scanf("%d", &hrs);
    printf("min");
    scanf("%d", &mins);
    printf("seg");
    scanf("%d", &segs);
    time = hora + hrs;
    m = minuto + mins;
    s = segundo + segs;
    printf("Sr. pasajero su hora de llegada sera aprox. %d %d %d", time, m, s);
    cin.get();
    return 0;
}
