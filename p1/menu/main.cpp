#include<stdio.h>
#include <iostream>

using namespace std;

void main()
{
int a,b,opc;
system("cls")
printf("escribe un numero\n");
scanf("%d",&a);
printf("el menu es el siguiente\n");
printf("6-sexta potencia\n");
printf("7-septima potencia\n");
printf("8-octava potencia\n");
printf("9-nvena potencia\n");
printf("elije una opcion\n");
scanf("%d",&opc);
switch(opc)
{
case 6:
printf("elegiste la sexta potencia\n");
potseis(a);
printf("elevar %d a la 6ta potencia es %d",a,b);
break;
case 7:
printf("elegiste la septima potencia\n");
potsiete(a);
printf("elevar %d a la 7ma potencia es %d",a,b);
break;
case 8:
printf("elegiste la octava potencia\n");
potocho(a);
printf("elevar %d a la 8va potencia es %d",a,b);
break;
case 9:
printf("elegiste la novena potencia\n");
potnueve(a);
printf("elevar %d a la 9na potencia es %d",a,b);
break;
default;
printf("no es correcta tu potencia\n");
break;
}
cin.get();
}