
#include <stdio.h>

int main() {
    float mass, velocity, kinet_energy;

    printf("Enter Mass of any object\n");
    scanf("%f", &mass);
    printf("Enter Velocity of that object\n");
    scanf("%f", &velocity);

    if (mass < 0) {
    printf("Mass cannot be negative!\n");
    return 0;
   }
        
    kinet_energy = 0.5 * mass* (velocity*velocity);
    printf("The K.E is %.2f J\n ", kinet_energy);
    
    return 0;
}