#include<stdio.h>
#include<stdlib.h>
#define SU 100
int x,y;
main()
{
float real;
printf("\n Dame dos numeros enteros:");
scanf("%d%d",&x,&y);
real = SU + (x / y);
printf("\n Resultado:%f",real);

}