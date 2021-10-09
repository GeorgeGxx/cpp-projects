#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int var =1;
int *ptr;
main ()
{
    system("cls");
    ptr = & var;
    printf ("\nAcceso directo, var = %d", var);
    printf ("\nAcceso directo, var = %d", *ptr);
    printf ("\nLa direccion de var = %d", & var);
    printf ("\nLa direccion de var = %d", ptr);
    cin.get();
    return 0;
}
