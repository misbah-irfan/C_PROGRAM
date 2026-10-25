#include <stdio.h>

int main()
{
    double charge, time, current;

    printf("      ELECTRIC CURRENT  (I = Q / t)\n");
    printf("Enter charge Q (Coulomb): ");
    scanf("%lf", &charge);
    printf("Enter time t (seconds): ");
    scanf("%lf", &time);

    if (time == 0)
    {
        printf("\nTime cannot be zero!\n");
    }
    else
    {
        current = charge / time;
        printf("\nCurrent I = %.4f A\n", current);
    }

    return 0;
}
