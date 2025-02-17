/*Scenario 1: Zomato Order Tracking System
Zomato provides real-time tracking of food delivery orders. The order status changes
dynamically as the delivery progresses through different stages:
1. Order Placed
2. Preparing Food
3. Out for Delivery
4. Delivered
Problem Statement:
Write a C program that simulates a Zomato order tracking system. The user should
input a number (1-4) corresponding to the order status, and the program should
display the current status message.
Example Output:
Enter order status (1-4): 2
Your food is being prepared.
Enter order status (1-4): 4
Your order has been delivered. Enjoy your meal!
If the user enters an invalid number, display an error message:
&quot;Invalid status. Please enter a number between 1 and 4.&quot;*/

#include <stdio.h>
#include <string.h>

int main() {
    int paymentMethod, bankOption;
    char cardNumber[17], upiID[50];

    printf("Select Payment Method (1-3):\n");
    printf("1. Credit/Debit Card\n");
    printf("2. UPI\n");
    printf("3. Net Banking\n");
    scanf("%d", &paymentMethod);

    switch (paymentMethod) {
        case 1:
            printf("Enter your 16-digit card number: ");
            scanf("%s", cardNumber);
            if (strlen(cardNumber) == 16) {
                printf("Payment Successful!\n");
            } else {
                printf("Transaction Failed. Please try again.\n");
            }
            break;
        case 2:
            printf("Enter your UPI ID (e.g., user@upi): ");
            scanf("%s", upiID);
            // Simple check for '@' in UPI ID
            if (strchr(upiID, '@') != NULL) {
                printf("Payment Successful!\n");
            } else {
                printf("Transaction Failed. Please try again.\n");
            }
            break;
        case 3:
            printf("Select a bank:\n");
            printf("1. SBI\n");
            printf("2. HDFC\n");
            scanf("%d", &bankOption);
            if (bankOption == 1 || bankOption == 2) {
                printf("Payment Successful!\n");
            } else {
                printf("Transaction Failed. Please try again.\n");
            }
            break;
        default:
            printf("Invalid payment method. Please enter a number between 1 and 3.\n");
    }

    return 0;
}
