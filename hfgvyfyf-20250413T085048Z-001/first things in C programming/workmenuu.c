#include <stdio.h>
#include <conio.h>

int main() {
    int op, plate, plates, totalCost = 0, totalamount, change;
    int ff = 3500, cp = 2500, nw = 1500;
    
    // Display the menu
    printf("\t\tMENU\n");
    printf("\t\t----\n");
    printf("\nORDER   | FOOD                     |  PRICE PER QUANTITY|\n");
    printf("--------------------------------------------------------\n");
    printf(" 1.\t| French Fries with Liver  |  3500              |\n");
    printf(" 2.\t| Chicken Pilau            |  2500              |\n");
    printf(" 3.\t| Nile Water               |  1500              |\n");
    printf("--------------------------------------------------------|\n");

    
    while(1) {
        
        printf("\nPlease, Enter your Receipt (1/2/3) or 0 to finish: ");
        scanf("%d", &op);

        if (op == 0) {
            break;  
        }

        
        printf("\nNo of plates: ");
        scanf("%d", &plate);

       
        switch(op) {
            case 1:
                printf("\nYou selected FRENCH FRIES with LIVER\n");
                plates = plate * ff;
                totalCost += plates; 
                break;
            case 2:
                printf("\nYou selected CHICKEN PILAU\n");
                plates = plate * cp;
                totalCost += plates; 
                break;
            case 3:
                printf("\nYou selected NILE WATER\n");
                plates = plate * nw;
                totalCost += plates;  
                break;
            default:
                printf("\nInvalid choice. Please select a valid item.\n");
                continue;  
        }
    }

    
    printf("\n-------------- RECEIPT ------------------\n\n");
    printf("Total Cost: \t\t\t\t%d\n", totalCost);

    
    printf("Total Amount Paid by Client: \t");
    scanf("%d", &totalamount);

    
    if (totalamount < totalCost) {
        printf("\nINSUFFICIENT PAYMENT! YOU OWE %d more.\n", totalCost - totalamount);
    } else {
        change = totalamount - totalCost;
        printf("Change: \t\t\t\t%d\n", change);
    }

    printf("\n----------------WELCOME BACK!!------------------\n");
    
    getch(); 
    return 0;
}