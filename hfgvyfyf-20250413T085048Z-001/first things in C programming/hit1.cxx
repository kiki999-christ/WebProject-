#include <stdio.h>

int main() {
    int numbers[5];
    int product = 1;

    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        product *= numbers[i];
    }

    printf("Product of the entered integers: %d\n", product);
    return 0;
}