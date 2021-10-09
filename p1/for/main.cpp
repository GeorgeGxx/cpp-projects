#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main ()
{
    {

        double grados_f,grados_c;
        printf ("\nGrados fahrenheit   Grados centigrados\n");
        printf ("-----------------   ------------------\n\n");
        for(grados_f=0.0;grados_f<=300.0;grados_f+=20.0)
        {
            grados_c=5*(grados_f-32)/9;
            printf ("%f     %f\n",grados_f,grados_c);
        }
        cin.get();
        return 0;
    }
}
