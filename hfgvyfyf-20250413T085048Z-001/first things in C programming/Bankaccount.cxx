#include <stdio.h>

int main() {
    int pin, enteredPin, choice;
    float balance = 20000.0, amount;

    pin = 12345;

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }

    printf("\nATM Services:\n");
    printf("1 -> Check Balance\n");
    printf("2 -> Withdraw\n");
    printf("3 -> Deposit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Your current balance is: %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Invalid amount. Withdrawal amount must be greater than 0.\n");
            } else if (amount > balance - 2000) {
                printf("Insufficient balance. Minimum balance of 2000 must be maintained.\n");
            } else {
                balance -= amount;
                printf("Withdrawal successful. Your new balance is: %.2f\n", balance);
            }
            break;

        case 3:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Invalid amount. Deposit amount must be greater than 0.\n");
            } else {
                balance += amount;
                printf("Deposit successful. Your new balance is: %.2f\n", balance);
            }
            break;

        default:
            printf("Invalid choice. Please select a valid service.\n");
    }

    return 0;
}
