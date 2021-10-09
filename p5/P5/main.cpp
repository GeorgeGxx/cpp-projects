using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h> 

int main()
{
  int x;
  int y;
  int *ptrEntero;//así se declara un apuntador a entero
  int *ptr2Entero;//así se declara un apuntador a entero
  ptrEntero = &x;// ptrEntero apunta a la dirección donde se aloja "x"
  ptr2Entero = &y;// ptr2Entero apunta a la dirección donde se aloja "y"
  *ptrEntero = 1;// a la dirección donde apunta ptrEntero se le asigna el valor 1 
  *ptr2Entero = 5;// a la dirección donde apunta ptr2Entero se le asigna el valor 5 
  cout << "El valor de x es: " << x << endl;
  *ptrEntero += 5;
  cout << "El valor de x, luego de incrementar 5 a *ptrEntero, es: " << x << endl;
  cout << "El valor de y es: " << y << endl;
  cout << "El valor de &y es: " << &y << endl;//desplegará la dirección donde está guardada "y"
  cout << "El valor de ptr2Entero es: " << ptr2Entero << endl;//desplegará la dirección de "y" por que la está apuntando
  cout << "El valor de *ptr2Entero es: " << *ptr2Entero << endl;//desplegará el valor de "y" por que así se crea un alias
  system("pause");
  return 0;
}
