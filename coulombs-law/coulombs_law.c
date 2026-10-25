#include <stdio.h>

#define K 9e9   

int main()
{
    double q1, q2, distance, force;

    printf("   COULOMB'S LAW  (F = k q1 q2 / r^2)\n");

    printf("Enter charge q1 (Coulomb): ");
    scanf("%lf", &q1);
    printf("Enter charge q2 (Coulomb): ");
    scanf("%lf", &q2);
    printf("Enter distance r (meter): ");
    scanf("%lf", &distance);

    if (distance == 0)
    {
        printf("\nDistance cannot be zero!\n");
    }
    else
    {
       
        force = K * q1 * q2 / (distance * distance);

        if (force < 0)
            printf("\nForce F = %.4e N (attractive)\n", -force);
        else if (force > 0)
            printf("\nForce F = %.4e N (repulsive)\n", force);
        else
            printf("\nForce F = 0 N (no force)\n");
    }

    return 0;
}
