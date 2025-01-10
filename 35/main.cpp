#include <iostream>
#include <string>
using namespace std;

// Declaring functions up top. We'll define them below main().
int getGradePoint(float percentage); 
float calculateCGPA(float percentages[], int credits[], int numCourses);

int main() {
    const int MAX_COURSES = 50;  // Who needs more than 50 courses?
    float percentages[MAX_COURSES];  // Store marks for each course
    int credits[MAX_COURSES];  // Store credits for each course
    int numCourses = 0;  // Counter for courses

    string input;

    cout << "Ready to calculate your CGPA? Type 'end' to stop.\n";

    while (true) {
        cout << "\nEnter total marks for the course (0-100): ";
        cin >> input;

        if (input == "end") break;  // End if user types 'end'

        float percentage = stof(input);  // Convert input to float
        cout << "Enter credits for the course: ";
        cin >> credits[numCourses];

        percentages[numCourses] = percentage;  // Store data
        numCourses++;
    }

    float cgpa = calculateCGPA(percentages, credits, numCourses);  // Calculate CGPA

    cout << "\nYour CGPA is: " << cgpa << endl;  // Display result

    return 0;
}

// Converts percentage to grade points
int getGradePoint(float percentage) {
    if (percentage >= 90) return 10;
    else if (percentage >= 80) return 9;
    else if (percentage >= 70) return 8;
    else if (percentage >= 60) return 7;
    else if (percentage >= 50) return 6;
    else if (percentage >= 40) return 5;
    else return 0;  // Oops, not the best grade
}

// Calculates CGPA based on entered data
float calculateCGPA(float percentages[], int credits[], int numCourses) {
    float totalWeightedGradePoints = 0;  // Total weighted points
    int totalCredits = 0;  // Total credits

    for (int i = 0; i < numCourses; i++) {
        float percentage = percentages[i];
        int gradePoint = getGradePoint(percentage);  // Get grade point
        totalWeightedGradePoints += gradePoint * credits[i];  // Weighted points
        totalCredits += credits[i];  // Sum of credits
    }

    return (totalCredits == 0) ? 0.0 : totalWeightedGradePoints / totalCredits;  // CGPA formula
}
