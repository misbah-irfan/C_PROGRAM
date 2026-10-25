
#include <stdio.h>
#include <math.h>

#define K 9e9
#define EPSILON0 8.85e-12
#define PI 3.14159265358979323846

int main()
{
    int mainChoice, subChoice, count, i;
    double value, result;
    double q, q1, q2, r, t, E, A, angle, flux, work, V, I, R;
    double resistors[50], total, sumInverse;

    do
    {
        printf("        APPLIED PHYSICS CALCULATOR\n");
        printf("1. Unit Conversion\n");
        printf("2. Electric Current\n");
        printf("3. Electric Field\n");
        printf("4. Coulomb's Law\n");
        printf("5. Electric Flux\n");
        printf("6. Gauss's Law\n");
        printf("7. Voltage / Potential Difference\n");
        printf("8. Ohm's Law\n");
        printf("9. DC Circuits (Series / Parallel)\n");
        printf("0. Exit\n");
        printf("\nEnter your choice: ");
        if (scanf("%d", &mainChoice) != 1)
        {
            printf("\nInvalid input! Exiting.\n");
            break;
        }

        switch (mainChoice)
        {
      
        case 1:
            printf("\n--------------------------------------------\n");
            printf("            UNIT CONVERSION\n");
            printf("--------------------------------------------\n");
            printf("1. Meter to Kilometer\n");
            printf("2. Kilometer to Meter\n");
            printf("3. Gram to Kilogram\n");
            printf("4. Kilogram to Gram\n");
            printf("5. Hour to Seconds\n");
            printf("6. Seconds to Hour\n");
            printf("\nEnter conversion choice: ");
            scanf("%d", &subChoice);
            printf("Enter value: ");
            scanf("%lf", &value);

            switch (subChoice)
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
            break;

        case 2:
            printf("\nELECTRIC CURRENT  (I = Q / t)\n");
            printf("Enter charge Q (Coulomb): ");
            scanf("%lf", &q);
            printf("Enter time t (seconds): ");
            scanf("%lf", &t);
            if (t == 0)
                printf("\nTime cannot be zero!\n");
            else
                printf("\nCurrent I = %.4f A\n", q / t);
            break;


        case 3:
            printf("\nELECTRIC FIELD  (E = k q / r^2)\n");
            printf("Enter source charge q (Coulomb): ");
            scanf("%lf", &q);
            printf("Enter distance r (meter): ");
            scanf("%lf", &r);
            if (r == 0)
                printf("\nDistance cannot be zero!\n");
            else
                printf("\nElectric Field E = %.4e N/C\n", K * fabs(q) / (r * r));
            break;

        case 4:
            printf("\nCOULOMB'S LAW  (F = k q1 q2 / r^2)\n");
            printf("Enter charge q1 (Coulomb): ");
            scanf("%lf", &q1);
            printf("Enter charge q2 (Coulomb): ");
            scanf("%lf", &q2);
            printf("Enter distance r (meter): ");
            scanf("%lf", &r);
            if (r == 0)
                printf("\nDistance cannot be zero!\n");
            else
            {
                result = K * fabs(q1 * q2) / (r * r);
                printf("\nForce F = %.4e N (%s)\n", result,
                       (q1 * q2 > 0) ? "repulsive" :
                       (q1 * q2 < 0) ? "attractive" : "no force");
            }
            break;

      
        case 5:
            printf("\nELECTRIC FLUX  (Phi = E A cos(theta))\n");
            printf("Enter electric field E (N/C): ");
            scanf("%lf", &E);
            printf("Enter area A (m^2): ");
            scanf("%lf", &A);
            printf("Enter angle theta (degrees): ");
            scanf("%lf", &angle);
            flux = E * A * cos(angle * PI / 180.0);
            printf("\nElectric Flux Phi = %.4e N m^2/C\n", flux);
            break;

    
        case 6:
            printf("\nGAUSS'S LAW  (Phi = Q / epsilon0)\n");
            printf("1. Find flux from enclosed charge\n");
            printf("2. Find enclosed charge from flux\n");
            printf("\nEnter choice: ");
            scanf("%d", &subChoice);
            if (subChoice == 1)
            {
                printf("Enter enclosed charge Q (Coulomb): ");
                scanf("%lf", &q);
                printf("\nTotal Flux Phi = %.4e N m^2/C\n", q / EPSILON0);
            }
            else if (subChoice == 2)
            {
                printf("Enter total flux Phi (N m^2/C): ");
                scanf("%lf", &flux);
                printf("\nEnclosed Charge Q = %.4e C\n", flux * EPSILON0);
            }
            else
                printf("\nInvalid choice!\n");
            break;


        case 7:
            printf("\nVOLTAGE / POTENTIAL DIFFERENCE\n");
            printf("1. V = W / q\n");
            printf("2. V = k q / r\n");
            printf("\nEnter choice: ");
            scanf("%d", &subChoice);
            if (subChoice == 1)
            {
                printf("Enter work done W (Joule): ");
                scanf("%lf", &work);
                printf("Enter charge q (Coulomb): ");
                scanf("%lf", &q);
                if (q == 0)
                    printf("\nCharge cannot be zero!\n");
                else
                    printf("\nVoltage V = %.4f V\n", work / q);
            }
            else if (subChoice == 2)
            {
                printf("Enter charge q (Coulomb): ");
                scanf("%lf", &q);
                printf("Enter distance r (meter): ");
                scanf("%lf", &r);
                if (r == 0)
                    printf("\nDistance cannot be zero!\n");
                else
                    printf("\nVoltage V = %.4e V\n", K * q / r);
            }
            else
                printf("\nInvalid choice!\n");
            break;
        case 8:
            printf("\nOHM'S LAW  (V = I R)\n");
            printf("1. Find Voltage\n");
            printf("2. Find Current\n");
            printf("3. Find Resistance\n");
            printf("\nEnter choice: ");
            scanf("%d", &subChoice);
            if (subChoice == 1)
            {
                printf("Enter current I (A): ");
                scanf("%lf", &I);
                printf("Enter resistance R (Ohm): ");
                scanf("%lf", &R);
                printf("\nVoltage = %.4f V\n", I * R);
            }
            else if (subChoice == 2)
            {
                printf("Enter voltage V (V): ");
                scanf("%lf", &V);
                printf("Enter resistance R (Ohm): ");
                scanf("%lf", &R);
                if (R == 0)
                    printf("\nResistance cannot be zero!\n");
                else
                    printf("\nCurrent = %.4f A\n", V / R);
            }
            else if (subChoice == 3)
            {
                printf("Enter voltage V (V): ");
                scanf("%lf", &V);
                printf("Enter current I (A): ");
                scanf("%lf", &I);
                if (I == 0)
                    printf("\nCurrent cannot be zero!\n");
                else
                    printf("\nResistance = %.4f Ohm\n", V / I);
            }
            else
                printf("\nInvalid choice!\n");
            break;

        
        case 9:
            printf("\nDC CIRCUITS (SERIES / PARALLEL)\n");
            printf("1. Series circuit\n");
            printf("2. Parallel circuit\n");
            printf("\nEnter choice: ");
            scanf("%d", &subChoice);
            if (subChoice != 1 && subChoice != 2)
            {
                printf("\nInvalid choice!\n");
                break;
            }
            printf("Enter number of resistors (1-50): ");
            scanf("%d", &count);
            if (count < 1 || count > 50)
            {
                printf("\nInvalid number of resistors!\n");
                break;
            }
            total = 0;
            sumInverse = 0;
            for (i = 0; i < count; i++)
            {
                printf("Enter R%d (Ohm): ", i + 1);
                scanf("%lf", &resistors[i]);
                if (resistors[i] <= 0)
                {
                    printf("Resistance must be positive. Re-enter: ");
                    scanf("%lf", &resistors[i]);
                }
                total += resistors[i];
                if (resistors[i] > 0)
                    sumInverse += 1.0 / resistors[i];
            }
            printf("Enter supply voltage V (V): ");
            scanf("%lf", &V);

            if (subChoice == 1)
            {
                I = V / total;
                printf("\nEquivalent Resistance R_eq = %.4f Ohm\n", total);
                printf("Total Current I = %.4f A\n", I);
                for (i = 0; i < count; i++)
                    printf("  Voltage drop across R%d = %.4f V\n", i + 1, I * resistors[i]);
            }
            else
            {
                R = 1.0 / sumInverse;
                printf("\nEquivalent Resistance R_eq = %.4f Ohm\n", R);
                printf("Total Current I = %.4f A\n", V / R);
                for (i = 0; i < count; i++)
                    printf("  Current through R%d = %.4f A\n", i + 1, V / resistors[i]);
            }
            break;

     
        case 0:
            printf("\nThank you for using the program!\n");
            break;

        default:
            printf("\nInvalid main menu choice!\n");
        }
    } while (mainChoice != 0);

    return 0;
}
