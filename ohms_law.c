#include <stdio.h>

int main()
{
    int choice;
    double voltage, current, resistance;

    printf("            OHM'S LAW  (V = I R)\n");
    printf("1. Find Voltage\n");
    printf("2. Find Current\n");
    printf("3. Find Resistance\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter current I (A): ");
        scanf("%lf", &current);
        printf("Enter resistance R (Ohm): ");
        scanf("%lf", &resistance);

     
        voltage = current * resistance;
        printf("\nVoltage V = %.4f V\n", voltage);
    }
    else if (choice == 2)
    {
        printf("Enter voltage V (V): ");
        scanf("%lf", &voltage);
        printf("Enter resistance R (Ohm): ");
        scanf("%lf", &resistance);

        if (resistance == 0)
            printf("\nResistance cannot be zero!\n");
        else
        {
            
            current = voltage / resistance;
            printf("\nCurrent I = %.4f A\n", current);
        }
    }
    else if (choice == 3)
    {
        printf("Enter voltage V (V): ");
        scanf("%lf", &voltage);
        printf("Enter current I (A): ");
        scanf("%lf", &current);

        if (current == 0)
            printf("\nCurrent cannot be zero!\n");
        else
        {
            resistance = voltage / current;
            printf("\nResistance R = %.4f Ohm\n", resistance);
        }
    }
    else
    {
        printf("\nInvalid choice!\n");
    }

    return 0;
}
