#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{

int dia;
system("COLOR 4F");
cout<<"Ingresa un numero del 1 al 7:"<<endl;
scanf("%d",&dia);
switch(dia)
{
case 1: cout<<"Lunes"<<endl;
case 2: cout<<"Martes"<<endl;
case 3: cout<<"Miercoles"<<endl;
case 4: cout<<"Jueves"<<endl;
case 5: cout<<"Viernes"<<endl;
case 6: cout<<"Sabado"<<endl;
case 7: cout<<"Domingo"<<endl;
}
cin.get();
return 0;
}
