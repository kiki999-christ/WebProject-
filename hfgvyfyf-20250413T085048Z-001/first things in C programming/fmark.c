
#include <stdio.h>

int main() {
    // Marks for each subject
    int marks[] = {50, 80, 90, 90, 95, 90};
    int numSubjects = 6; // Total number of subjects

    // Variables to calculate results
    int sum = 0, max = marks[0], min = marks[0];
    float average;

    // Compute summation, maximum, and minimum
    for (int i = 0; i < numSubjects; i++) {
        sum += marks[i];

        if (marks[i] > max) {
            max = marks[i];
        }


        if (marks[i] < min) {
            min = marks[i];
        }
    }

    // Calculate the average
    average = (float)sum / numSubjects;

    // Display results
    printf("Results:\n");
    printf("Mathematics = %d marks\n", marks[0]);
    printf("English = %d marks\n", marks[1]);
    printf("Entrepreneurship = %d marks\n", marks[2]);
    printf("ICT = %d marks\n", marks[3]);
    printf("ELS Practical = %d marks\n", marks[4]);
    printf("Kinyarwanda = %d marks\n", marks[5]);

    printf("\nTotal Marks = %d\n", sum);
    printf("Average Marks = %.2f\n", average);
    printf("Maximum Marks = %d\n", max);
    printf("Minimum Marks = %d\n", min);

    return 0;
}
