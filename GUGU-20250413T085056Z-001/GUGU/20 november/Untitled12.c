#include <stdio.h>

int main() {
    // Declare variables
    int cost_bread = 2500;
    int cost_milk = 1000;
    int cost_sugar_per_kg = 1500;
    int quantity_sugar = 3; // in kilograms
    int total_bill;

    // Calculate the total cost of sugar
    int cost_sugar = cost_sugar_per_kg * quantity_sugar;

    // Calculate the total bill
    total_bill = cost_bread + cost_milk + cost_sugar;

    // Display the total bill
    printf("The total bill the customer has to pay is: %d\n", total_bill);

    return 0;
}
