#include<stdio.h>
#include <iostream>

using namespace std;

float a,b,c;
int main()
{

printf("ingrese el valor de a: ");
scanf("%d",&a);
printf("ingrese el valor de b: ");
scanf("%d",&b);
printf("ingrese el valor de c: ");
scanf("%d",&c);
 if(a<b)
{
printf("su numero es mayor que a");
}
else
if(c<a)
{
printf("su numero es igual que c");
}
else
if(b<c)
{
printf("su numero es menor que b");
}
cin.get();
return 0;
}