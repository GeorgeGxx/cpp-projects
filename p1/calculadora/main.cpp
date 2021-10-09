#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    system("clear");
    int i, fin = 1;
    double a, b;
    char c;
    double suma(double, double);
    double resta(double, double);
    double multiplicacion(double, double);
    double divicion(double, double);
    void valor(double *, double *);
    void menu(void);
    do
    {
        menu();
        c = cin.get();
        if (c != '\n' && (c < '1' || c > '5'))
        {
            printf("%s%s", "\nnoes una opcion invalida", "introduzca de nuevo el numero");
            printf("\npulse una tecla y repita el proceso");
            cin.get();
            cin.get();
        }
        switch (c)
        {

        case '1':
            valor(&a, &b);
            suma(a, b);
            break;

        case '2':
            valor(&a, &b);
            resta(a, b);
            break;

        case '3':
            valor(&a, &b);
            multiplicacion(a, b);
            break;

        case '4':
            valor(&a, &b);
            divicion(a, b);
            break;

        case '5':
            fin = 0;
            break;
        }
}while (fin);
}
void menu (void) {
system("clear");
printf("\n\n\n\tbienvenido al programa matematico.\n");
printf("\tIntroduce una de las siguientes opciones");
printf("\n\n\t\t1.-Sumar cifras");
printf("\n\n\t\t2.-Restar cifras");
printf("\n\n\t\t3.-Multiplicar cifras");
printf("\n\n\t\t4.-Dividir cifras");
printf("\n\n\t\t5.-Salir\n\n");
}
double suma(double a, double b){
printf("\n\nla suma introducida es la siguiente:\n");
printf("%.2lf + %.2lf = %.2lf",a,b,(a+b));
cin.get();
cin.get();
}
double resta(double a,double b){
printf("\n\nla resta introducida es la siguiente:\n");
printf("%.2lf - %.2lf = %.2lf",a,b,(a-b));
cin.get();
cin.get();
}
double multiplicacion(double a, double b) {
printf("\n\nla multiplicacion introducida es la siguiente:\n");
printf("%.2lf * %.2lf = %.2lf",a,b,(a*b));
cin.get();
cin.get();
}
double divicion(double a, double b) {
printf("\n\nla divicion introducida es la siguiente:\n");
printf("%.2lf / %.2lf = %2.lf",a,b,(a/b));
cin.get();
cin.get();
}
void valor(double*a,double*b) {
system("clear");
printf("introduce el valor del primer termino:");
scanf("%lf",a);
printf("introduce el valor del segundo termino:");
scanf("%lf",b);
}
