using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h> 

int main()
{
char resp;
int horas, salario;
const int JORNADA=35,PRECIO_NORMAL=100,PRECIO_EXTRA=150;

do{
cout<<"Horas trabajadas: "<<endl;
cin>>horas;
     if(horas<=35) salario=horas*PRECIO_NORMAL;
     else salario=JORNADA*PRECIO_NORMAL+(horas-JORNADA)*PRECIO_EXTRA;
cout<<"Salario = "<<salario<<endl;
system("pause");
system("cls");
cout<<"¿Desea calcular otro salario (s/n)?\n"<<endl;
cin>>resp;
  } while(resp!='n' && resp!='N');
system("pause");
}
