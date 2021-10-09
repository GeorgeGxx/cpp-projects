#include<stdio.h>
#include <iostream>

using namespace std;

int edad,sueldo;
char nombre,mascota,pasatiempo;
int main()
{

    printf("cual es tu nombre \n");
    scanf("%s",&nombre);
    printf("cual es tu edad \n");
    scanf("%d",&edad);
    printf("cual es tu sueldo \n");
    scanf("%d",&sueldo);
    printf("cual es tu mascota \n");
    scanf("%s",&mascota);
    printf("cual es tu pasatiempo \n");
    scanf("%s",&pasatiempo);
    printf("%s\n%d\n%d\n%s\n%s\n",&nombre,edad,sueldo,mascota,pasatiempo);
    cin.get();
    return 0;
}
