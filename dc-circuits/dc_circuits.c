#include <stdio.h>

int main()
{
    int choice, count, i;
    double resistor[50], supply, total, current;

    printf("      DC CIRCUITS (SERIES / PARALLEL)\n");
    printf("1. Series circuit\n");
    printf("2. Parallel circuit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2)
    {
        printf("\nInvalid choice!\n");
        return 0;
    }

    printf("Enter number of resistors (1 to 50): ");
    scanf("%d", &count);

    if (count < 1 || count > 50)
    {
        printf("\nInvalid number of resistors!\n");
        return 0;
    }

    for (i = 0; i < count; i++)
    {
        printf("Enter R%d (Ohm): ", i + 1);
        scanf("%lf", &resistor[i]);

        if (resistor[i] <= 0)
        {
            printf("\nResistance must be greater than zero!\n");
            return 0;
        }
    }

    printf("Enter supply voltage V (Volt): ");
    scanf("%lf", &supply);

    if (choice == 1)
    {
        // Series formula: Req = R1 + R2 + R3 + ...
        total = 0;
        for (i = 0; i < count; i++)
            total = total + resistor[i];

        current = supply / total;

        printf("\nEquivalent Resistance Req = %.4f Ohm\n", total);
        printf("Total Current I = %.4f A\n", current);
        for (i = 0; i < count; i++)
            printf("Voltage across R%d = %.4f V\n", i + 1, current * resistor[i]);
    }
    else
    {
        // Parallel formula: 1/Req = 1/R1 + 1/R2 + 1/R3 + ...
        total = 0;
        for (i = 0; i < count; i++)
            total = total + 1.0 / resistor[i];

        total = 1.0 / total;
        current = supply / total;

        printf("\nEquivalent Resistance Req = %.4f Ohm\n", total);
        printf("Total Current I = %.4f A\n", current);
        for (i = 0; i < count; i++)
            printf("Current through R%d = %.4f A\n", i + 1, supply / resistor[i]);
    }

    return 0;
}
