#include <stdio.h>

int main()
{
    int choice;
    double value, result;

    printf("            UNIT CONVERSION\n");
    printf("1. Meter to Kilometer\n");
    printf("2. Kilometer to Meter\n");
    printf("3. Gram to Kilogram\n");
    printf("4. Kilogram to Gram\n");
    printf("5. Hour to Seconds\n");
    printf("6. Seconds to Hour\n");

    printf("\nEnter conversion choice: ");
    scanf("%d", &choice);
    printf("Enter value: ");
    scanf("%lf", &value);

    switch (choice)
    {
    case 1:
        result = value / 1000;
        printf("\n%.4f m = %.4f km\n", value, result);
        break;
    case 2:
        result = value * 1000;
        printf("\n%.4f km = %.4f m\n", value, result);
        break;
    case 3:
        result = value / 1000;
        printf("\n%.4f g = %.4f kg\n", value, result);
        break;
    case 4:
        result = value * 1000;
        printf("\n%.4f kg = %.4f g\n", value, result);
        break;
    case 5:
        result = value * 3600;
        printf("\n%.4f hour(s) = %.4f seconds\n", value, result);
        break;
    case 6:
        result = value / 3600;
        printf("\n%.4f seconds = %.6f hour(s)\n", value, result);
        break;
    default:
        printf("\nInvalid conversion choice!\n");
    }

    return 0;
}
