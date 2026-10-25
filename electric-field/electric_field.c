#include <stdio.h>

#define K 9e9  

int main()
{
    double charge, distance, field;

    printf("     ELECTRIC FIELD  (E = k q / r^2)\n");

    printf("Enter charge q (Coulomb): ");
    scanf("%lf", &charge);
    printf("Enter distance r (meter): ");
    scanf("%lf", &distance);

    if (distance == 0)
    {
        printf("\nDistance cannot be zero!\n");
    }
    else
    {
        if (charge < 0)
            charge = -charge;   

        field = K * charge / (distance * distance);
        printf("\nElectric Field E = %.4e N/C\n", field);
    }

    return 0;
}
