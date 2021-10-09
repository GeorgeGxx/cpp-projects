#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <iostream>

using namespace std;

int opcion,fc,cf,ck,kf,kc,grados;
main()
{
    system("clear");
    {
        gotoxy(2,4);
        cprintf("SELECCIONE  QUE ES LO QUE DESEA REALIZAR \n");
        gotoxy(24,6);
        cprintf("SELECCIONE 1:Farenheit a Celsius  \n  ");
        gotoxy(24,8);
        cprintf("SELECCIONE 2:Celsius  a Farenheit \n  ");
        gotoxy(24,10);
        cprintf("SELECCIONE 3:Celsius a Kelvin     \n  ");
        gotoxy(24,12);
        cprintf("SELECCIONE 4:Kelvin a Farenheit   \n  ");
        gotoxy(24,14);
        cprintf("SELECCIONE 5:Kelvin a Celsius     \n  ");
        gotoxy(24,16);
        cprintf("introdusca una opcion:");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                cprintf("Ingrese los datos  ");
                scanf("%d",&grados);
                fc=0.5*(grados-32);
                cprintf("los grados son %d\n ",fc);
                break;
            case 2:
                cprintf("Ingrese los datos  ");
                scanf("%d",&grados);
                cf=1.8*(grados+32);
                cprintf("los grados son %d\n ",cf);
                break;
            case 3:
                cprintf("Ingrese los datos ");
                scanf("%d",&grados);
                ck=grados+273;
                cprintf("los grados son %d\n ",ck);
                break;
            case 5:
                cprintf("Ingrese los datos ");
                scanf("%d",&grados);
                kc=grados-273;
                cprintf("los grados son %d\n ",kc);
                break;
                //case 4:
                //textcolor(6);
                //gotoxy(20,22);
                //cprintf("Ingrese los datos");
                //scanf("%d",&grados);
                //kf= ;
                //cprintf("%d\n",kc);*/
                //
        }
        cin.get();
        return 0;
    }
}

