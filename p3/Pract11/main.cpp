#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(void)
{
int i,fin=1;
clrscr();
double a,b;
char c;
double suma(double,double);
double resta(double,double);
double multiplicacion(double,double);
double division(double,double);
void valor(double*,double*);
void menu(void);
do{
menu();
c=getchar();
if (c!='\n'&&(c<'1'||c>'5')){
printf("%s%s","\nNo es una opcion valida introduzca de nuevo el numero");
printf("\nPulse una tecla y repita el proceso");
getchar();
getchar();
}
switch(c){
case '1':
valor(&a,&b);
suma(a,b);
break;
case '2':
valor(&a,&b);
resta(a,b);
break;
case '3':
valor(&a,&b);
multiplicacion(a,b);
break;
case '4':
valor(&a,&b);
division(a,b);
break;
case '5':
fin=0;
break;
}
}while(fin);
}
void menu(void){
system("cls");
printf("\n\n\n\tBienvenido al programa matematico.\n");
printf("\tIntroduce una de las siguientes opciones:\n");
printf("\n\n\t\t1.-sumar cifras");
printf("\n\n\t\t2.-restar cifras");
printf("\n\n\t\t3.-multiplicar cifras");
printf("\n\n\t\t4.-dividir cifras");
printf("\n\n\t\t5.-salir\n\n");
}
double suma(double a, double b){
printf("\n\nLa suma introducida es la siguiente:\n");
printf("%.2lf+%.2lf=%.2lf",a,b,(a+b));
getchar();
getchar();
}
double resta(double a, double b){
printf("\n\nLa resta introducida es la siguiente:\n");
printf("%.2lf-%.2lf=%.2lf",a,b,(a-b));
getchar();
getchar();
}
double multiplicacion(double a, double b){
printf("\n\nLa multiplicacion introducida es la siguiente:\n");
printf("%.2lf*%.2lf=%.2lf",a,b,(a*b));
getchar();
getchar();
}
double division(double a, double b){
printf("\n\nLa division introducida es la siguiente:\n");
printf("%.2lf/%.2lf=%.2lf",a,b,(a/b));
getchar();
getchar();
}
void valor(double *a, double *b){
system ("cls");
printf("introduce el valor del primer termino:");
scanf("%lf",a);
printf("introduce el valor del segundo termino:");
scanf("%lf",b);
getchar();
}