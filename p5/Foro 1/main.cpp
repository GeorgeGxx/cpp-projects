using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define ELEMENTOS	3

struct estructura_amigo {
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
	};

struct estructura_amigo amigo[ELEMENTOS];

main()
{
	int num_amigo;

	for( num_amigo=0; num_amigo<ELEMENTOS; num_amigo++ ) {
		printf( "\nDatos del amigo numero %i:\n", num_amigo+1 );

		printf( "Nombre: " );
		gets(amigo[num_amigo].nombre);
		printf( "Apellido: " );
		gets(amigo[num_amigo].apellido);
		printf( "Telefono: " );
		gets(amigo[num_amigo].telefono);
		printf( "Edad: " );
		scanf( "%i", &amigo[num_amigo].edad );

		while(getchar()!= '\n');	/* Vac�a el buffer de entrada */
	}

	/* Impresi�n de los datos */
	for( num_amigo=0; num_amigo<ELEMENTOS; num_amigo++ ) {
		printf( "Mi amigo %s ", amigo[num_amigo].nombre );
		printf( "%s tiene ", amigo[num_amigo].apellido );
		printf( "%i anios ", amigo[num_amigo].edad );
		printf( "y su telefono es el %s.\n" , amigo[num_amigo].telefono );
	}
}
