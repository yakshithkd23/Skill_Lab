#include <stdio.h>

int main() {
    int N, weight;
    int accepted = 0, rejected = 0;

    // specify number of products 
    printf("Enter number of products: ");
    scanf("%d", &N);

    // logic 
    for (int i = 0; i < N; i++) {
        printf("Enter weight (in grams): ");
        scanf("%d", &weight);
        if (weight >= 950 && weight <= 1050) {
            accepted++;
        } else {
            rejected++;
        }
    }

    // Display the results
    printf("Accepted Products: %d\n", accepted);
    printf("Rejected Products: %d\n", rejected);

    return 0;
}
