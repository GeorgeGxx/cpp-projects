#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

struct bodega
{
	int clave;
	char marca[50];
	char descrip[80];
	float pu; //Precio unitario
	int cantbol;//llantas
	float preciobol;//total llantas
	int cantidadcj; //carrocerias
	float preciocj;//total carrocerias
	int tipo;
	int origen;
};  

bodega dulcerama[100],aux;// almacen elver
int opc,i,j,r,contar,clave,marca,xorigen;
char otro,siordena;
void ordenar();
void listagral();
void menu();

int main()

{
	do	
	{
		system("cls");
		printf("1 Captura informacion \n");
		printf("2 Lista General \n");
		printf("3 Busqueda por clave \n");
		printf("4 Lista por origen \n");
		printf("5 Lista por tipo \n");
		printf("6 Salir \n");
		fflush(stdin);
		scanf("%d",&opc);
		switch(opc)
		{
			
			case 1:
				do
				{
		    	system("cls");
		    	contar++;
		    	fflush(stdin);//Detener y permita capturar
		    	printf("Clave del producto	");//usuarios (jorge,jonatan y juan) clave del operador
		    	scanf("%d",&dulcerama[contar].clave);
		    	fflush(stdin);
		    	printf("Marca del producto");
		    	gets(dulcerama[contar].marca);
		    	
		    	fflush(stdin);
		    	printf("Cual es el precio unitario?  ");// cuantas llantas hay en la bodega
		    	scanf("%d",&dulcerama[contar].pu);
		    	
				fflush(stdin);
		    	printf("Cuantas piezas trae la bolsa?  ");
		    	scanf("%d",&dulcerama[contar].cantbol);
		    	dulcerama[contar].preciobol=dulcerama[contar].cantbol*dulcerama[contar].pu;
				
				dulcerama[contar].preciobol=dulcerama[contar].cantbol*dulcerama[contar].pu;
 				fflush(stdin);
       	    	printf("cuantas piezas trae la caja ");
       	    	scanf("%d",&dulcerama[contar].cantidadcj);      	    	
       	    	dulcerama[contar].preciocj=dulcerama[contar].cantidadcj*dulcerama[contar].preciobol;
														
				fflush(stdin);
				printf("origen de producto   1=nacional ,  2=importado ");
				scanf("%d ",&dulcerama[contar].origen);
					    	
				fflush(stdin);// en esta seccion se va a dedicar a las bodegas (llantas ,carrocerias y motores)
		    	printf("Tipo de Dulce   \n");//tipo de refaccion	    	
				printf("1 Paletas \n");//llantas
				printf("2 Chocolates \n");//carrocerias
				printf("3 Caramelo \n");//motores
				printf("4 Chicloso \n");
				printf("5 Galletas\n");
				printf("6 Semillas y nueces \n");  
				printf("7 Gomitas \n");
				printf("8 Chiclets \n");
				scanf("%d",&dulcerama[contar].tipo);
				fflush(stdin);
				printf("Quieres captura otro articulo?  ");//quieres agregar otra refaccíon
				scanf("%c",&otro);		
	    	}while(otro=='s');
	
	break; //Termina el Case 1 dentro de main
		    
			
			 
		case 2:	
			system("cls");
			printf("clave 	marca	descripcion	precio bolsa	precio caja		precio unitario  \n");
			for(r=1;r<=contar;r++)
			{
				listagral();
				printf("  \n");
			}
			system("pause");	
	break; //Termina el Case 2 dentro de main
	
	
	
	case 3: //Búsqueda por clave
			system("cls");
			fflush(stdin);
			printf(" Quieres tu lista ordenada por clave?   ");
			scanf("%c  ",&siordena);
			if(siordena=='s')
			{
				ordenar();
			}

	break;
	
	
	
	case 4: //Lista por origen
		
		system("cls");
		fflush(stdin);
		printf("Lista de productos   1=nac ,  2=impor ");
		scanf("%d ",&xorigen);
		
		system("cls");
		fflush(stdin);
		printf(" Quieres tu lista ordenada por clave?   ");
		scanf("%c  ",&siordena);
		if(siordena=='s')
		{
			ordenar();
		}
				
			system("cls");
			printf("clave 	marca	descripcion	precio bolsa	precio caja		precio unitario");
			for(r=1;r<=contar;r++)
			{ 
				if(xorigen==dulcerama[r].origen)
				{
					listagral();
					printf("\n");
				}			
			}
			system("pause");
		break; //Termina case 4
		
		case 5: //Lista por tipo de dulce
		break;
				
	 }//termina switch	
	}while(opc<6);
}//termina main		
		

void listagral()
{
	printf("%d ",dulcerama[r].clave);//llantas
	printf("%s  ",dulcerama[r].marca);//carrocerias
	printf("%s  ",dulcerama[r].descrip);//motores
	printf("%.2f  ",dulcerama[r].preciobol);
	printf("%.2f  ",dulcerama[r].preciocj);
	switch(dulcerama[r].tipo)
	{
		case 1:
			printf("1 Paletras ");
		break;
		case 2:
			printf("2 Chocolates \n");
			break;
		case 3:
			printf("3 Caramelo \n");
			break;
		case 4:
			printf("4 Chicloso \n");
			break;
		case 5:
			printf("5 Galletas\n");
			break;
		case 6:
			printf("6 Semillas y nueces \n");  
			break;
		case 7:
			printf("7 Gomitas \n");
			break;
		case 8:
			printf("8 Chiclets \n");
			break;
	
	}//termina switch tipo

if(dulcerama[r].origen==1)
	printf("nacional");
	else
	printf("importado");
	
}//termina void listagral

void ordenar() //Burbuja, ordena
{
	for(i=1;i<=contar;i++)
	{
		for(j=1;j<=-1;j++)
		{
			//intercambio de los elementos
			if(dulcerama[j].clave>dulcerama[j+1].clave)
				{
				aux=dulcerama[j];
				dulcerama[j]=dulcerama[j+1];
				dulcerama[j+1]=aux;
				
			}
		}
		
	}
	
	
	
}



