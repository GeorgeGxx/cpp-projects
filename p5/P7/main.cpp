using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h> 

typedef struct _nodo {
   int valor;
   struct _nodo *siguiente;
} tipoNodo;
 
typedef tipoNodo *pNodo;//se crea un apuntador usado para nodos nuevos
typedef tipoNodo *Pila;//se crea un apuntador que sera la cabecera
 
 
void Push(Pila *pila, int v) {//LA FUNCION PUSH INSERTA ELEMENTOS A LA PILA
   pNodo nuevo;/* inicializar nodo nuevo */
   nuevo = (pNodo)malloc(sizeof(tipoNodo));
   nuevo->valor = v; ;/* guardamos v en el valor del nodo */

   
   /* El nuevo nodo apunta adonde apunta la cabecera */
   nuevo->siguiente = *pila;
   /* Ahora, la cabecera apunta al nuevo nodo */
   *pila = nuevo;
}


int Pop(Pila *pila) {//LA FUNCIÓN POP LEE Y ELIMINA ELEMENTOS DE LA PILA
   pNodo nodo; /* auxiliar para no perder el dato del nodo que se borra */
   int v;      /* variable auxiliar para retorno */
   
   /* nodo apunta al primer elemento de la pila */
   nodo = *pila;
   if(!nodo) return 0; /* Si no hay nodos en la pila retornamos 0 */
   
   *pila = nodo->siguiente;//la cabecera apunta a nodo->siguiente
   /* Guardamos el valor de retorno */
   v = nodo->valor; 
   /* Borrar el nodo */
   free(nodo);
   return v;//este será el valor que se desplegará en pantalla cuando se manda a llamar la funcion
}





int main() {
   Pila pila = NULL;//inicializamos la cabecera a null

   Push(&pila, 20);//insertar el numero 20
   Push(&pila, 10);//insertar el elemento 10
   cout<< Pop(&pila)<<endl;//leer,desplegar en pantalla y eliminar el 10
   Push(&pila, 40);//insertar el 40
   Push(&pila, 30);//insertar el 30
   cout<< Pop(&pila)<<endl;//leer,desplegar en pantalla y eliminar el 30
   cout<< Pop(&pila)<<endl;//leer,desplegar en pantalla y eliminar el 40
   Push(&pila, 90);//insertar el 90
   cout<<Pop(&pila)<<endl;//leer,desplegar en pantalla y eliminar el 90
   cout<< Pop(&pila)<<endl;//leer,desplegar en pantalla y eliminar el 20

   system("pause");
   return 0;
}
