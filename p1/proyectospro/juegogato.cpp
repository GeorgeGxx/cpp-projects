/*Entregable 1 - Jorge Alberto Gallaga Arevalo*/

#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 

#define MAX_FILA 3 
#define MAX_COLUM 3 
#define MAX_JUG 2 
#define MAX_TURNO 9 

void turno_jugador(); 
void imprimir_tablero(char letra, int fila, int columna); 

int main() 
{ 
    printf("Juego del Gato\n"); 
    turno_jugador(); 
    return 0; 
} 

void imprimir_tablero(char letra, int fila, int columna) 
{ 
    int i,j; 
    char gato[MAX_FILA][MAX_COLUM]; 
    for(i=0;i<MAX_FILA;i++) 
    { 
        for(j=0;j<MAX_COLUM;j++) 
        { 
            if((fila==i)&&(columna==j)) 
               printf("%c",gato[i][j]);/*aqui quiero que el caracter letra se imprima en la casilla*/ 
            else 
               printf(" ",gato[i][j]); 
            if(j<MAX_COLUM) 
               printf("|"); 
        } 
        printf("\n"); 
        if(i<MAX_FILA) 
           printf("______"); 
        printf("\n"); 
    } 
} 

void turno_jugador() 
{ 
    int fila,columna,i,turno; 
    char jugador[]={'X','O'},letra; 
    do 
    { 
        turno=1; 
        for(i=0;i<MAX_JUG;i++) 
        { 
            printf("Es turno del jugador %c\n",jugador[i]); 
            printf("Dime la fila (1 a 3): "); 
            scanf("%d",&fila); 
            printf("Dime la columna(1 a 3): "); 
            scanf("%d",&columna); 
            letra=jugador[i]; 
            imprimir_tablero(letra,fila,columna); 
            turno++; 
        } 
    }while(turno<=MAX_TURNO); 
} 
