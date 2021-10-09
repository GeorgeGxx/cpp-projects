#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main()
{

    double grados_fahr;
    double grados_cent;
    printf("GRADOS FAHRENHEIT     GRADOS CENTIGRADOS\n");
    grados_fahr= 0.0;
    while(grados_fahr<=300.0)
    {
        grados_cent=(5*(grados_fahr-32.0))/9.0;
        printf("%f\t\t %f\n",grados_fahr,grados_cent);
        grados_fahr+=20.0;

    }
    cin.get();
}

