#include<stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

char name [30];
int main ()
{

    printf ("ingrese su nombre completo\t");
    scanf ("%s", &name);
    printf (" HOLA %s",&name);
    cin.get();
    return 0;
}


