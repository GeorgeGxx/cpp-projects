using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h> 

typedef struct _nodo {
   int valor;
   struct _nodo *siguiente;
} tipoNodo;

typedef tipoNodo *pNodo;

void Anadir(pNodo *primero, pNodo *ultimo, int v) {
   pNodo nuevo;
 
   /* Crear un nodo nuevo */
   nuevo = (pNodo)malloc(sizeof(tipoNodo));
   nuevo->valor = v;
   /* Este será el último nodo, no debe tener siguiente */
   nuevo->siguiente = NULL;
   /* Si la cola no estaba vacía, añadimos el nuevo a continuación de ultimo */
   if(*ultimo) 
   (*ultimo)->siguiente = nuevo;
   /* Ahora, el último elemento de la cola es el nuevo nodo */
   *ultimo = nuevo;
   /* Si primero es NULL, la cola estaba vacía, ahora primero apuntará también al nuevo nodo */
   if(!*primero) 
	   *primero = nuevo;
}

int Leer(pNodo *primero, pNodo *ultimo) {
   pNodo nodo; /* variable auxiliar para manipular nodo */
   int v;      /* variable auxiliar para retorno */
   
   /* Nodo apunta al primer elemento de la pila */
   nodo = *primero;
   if(!nodo) return 0; /* Si no hay nodos en la pila retornamos 0 */
   /*de lo contrario, asignamos a primero la dirección del segundo nodo */
   *primero = nodo->siguiente;
   /* Guardamos el valor de retorno */
   v = nodo->valor; 
   /* Borrar el nodo */
   free(nodo);
   /* Si la cola quedó vacía, ultimo debe ser NULL también*/
   if(!*primero) *ultimo = NULL;
   return v;
}
 



int main() {

   pNodo primero = NULL, ultimo = NULL;

   Anadir(&primero, &ultimo, 20);
   cout<<"Agregar(20)\n";
   Anadir(&primero, &ultimo, 10);
   cout<<"Agregar(10)\n";
   cout<<"Leer: "<< Leer(&primero, &ultimo)<<"\n";
   Anadir(&primero, &ultimo, 40);
   cout<<"Agregar(40)\n";
   Anadir(&primero, &ultimo, 30);
   cout<<"Agregar(30)\n";
   cout<<"Leer: "<< Leer(&primero, &ultimo)<<"\n";
   cout<<"Leer: "<< Leer(&primero, &ultimo)<<"\n";
   Anadir(&primero, &ultimo, 90);
   cout<<"Agregar(90)\n";
   cout<<"Leer: "<< Leer(&primero, &ultimo)<<"\n";
   cout<<"Leer: "<< Leer(&primero, &ultimo)<<"\n";
   system("pause");
   return 0;
}
