#include <stdio.h>

int main() {
    int marks[5] = {80, 85, 70, 60, 84};
    int countA = 0;

    for (int i = 0; i < 5; i++) {
        if (marks[i] >= 80 && marks[i] <= 100) {
            countA++;
        }
    }

    printf("Number of students who scored Grade A: %d\n", countA);
    return 0;
}