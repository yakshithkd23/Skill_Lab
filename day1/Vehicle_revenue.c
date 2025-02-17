#include <stdio.h>
#include <string.h>

int main() {
    int N;
    int totalRevenue = 0;
    char vehicleType[10];

    // Prompt user for the number of vehicles
    printf("Enter number of vehicles: ");
    scanf("%d", &N);

    // Loop to process each vehicle type
    for (int i = 0; i < N; i++) {
        printf("Enter vehicle type (car, truck, bike): ");
        scanf("%s", vehicleType);

        if (strcmp(vehicleType, "car") == 0) {
            totalRevenue += 50;
        } else if (strcmp(vehicleType, "truck") == 0) {
            totalRevenue += 100;
        } else if (strcmp(vehicleType, "bike") == 0) {
            totalRevenue += 20;
        } else {
            printf("Invalid vehicle type.\n");
        }
    }

    // Display the total revenue
    printf("Total Toll Collection: ₹%d\n", totalRevenue);

    return 0;
}
