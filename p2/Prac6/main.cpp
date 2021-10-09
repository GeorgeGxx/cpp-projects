#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int edad[15], r;
char nombre[15][35];

int main()
{
	system("cls");
	for(r=0;r<=11;r++);
	{
		fflush(stdin);
		printf("captura la %d persona ",r);
		gets(nombre[r]);
		fflush(stdin);
		printf("cap la edad de %s ",nombre[r]);
		scanf("%d",&edad[r]);
	}
	
	system("cls");
	for(r=0;r<=11;r++);
{

		printf("%s \t %d \n ", nombre[r,edad[r]]);
		
}


}
