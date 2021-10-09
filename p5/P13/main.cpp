using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h>
 
int main()
{   const int MAXC=7;
	int array[MAXC]={6,1,5,2,3,4,0};
	int cont,pasos,temp,i;
 
	for(cont=MAXC/2;cont!=0;cont/=2)
		for(pasos=1;pasos!=0;)
		{
			pasos=0;
			for(i=cont;i<MAXC;i++)
				if(array[i-cont]>array[i])
				{
					temp=array[i];
					array[i]=array[i-cont];
					array[i-cont]=temp;
					pasos++;
				}
		}
		cout<<"Arreglo ordenado: ";
		for(int i=0;i<MAXC;i++)
		{
			cout<<array[i]<<" ";
		}
		
}
