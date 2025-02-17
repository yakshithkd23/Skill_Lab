#include <stdio.h>

int main() {
    float salary;
    int creditScore, experience;

    //  input details here
    printf("Enter Salary: ");
    scanf("%f", &salary);
    printf("Enter Credit Score: ");
    scanf("%d", &creditScore);
    printf("Enter Experience in years: ");
    scanf("%d", &experience);

    // Check conditions
    if (salary >= 30000 && creditScore >= 750 && experience >= 2) {
        printf("Loan Approved\n");
    } else {
        printf("Loan Denied\n");
    }

    return 0;
}
