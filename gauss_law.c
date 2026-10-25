#include <stdio.h>

#define EPSILON0 8.85e-12   

int main()
{
    double charge, flux;

    printf("     GAUSS'S LAW  (Phi = Q / epsilon0)\n");

    printf("Enter enclosed charge Q (Coulomb): ");
    scanf("%lf", &charge);

 
    flux = charge / EPSILON0;

    printf("\nTotal Flux Phi = %.4e N m^2/C\n", flux);

    return 0;
}
