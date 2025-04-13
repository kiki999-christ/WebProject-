//write a program in c to show the simple calculator using user defined functions and each operator must have their own function separated.

#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2, result;
    char operator;

    // Display menu
    printf("Simple Calculator\n");
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operator);

    // Input numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform the operation
    if (operator == '+') {
        result = add(num1, num2);
        printf("Result: %.2f\n", result);
    } else if (operator == '-') {
        result = subtract(num1, num2);
        printf("Result: %.2f\n", result);
    } else if (operator == '*') {
        result = multiply(num1, num2);
        printf("Result: %.2f\n", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = divide(num1, num2);
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
