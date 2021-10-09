#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{

    char name[30],app[30],apm[30];
    printf("escribe tu nombre\n\t\t");
    scanf("%s",&name);
    printf("\nescribe tu pallido paterno:\n\t\t");
    scanf("%s",&app);
    printf("\nescribe tu apellido materno:\n\t\t");
    scanf("%s",&apm);
    printf("\nhola\t%s\t%s\t%s",&name,app,apm);
    cin.get();

}
