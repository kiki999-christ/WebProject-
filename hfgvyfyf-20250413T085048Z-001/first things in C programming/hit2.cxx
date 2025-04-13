#include <stdio.h>

int main() {
    int ages[4];
    int oldest, youngest;

    printf("Enter the ages of 4 siblings: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &ages[i]);
    }

    oldest = youngest = ages[0];
    for (int i = 1; i < 4; i++) {
        if (ages[i] > oldest) {
            oldest = ages[i];
        }
        if (ages[i] < youngest) {
            youngest = ages[i];
        }
    }

    printf("Oldest sibling's age: %d\n", oldest);
    printf("Youngest sibling's age: %d\n", youngest);
    return 0;
}