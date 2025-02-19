#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Students {
    char student[50];  // Name of the student
    char **subjects;   // Array of subjects (strings)
    int *marks;        // Array of marks (integers)
    int num_subjects;  // Number of subjects
};

// Function to create a student and take input
void create_student(struct Students *s) {
    printf("\nEnter the name: ");
    scanf(" %[^\n]", s->student); // Read full name with spaces

    printf("Enter the number of subjects: ");
    scanf("%d", &s->num_subjects);

    // Allocate memory for subjects and marks
    s->subjects = (char **)malloc(s->num_subjects * sizeof(char *));
    s->marks = (int *)malloc(s->num_subjects * sizeof(int));

    for (int i = 0; i < s->num_subjects; i++) {
        s->subjects[i] = (char *)malloc(50 * sizeof(char)); // Allocating memory for subject name

        printf("Enter subject %d: ", i + 1);
        scanf(" %[^\n]", s->subjects[i]);

        printf("Enter mark for %s: ", s->subjects[i]);
        scanf("%d", &s->marks[i]);
    }
}

// Function to print student details
void print_student_details(struct Students *s) {
    printf("\nStudent: %s\n", s->student);
    int total_marks = 0;

    for (int i = 0; i < s->num_subjects; i++) {
        printf("  Subject: %s, Mark: %d\n", s->subjects[i], s->marks[i]);
        total_marks += s->marks[i];
    }
    printf("  Total Marks: %d\n", total_marks);
}

// Function to free allocated memory
void free_student(struct Students *s) {
    for (int i = 0; i < s->num_subjects; i++) {
        free(s->subjects[i]);  // Free each subject name
    }
    free(s->subjects);
    free(s->marks);
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Students *student_list = (struct Students *)malloc(n * sizeof(struct Students));

    for (int i = 0; i < n; i++) {
        create_student(&student_list[i]);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        print_student_details(&student_list[i]);
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free_student(&student_list[i]);
    }
    free(student_list);

    return 0;
}
