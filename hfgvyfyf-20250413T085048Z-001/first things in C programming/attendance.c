//Attendance Check Program

#include <stdio.h>

int main() {
    int totalDays = 14; // Total days in a module
    int attendedDays;
    float attendancePercentage;

    // Input: Number of days a student attended
    printf("Enter the number of days the student attended (out of 14): ");

    scanf("%d", &attendedDays);

    // Calculate attendance percentage
    attendancePercentage = (attendedDays / (float)totalDays) * 100;

    // Print total days attended and percentage
    printf("Total Days Attended: %d\n", attendedDays);
    printf("Attendance Percentage: %.2f%%\n", attendancePercentage);

    // Check eligibility
    if (attendancePercentage >= 85) {
        printf("The student is allowed to sit in the exam.\n");
    } else {
        printf("The student is NOT allowed to sit in the exam.\n");
    }


    return 0;
}
