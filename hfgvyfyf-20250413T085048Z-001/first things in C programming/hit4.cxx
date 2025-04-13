#include <stdio.h>

int main() {
    int marks[5] = {80, 85, 70, 60, 84};
    int temp;

    // Sorting the array
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (marks[i] > marks[j]) {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    printf("Sorted marks: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");
    return 0;
}