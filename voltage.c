#include <stdio.h>

int main()
{
    double work, charge, voltage;

    printf("    VOLTAGE / POTENTIAL DIFFERENCE (V = W / q)\n");

    printf("Enter work done W (Joule): ");
    scanf("%lf", &work);
    printf("Enter charge q (Coulomb): ");
    scanf("%lf", &charge);

    if (charge == 0)
    {
        printf("\nCharge cannot be zero!\n");
    }
    else
    {
        
        voltage = work / charge;
        printf("\nVoltage V = %.4f V\n", voltage);
    }

    return 0;
}
