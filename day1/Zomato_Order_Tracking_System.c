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
void order(int status);
int main() {
    int status;

    printf("Enter order choice (1-4): ");
    scanf("%d", &status);
    order(status);
    return 0;
}
void order(int status){
    switch (status) {
        case 1:
            printf("Order Placed\n");
            break;
        case 2:
            printf("Your food is being prepared.\n");
            break;
        case 3:
            printf("Out for Delivery\n");
            break;
        case 4:
            printf("Your order has been delivered. Enjoy your meal!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            break;
    }
}

