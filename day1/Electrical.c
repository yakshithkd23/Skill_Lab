#include <stdio.h>

int main() {
    char name[50];
    int units;
    float charge = 0, surcharge = 0;

    // Input
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculation
    if (units <= 200) {
        charge = units * 0.80;
    } else if (units <= 300) {
        charge = 200 * 0.80 + (units - 200) * 0.90;
    } else {
        charge = 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.00;
    }

    // Adding meter charge
    charge += 100;

    // Checking if surcharge is applicable
    if (charge > 400) {
        surcharge = charge * 0.15;
        charge += surcharge;
    }

    // Output
    printf("\nName: %s\n", name);
    printf("Units consumed: %d\n", units);
    printf("Electricity charge: Rs. %.2f\n", charge);
    printf("Surcharge: Rs. %.2f\n", surcharge);
    printf("Total amount: Rs. %.2f\n", charge + surcharge);544

    return 0;
}
