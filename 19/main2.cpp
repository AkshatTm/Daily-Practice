#include <stdio.h>

#define MAX_SUBJECTS 5 // Constant to define the maximum number of subjects

int main() {
    // Declare variables
    int marks[MAX_SUBJECTS];
    int total = 0;
    float average;
    char grade;
    int i;

    // Output an introduction
    printf("Welcome to the Student Grade Calculator!\n");
    printf("Enter marks for %d subjects (out of 100):\n", MAX_SUBJECTS);

    // Use a loop to get marks for each subject
    for (i = 0; i < MAX_SUBJECTS; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Validate marks input
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input! Marks should be between 0 and 100. Exiting...\n");
            return 1; // Exit with an error code
        }

        total += marks[i]; // Add marks to the total
    }

    // Calculate average marks
    average = total / (float)MAX_SUBJECTS;

    // Determine grade using if-else statements
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 75) {
        grade = 'B';
    } else if (average >= 50) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    // Output results
    printf("\n--- Results ---\n");
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    // Provide feedback using a switch-case statement
    switch (grade) {
        case 'A':
            printf("Excellent work! Keep it up!\n");
            break;
        case 'B':
            printf("Good job! Aim for an A next time!\n");
            break;
        case 'C':
            printf("You passed, but there's room for improvement.\n");
            break;
        case 'F':
            printf("Unfortunately, you failed. Study harder next time.\n");
            break;
        default:
            printf("Unexpected grade. Check the calculation logic.\n");
    }

    // End the program
    printf("\nThank you for using the Grade Calculator. Goodbye!\n");
    return 0;
}
