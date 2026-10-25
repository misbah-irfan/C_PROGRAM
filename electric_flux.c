#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979

int main()
{
    double field, area, angle, flux;

    printf("   ELECTRIC FLUX  (Phi = E A cos(theta))\n");

    printf("Enter electric field E (N/C): ");
    scanf("%lf", &field);
    printf("Enter area A (m^2): ");
    scanf("%lf", &area);
    printf("Enter angle theta (degrees): ");
    scanf("%lf", &angle);

    
    flux = field * area * cos(angle * PI / 180.0);

    if (fabs(flux) < 1e-9)
        flux = 0;

    printf("\nElectric Flux Phi = %.4f N m^2/C\n", flux);

    return 0;
}
