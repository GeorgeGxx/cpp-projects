#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

char cliente[30], otro;
float descuento, pu, total, importe, subtotal, iva;
int clave, cantidad;

int main()
{
    do
    {
          system("cls");
        
         fflush(stdin);
         printf("Nombre del Cliente ");
         gets(cliente);
         printf("Clave del articulo ");
         scanf("%d",&clave);
         printf("Cantidad");
         scanf("%d",&cantidad);
         printf("Precio Unitario ");
         scanf("%f",&pu);
         importe=cantidad*pu;
         if(importe<500) 
         {
             descuento=0;
          }
          else if(importe>=500 && importe<1000)
          {
           descuento=importe*0.10;
          }
          else if(importe>=1000 && importe<2000)
          {
               descuento=importe*0.20;  
          }
          else if (importe>=2000)
          {
               descuento=importe*0.30;
           }

           subtotal=importe-descuento;
           iva=subtotal*0.16;
           total=subtotal+iva;
           
           printf("el importe %.2f \n", importe);
           printf("el descuento %.2f \n",  descuento);
           printf("el subtotal %.2f \n", subtotal);
           printf("el iva %.2f \n", iva);
           printf("el total a pagar %.2f \n", total);

          
          fflush(stdin);
          printf("¿Quieres calcula otra venta?");
          scanf("%c",&otro);
          
      }while(otro=='s');
}


