#include <stdio.h> 
#include <string.h>
#include "Employee.h"
#include "queue.h"

Queue q;  // Global Queue to maintain state across operations
int i;

void readEmployees(Employee emp[], int n);
void deleteEmployeeByName(Queue* q, char* name);
void displayEmployees(Employee emp[], int n);
void displayEmployeesUsingQueue(Employee emp[], int n);
void manageEmployees();

int main() {    
    Init(&q);  // Initialize the global queue
    manageEmployees(); 
    return 0;
}

void manageEmployees() {
    int employeeCount;    
    Employee employees[1000];    
    int choice;
    
    do {
        printf("Choices:\n");
        printf("1- Read Employees\n");
        printf("2- Display Employees\n");
        printf("3- Display Employees using Queue\n");
        printf("4- Delete Employee by Name\n");
        printf("91- Exit\n");
        printf("Your Choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: {                
                printf("Enter number of employees: ");
                scanf("%d", &employeeCount);
                readEmployees(employees, employeeCount);
            } break;
            
            case 2: {
                displayEmployees(employees, employeeCount);    
            } break;
            
            case 3: {
                displayEmployeesUsingQueue(employees, employeeCount);    
            } break;
            
            case 4: {
                char name[50];  // Buffer to store employee name
                printf("Enter the name of the employee to delete: ");
                scanf("%s", name);
                deleteEmployeeByName(&q, name);
            } break;

            case 91: {
                printf("Thank you for using the app...\n");
            } break;
            
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 91);
}

void readEmployees(Employee emp[], int n) {
    printf("Enter details (ID, Name, Salary, Department):\n");
    for(int I = 0; I < n; I++) {
        scanf("%d %s %f %s", &emp[I].id, emp[I].name, 
                             &emp[I].salary, emp[I].department);
        QueueEnqueue(&q, emp[I]);  // Add employees to the queue
    }
}

void displayEmployees(Employee emp[], int n) {
    printf("--------------------------------------------------------------------\n");
    printf("|%5s | %-20s | %8s | %10s |\n", "ID", "Name", "Salary", "Department");
    printf("--------------------------------------------------------------------\n");
    
    for(int I = 0; I < n; I++) {
        printf("|%5d | %-20s | %8.2f | %10s |\n", emp[I].id, emp[I].name, 
                                              emp[I].salary, emp[I].department);
    }
    
    printf("--------------------------------------------------------------------\n");
}

void displayEmployeesUsingQueue(Employee emp[], int n) {
    if (QueueEmpty(&q)) {
        printf("No employees to display.\n");
        return;
    }

    printf("--------------------------------------------------------------------\n");
    printf("|%5s | %-20s | %8s | %10s |\n", "ID", "Name", "Salary", "Department");
    printf("--------------------------------------------------------------------\n");

    Queue tempQueue;
    Init(&tempQueue);

    while (!QueueEmpty(&q)) {
        Employee employee = QueueFront(&q);
        printf("|%5d | %-20s | %8.2f | %10s |\n", employee.id, employee.name, 
                                                  employee.salary, employee.department);
        QueueEnqueue(&tempQueue, employee);  // Store in tempQueue
        QueueDequeue(&q);
    }

    printf("--------------------------------------------------------------------\n");

    // Restore original queue
    while (!QueueEmpty(&tempQueue)) {
        QueueEnqueue(&q, QueueFront(&tempQueue));
        QueueDequeue(&tempQueue);
    }
}

void deleteEmployeeByName(Queue* q, char* name) {
    if (QueueEmpty(q)) {
        printf("Queue is empty. No employees to delete.\n");
        return;
    }

    Queue tempQueue;
    Init(&tempQueue);
    int found = 0;

    while (!QueueEmpty(q)) {
        Employee employee = QueueFront(q);
        QueueDequeue(q);

        if (strcmp(employee.name, name) == 0) {
            found = 1;
            printf("Employee '%s' deleted successfully.\n", name);
            continue;  // Skip enqueuing this employee (deleting them)
        }
        QueueEnqueue(&tempQueue, employee);
    }

    // Restore original queue
    while (!QueueEmpty(&tempQueue)) {
        QueueEnqueue(q, QueueFront(&tempQueue));
        QueueDequeue(&tempQueue);
    }

    if (!found) {
        printf("Employee '%s' not found.\n", name);
    }
}
