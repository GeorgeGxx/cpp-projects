using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h> 

int main()
{
  int x;
  int y;
  int *ptrEntero;//as� se declara un apuntador a entero
  int *ptr2Entero;//as� se declara un apuntador a entero
  ptrEntero = &x;// ptrEntero apunta a la direcci�n donde se aloja "x"
  ptr2Entero = &y;// ptr2Entero apunta a la direcci�n donde se aloja "y"
  *ptrEntero = 1;// a la direcci�n donde apunta ptrEntero se le asigna el valor 1 
  *ptr2Entero = 5;// a la direcci�n donde apunta ptr2Entero se le asigna el valor 5 
  cout << "El valor de x es: " << x << endl;
  *ptrEntero += 5;
  cout << "El valor de x, luego de incrementar 5 a *ptrEntero, es: " << x << endl;
  cout << "El valor de y es: " << y << endl;
  cout << "El valor de &y es: " << &y << endl;//desplegar� la direcci�n donde est� guardada "y"
  cout << "El valor de ptr2Entero es: " << ptr2Entero << endl;//desplegar� la direcci�n de "y" por que la est� apuntando
  cout << "El valor de *ptr2Entero es: " << *ptr2Entero << endl;//desplegar� el valor de "y" por que as� se crea un alias
  system("pause");
  return 0;
}
