#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main()
{

float h,b,area;

printf("introduce altura del triangulo: ");
scanf("%f",& h);
printf("introduce base deltriangulo: ");
scanf("%f",&b);
area=(h*b)/2;
printf("el area del triangulo es: %f",area);
cin.get();
return 0;
}
